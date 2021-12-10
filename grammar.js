module.exports = grammar({
    name: "goal",

    conflicts: $ => [
        [$._expression, $._identifier]
    ],

    extras: $ => [
        /\s/,
        $.line_comment,
    ],

    rules: {
        source_file: $ => repeat(
            $._definition,
        ),

        _definition: $ => choice(
            $.environment,
            $.if_then,
            $.forall_do,
        ),

        // Environment
        environment: $ => seq(
            "use",
            field("path", $.string_literal),
            "as environment",
            optional(seq(
                "with",
                sepBy1(",", $.env_pair),
            )),
            "."
        ),

        env_pair: $ => seq(
            field("key", $.id),
            "=",
            field("value", $.value),
        ),

        // Then
        if_then: $ => seq(
            "if",
            field("conditions", $.csq),
            "then",
            field("action", $.actioncombo),
            "."
        ),

        // Forall
        forall_do: $ => seq(
            "forall",
            field("conditions", $.csq),
            "do",
            field("action", $.actioncombo),
            "."
        ),

        query: $ => sepBy1(",", $._expression),

        // Prolog
        fact: $ => seq(
            field("name", $._identifier),
            optional(field("parameters", $.fact_parameters)),
        ),

        fact_parameters: $ => seq(
            "(",
            sepBy1(",", $._expression),
            ")"
        ),

        _expression: $ => choice(
            $.fact,
            $.variable,
        ),

        // Communication
        csq: $ => sepBy1(",", $.stateliteral),

        stateliteral: $ => choice(
            $.statecond,
            $.true_literal,
        ),

        statecond: $ => seq(
            optional(seq($.selector, ".")),
            $.stateop,
            "(",
            $.query,
            ")"
        ),

        stateop: $ => choice(
            "bel",
            "goal",
            "a-goal",
            "goal-a",
            "percept",
            $.sent,
        ),

        selector: $ => choice(
            $.selector_literal,
            seq("(", $.parameters, ")"),
        ),

        selector_literal: $ => choice(
            "all",
            "allother",
            "some",
            "someother",
            "self",
            "this",
        ),

        actioncombo: $ => sepBy1("+", $.action),

        action: $ => choice(
            $.selectoraction,
            seq($.id, optional(seq(
                "(",
                $.parameters,
                ")"
            ))),
        ),

        selectoraction: $ => seq(
            optional(seq($.selector, ".")),
            choice("insert", "delete", "adopt", "drop", $.send),
            "(",
            $.query,
            ")"
        ),

        send: $ => seq("send", optional(choice(":", "?", "!"))),
        sent: $ => seq("sent", optional(choice(":", "?", "!"))),

        parameters: $ => sepBy1(",", $._identifier),

        // Literals
        id: $ => token(seq(
            choice("_", /[a-z]/),
            optional(/[a-zA-Z\d_]*/)
        )),

        value: $ => choice(
            $.string_literal,
        ),

        string_literal: $ => seq(
            '"',
            $._unescaped_double_string_fragment,
            '"',
        ),

        true_literal: $ => "true",

        _identifier: $ => choice(
            $.variable,
            $.atom,
        ),

        variable: $ => token(seq(
            /[A-Z]/,
            optional(/[a-zA-Z_\d]+/),
        )),

        atom: $ => choice(
            "_",
            $._lowercase_atom,
            $._quoted_atom,
        ),

        _lowercase_atom: $ => seq(
            /[a-z]/,
            optional(/[a-zA-Z_\d]+/),
        ),

        _quoted_atom: $ => seq(
            "'",
            $._unescaped_single_string_fragment,
            "'",
        ),

        _unescaped_double_string_fragment: $ => token.immediate(
            prec(1, /[^"\\]+/)
        ),

        _unescaped_single_string_fragment: $ => token.immediate(
            prec(1, /[^'\\]+/)
        ),

        line_comment: $ => token(seq(
            "%", /.*/
        )),
    }
})

function sepBy1(sep, rule) {
    return seq(rule, repeat(seq(sep, rule)))
}

function sepBy0(sep, rule) {
    return optional(sepBy1(sep, rule))
}