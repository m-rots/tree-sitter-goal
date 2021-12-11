(environment
    "use" @keyword
    "as environment" @keyword)

(environment
    "with" @keyword)

(env_pair
    (id) @variable
    "=" @operator)

(if_then
    "if" @keyword
    "then" @keyword
    "." @keyword)

(forall_do
    "forall" @keyword
    "do" @keyword
    "." @keyword)

(selectoraction [
    "insert"
    "delete"
    "adopt"
    "drop"
] @keyword)

(actioncombo "+" @operator)
(action (id) @function)

(fact
    name: (atom) @function
    parameters: (fact_parameters))

(send "send" @keyword)
(send ["?" ":" "!"] @keyword)

(sent "sent" @keyword)
(sent ["?" ":" "!"] @keyword)

(stateop) @keyword

(selector_literal) @type

; "{" @punctuation.bracket
; "}" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket
; "[" @punctuation.bracket
; "]" @punctuation.bracket

"," @punctuation.delimiter
"." @punctuation.delimiter

(atom) @constant
(variable) @type
(string_literal) @string
(true_literal) @constant.builtin

(line_comment) @comment