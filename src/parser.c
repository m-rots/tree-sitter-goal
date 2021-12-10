#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_use = 1,
  anon_sym_asenvironment = 2,
  anon_sym_with = 3,
  anon_sym_COMMA = 4,
  anon_sym_DOT = 5,
  anon_sym_EQ = 6,
  anon_sym_if = 7,
  anon_sym_then = 8,
  anon_sym_forall = 9,
  anon_sym_do = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_bel = 13,
  anon_sym_goal = 14,
  anon_sym_a_DASHgoal = 15,
  anon_sym_goal_DASHa = 16,
  anon_sym_percept = 17,
  anon_sym_all = 18,
  anon_sym_allother = 19,
  anon_sym_some = 20,
  anon_sym_someother = 21,
  anon_sym_self = 22,
  anon_sym_this = 23,
  anon_sym_PLUS = 24,
  anon_sym_insert = 25,
  anon_sym_delete = 26,
  anon_sym_adopt = 27,
  anon_sym_drop = 28,
  anon_sym_send = 29,
  anon_sym_COLON = 30,
  anon_sym_QMARK = 31,
  anon_sym_BANG = 32,
  anon_sym_sent = 33,
  sym_id = 34,
  anon_sym_DQUOTE = 35,
  sym_true_literal = 36,
  sym_variable = 37,
  anon_sym__ = 38,
  aux_sym__lowercase_atom_token1 = 39,
  aux_sym__lowercase_atom_token2 = 40,
  anon_sym_SQUOTE = 41,
  sym__unescaped_double_string_fragment = 42,
  sym__unescaped_single_string_fragment = 43,
  sym_line_comment = 44,
  sym_source_file = 45,
  sym__definition = 46,
  sym_environment = 47,
  sym_env_pair = 48,
  sym_if_then = 49,
  sym_forall_do = 50,
  sym_query = 51,
  sym_fact = 52,
  sym_fact_parameters = 53,
  sym__expression = 54,
  sym_csq = 55,
  sym_stateliteral = 56,
  sym_statecond = 57,
  sym_stateop = 58,
  sym_selector = 59,
  sym_selector_literal = 60,
  sym_actioncombo = 61,
  sym_action = 62,
  sym_selectoraction = 63,
  sym_send = 64,
  sym_sent = 65,
  sym_parameters = 66,
  sym_value = 67,
  sym_string_literal = 68,
  sym__identifier = 69,
  sym_atom = 70,
  sym__lowercase_atom = 71,
  sym__quoted_atom = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_environment_repeat1 = 74,
  aux_sym_query_repeat1 = 75,
  aux_sym_csq_repeat1 = 76,
  aux_sym_actioncombo_repeat1 = 77,
  aux_sym_parameters_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_use] = "use",
  [anon_sym_asenvironment] = "as environment",
  [anon_sym_with] = "with",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_forall] = "forall",
  [anon_sym_do] = "do",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bel] = "bel",
  [anon_sym_goal] = "goal",
  [anon_sym_a_DASHgoal] = "a-goal",
  [anon_sym_goal_DASHa] = "goal-a",
  [anon_sym_percept] = "percept",
  [anon_sym_all] = "all",
  [anon_sym_allother] = "allother",
  [anon_sym_some] = "some",
  [anon_sym_someother] = "someother",
  [anon_sym_self] = "self",
  [anon_sym_this] = "this",
  [anon_sym_PLUS] = "+",
  [anon_sym_insert] = "insert",
  [anon_sym_delete] = "delete",
  [anon_sym_adopt] = "adopt",
  [anon_sym_drop] = "drop",
  [anon_sym_send] = "send",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_sent] = "sent",
  [sym_id] = "id",
  [anon_sym_DQUOTE] = "\"",
  [sym_true_literal] = "true_literal",
  [sym_variable] = "variable",
  [anon_sym__] = "_",
  [aux_sym__lowercase_atom_token1] = "_lowercase_atom_token1",
  [aux_sym__lowercase_atom_token2] = "_lowercase_atom_token2",
  [anon_sym_SQUOTE] = "'",
  [sym__unescaped_double_string_fragment] = "_unescaped_double_string_fragment",
  [sym__unescaped_single_string_fragment] = "_unescaped_single_string_fragment",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_environment] = "environment",
  [sym_env_pair] = "env_pair",
  [sym_if_then] = "if_then",
  [sym_forall_do] = "forall_do",
  [sym_query] = "query",
  [sym_fact] = "fact",
  [sym_fact_parameters] = "fact_parameters",
  [sym__expression] = "_expression",
  [sym_csq] = "csq",
  [sym_stateliteral] = "stateliteral",
  [sym_statecond] = "statecond",
  [sym_stateop] = "stateop",
  [sym_selector] = "selector",
  [sym_selector_literal] = "selector_literal",
  [sym_actioncombo] = "actioncombo",
  [sym_action] = "action",
  [sym_selectoraction] = "selectoraction",
  [sym_send] = "send",
  [sym_sent] = "sent",
  [sym_parameters] = "parameters",
  [sym_value] = "value",
  [sym_string_literal] = "string_literal",
  [sym__identifier] = "_identifier",
  [sym_atom] = "atom",
  [sym__lowercase_atom] = "_lowercase_atom",
  [sym__quoted_atom] = "_quoted_atom",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_csq_repeat1] = "csq_repeat1",
  [aux_sym_actioncombo_repeat1] = "actioncombo_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_asenvironment] = anon_sym_asenvironment,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bel] = anon_sym_bel,
  [anon_sym_goal] = anon_sym_goal,
  [anon_sym_a_DASHgoal] = anon_sym_a_DASHgoal,
  [anon_sym_goal_DASHa] = anon_sym_goal_DASHa,
  [anon_sym_percept] = anon_sym_percept,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_allother] = anon_sym_allother,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_someother] = anon_sym_someother,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_adopt] = anon_sym_adopt,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_send] = anon_sym_send,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_sent] = anon_sym_sent,
  [sym_id] = sym_id,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_true_literal] = sym_true_literal,
  [sym_variable] = sym_variable,
  [anon_sym__] = anon_sym__,
  [aux_sym__lowercase_atom_token1] = aux_sym__lowercase_atom_token1,
  [aux_sym__lowercase_atom_token2] = aux_sym__lowercase_atom_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__unescaped_double_string_fragment] = sym__unescaped_double_string_fragment,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_environment] = sym_environment,
  [sym_env_pair] = sym_env_pair,
  [sym_if_then] = sym_if_then,
  [sym_forall_do] = sym_forall_do,
  [sym_query] = sym_query,
  [sym_fact] = sym_fact,
  [sym_fact_parameters] = sym_fact_parameters,
  [sym__expression] = sym__expression,
  [sym_csq] = sym_csq,
  [sym_stateliteral] = sym_stateliteral,
  [sym_statecond] = sym_statecond,
  [sym_stateop] = sym_stateop,
  [sym_selector] = sym_selector,
  [sym_selector_literal] = sym_selector_literal,
  [sym_actioncombo] = sym_actioncombo,
  [sym_action] = sym_action,
  [sym_selectoraction] = sym_selectoraction,
  [sym_send] = sym_send,
  [sym_sent] = sym_sent,
  [sym_parameters] = sym_parameters,
  [sym_value] = sym_value,
  [sym_string_literal] = sym_string_literal,
  [sym__identifier] = sym__identifier,
  [sym_atom] = sym_atom,
  [sym__lowercase_atom] = sym__lowercase_atom,
  [sym__quoted_atom] = sym__quoted_atom,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_csq_repeat1] = aux_sym_csq_repeat1,
  [aux_sym_actioncombo_repeat1] = aux_sym_actioncombo_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asenvironment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a_DASHgoal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goal_DASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_percept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allother] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_someother] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adopt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sent] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_true_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__lowercase_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lowercase_atom_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then] = {
    .visible = true,
    .named = true,
  },
  [sym_forall_do] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_csq] = {
    .visible = true,
    .named = true,
  },
  [sym_stateliteral] = {
    .visible = true,
    .named = true,
  },
  [sym_statecond] = {
    .visible = true,
    .named = true,
  },
  [sym_stateop] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_actioncombo] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_selectoraction] = {
    .visible = true,
    .named = true,
  },
  [sym_send] = {
    .visible = true,
    .named = true,
  },
  [sym_sent] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__lowercase_atom] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_atom] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_csq_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actioncombo_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_action = 1,
  field_conditions = 2,
  field_key = 3,
  field_name = 4,
  field_parameters = 5,
  field_path = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_conditions] = "conditions",
  [field_key] = "key",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_action, 3},
    {field_conditions, 1},
  [4] =
    {field_name, 0},
    {field_parameters, 1},
  [6] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(170);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(125);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(170);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '_' ||
          lookahead == 'b' ||
          lookahead == 'c' ||
          ('e' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 's') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 81:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_asenvironment);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_bel);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_goal);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_a_DASHgoal);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_goal_DASHa);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_percept);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == 'o') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_allother);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_allother);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_someother);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_someother);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_insert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_adopt);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_adopt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_drop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_send);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_send);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_sent);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__lowercase_atom_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__lowercase_atom_token1);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__lowercase_atom_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 82},
  [22] = {.lex_state = 82},
  [23] = {.lex_state = 82},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 82},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 82},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 82},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 82},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 82},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 82},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 82},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_a_DASHgoal] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym__lowercase_atom_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(97),
    [sym__definition] = STATE(17),
    [sym_environment] = STATE(17),
    [sym_if_then] = STATE(17),
    [sym_forall_do] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_goal,
    ACTIONS(23), 1,
      anon_sym_sent,
    ACTIONS(25), 1,
      sym_true_literal,
    STATE(21), 1,
      sym_stateliteral,
    STATE(47), 1,
      sym_statecond,
    STATE(76), 1,
      sym_stateop,
    STATE(78), 1,
      sym_sent,
    STATE(90), 1,
      sym_csq,
    STATE(95), 1,
      sym_selector,
    STATE(96), 1,
      sym_selector_literal,
    ACTIONS(19), 2,
      anon_sym_all,
      anon_sym_some,
    ACTIONS(15), 4,
      anon_sym_bel,
      anon_sym_a_DASHgoal,
      anon_sym_goal_DASHa,
      anon_sym_percept,
    ACTIONS(21), 4,
      anon_sym_allother,
      anon_sym_someother,
      anon_sym_self,
      anon_sym_this,
  [53] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_goal,
    ACTIONS(23), 1,
      anon_sym_sent,
    ACTIONS(25), 1,
      sym_true_literal,
    STATE(21), 1,
      sym_stateliteral,
    STATE(47), 1,
      sym_statecond,
    STATE(76), 1,
      sym_stateop,
    STATE(78), 1,
      sym_sent,
    STATE(95), 1,
      sym_selector,
    STATE(96), 1,
      sym_selector_literal,
    STATE(98), 1,
      sym_csq,
    ACTIONS(19), 2,
      anon_sym_all,
      anon_sym_some,
    ACTIONS(15), 4,
      anon_sym_bel,
      anon_sym_a_DASHgoal,
      anon_sym_goal_DASHa,
      anon_sym_percept,
    ACTIONS(21), 4,
      anon_sym_allother,
      anon_sym_someother,
      anon_sym_self,
      anon_sym_this,
  [106] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_goal,
    ACTIONS(23), 1,
      anon_sym_sent,
    ACTIONS(25), 1,
      sym_true_literal,
    STATE(47), 1,
      sym_statecond,
    STATE(50), 1,
      sym_stateliteral,
    STATE(76), 1,
      sym_stateop,
    STATE(78), 1,
      sym_sent,
    STATE(95), 1,
      sym_selector,
    STATE(96), 1,
      sym_selector_literal,
    ACTIONS(19), 2,
      anon_sym_all,
      anon_sym_some,
    ACTIONS(15), 4,
      anon_sym_bel,
      anon_sym_a_DASHgoal,
      anon_sym_goal_DASHa,
      anon_sym_percept,
    ACTIONS(21), 4,
      anon_sym_allother,
      anon_sym_someother,
      anon_sym_self,
      anon_sym_this,
  [156] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_send,
    ACTIONS(31), 1,
      sym_id,
    STATE(48), 1,
      sym_action,
    STATE(59), 1,
      sym_selectoraction,
    STATE(80), 1,
      sym_actioncombo,
    STATE(85), 1,
      sym_selector,
    STATE(87), 1,
      sym_send,
    STATE(96), 1,
      sym_selector_literal,
    ACTIONS(27), 4,
      anon_sym_insert,
      anon_sym_delete,
      anon_sym_adopt,
      anon_sym_drop,
    ACTIONS(19), 6,
      anon_sym_all,
      anon_sym_allother,
      anon_sym_some,
      anon_sym_someother,
      anon_sym_self,
      anon_sym_this,
  [201] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_send,
    ACTIONS(31), 1,
      sym_id,
    STATE(48), 1,
      sym_action,
    STATE(59), 1,
      sym_selectoraction,
    STATE(85), 1,
      sym_selector,
    STATE(86), 1,
      sym_actioncombo,
    STATE(87), 1,
      sym_send,
    STATE(96), 1,
      sym_selector_literal,
    ACTIONS(27), 4,
      anon_sym_insert,
      anon_sym_delete,
      anon_sym_adopt,
      anon_sym_drop,
    ACTIONS(19), 6,
      anon_sym_all,
      anon_sym_allother,
      anon_sym_some,
      anon_sym_someother,
      anon_sym_self,
      anon_sym_this,
  [246] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_send,
    ACTIONS(31), 1,
      sym_id,
    STATE(58), 1,
      sym_action,
    STATE(59), 1,
      sym_selectoraction,
    STATE(85), 1,
      sym_selector,
    STATE(87), 1,
      sym_send,
    STATE(96), 1,
      sym_selector_literal,
    ACTIONS(27), 4,
      anon_sym_insert,
      anon_sym_delete,
      anon_sym_adopt,
      anon_sym_drop,
    ACTIONS(19), 6,
      anon_sym_all,
      anon_sym_allother,
      anon_sym_some,
      anon_sym_someother,
      anon_sym_self,
      anon_sym_this,
  [288] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      sym_variable,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym_query,
    STATE(24), 2,
      sym__identifier,
      sym_atom,
    STATE(54), 2,
      sym_fact,
      sym__expression,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
  [319] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      sym_variable,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_query,
    STATE(24), 2,
      sym__identifier,
      sym_atom,
    STATE(54), 2,
      sym_fact,
      sym__expression,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
  [350] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      sym_variable,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_query,
    STATE(24), 2,
      sym__identifier,
      sym_atom,
    STATE(54), 2,
      sym_fact,
      sym__expression,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
  [381] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      sym_variable,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_query,
    STATE(24), 2,
      sym__identifier,
      sym_atom,
    STATE(54), 2,
      sym_fact,
      sym__expression,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
  [412] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      sym_variable,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(24), 2,
      sym__identifier,
      sym_atom,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
    STATE(71), 2,
      sym_fact,
      sym__expression,
  [440] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      sym_variable,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(24), 2,
      sym__identifier,
      sym_atom,
    STATE(41), 2,
      sym_fact,
      sym__expression,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
  [468] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      anon_sym_forall,
    STATE(14), 5,
      sym__definition,
      sym_environment,
      sym_if_then,
      sym_forall_do,
      aux_sym_source_file_repeat1,
  [491] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      sym_variable,
    STATE(82), 1,
      sym_parameters,
    STATE(36), 2,
      sym__identifier,
      sym_atom,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
  [518] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      sym_variable,
    STATE(92), 1,
      sym_parameters,
    STATE(36), 2,
      sym__identifier,
      sym_atom,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
  [545] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_forall,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(14), 5,
      sym__definition,
      sym_environment,
      sym_if_then,
      sym_forall_do,
      aux_sym_source_file_repeat1,
  [568] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_goal,
    ACTIONS(23), 1,
      anon_sym_sent,
    STATE(78), 1,
      sym_sent,
    STATE(91), 1,
      sym_stateop,
    ACTIONS(15), 4,
      anon_sym_bel,
      anon_sym_a_DASHgoal,
      anon_sym_goal_DASHa,
      anon_sym_percept,
  [590] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym__,
    ACTIONS(37), 1,
      aux_sym__lowercase_atom_token1,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      sym_variable,
    STATE(55), 2,
      sym__lowercase_atom,
      sym__quoted_atom,
    STATE(62), 2,
      sym__identifier,
      sym_atom,
  [614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(60), 1,
      anon_sym_send,
    STATE(83), 1,
      sym_send,
    ACTIONS(58), 4,
      anon_sym_insert,
      anon_sym_delete,
      anon_sym_adopt,
      anon_sym_drop,
  [630] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_csq_repeat1,
    ACTIONS(64), 2,
      anon_sym_then,
      anon_sym_do,
  [644] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_if,
      anon_sym_forall,
  [654] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_if,
      anon_sym_forall,
  [664] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_fact_parameters,
    ACTIONS(70), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [678] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_csq_repeat1,
    ACTIONS(77), 2,
      anon_sym_then,
      anon_sym_do,
  [692] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      aux_sym__lowercase_atom_token2,
    ACTIONS(79), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [704] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_BANG,
  [716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 3,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_BANG,
  [728] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_if,
      anon_sym_forall,
  [738] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_if,
      anon_sym_forall,
  [748] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_csq_repeat1,
    ACTIONS(95), 2,
      anon_sym_then,
      anon_sym_do,
  [762] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_if,
      anon_sym_forall,
  [772] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_string_literal,
    STATE(70), 1,
      sym_value,
  [785] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameters_repeat1,
  [798] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_do,
  [807] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_parameters_repeat1,
  [820] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_query_repeat1,
  [833] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 3,
      anon_sym_asenvironment,
      anon_sym_COMMA,
      anon_sym_DOT,
  [842] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_environment_repeat1,
  [855] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [864] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_query_repeat1,
  [877] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_query_repeat1,
  [890] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameters_repeat1,
  [903] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    STATE(44), 1,
      aux_sym_actioncombo_repeat1,
  [916] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
  [927] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_environment_repeat1,
  [940] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 3,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_do,
  [949] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    STATE(53), 1,
      aux_sym_actioncombo_repeat1,
  [962] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_query_repeat1,
  [975] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 3,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_do,
  [984] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 3,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_do,
  [993] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1004] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_actioncombo_repeat1,
  [1017] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_query_repeat1,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_environment_repeat1,
  [1052] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1101] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_with,
    ACTIONS(178), 1,
      anon_sym_DOT,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym_id,
    STATE(56), 1,
      sym_env_pair,
  [1121] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1129] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
  [1137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
  [1145] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1161] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1177] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_string_literal,
  [1187] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym_id,
    STATE(68), 1,
      sym_env_pair,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_DOT,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      anon_sym_asenvironment,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_DOT,
  [1247] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [1254] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
  [1268] = 2,
    ACTIONS(212), 1,
      sym__unescaped_single_string_fragment,
    ACTIONS(214), 1,
      sym_line_comment,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 1,
      anon_sym_DOT,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      anon_sym_DOT,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_DOT,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      anon_sym_then,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
  [1324] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
  [1331] = 2,
    ACTIONS(214), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym__unescaped_double_string_fragment,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 1,
      anon_sym_DOT,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_DOT,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      anon_sym_do,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 201,
  [SMALL_STATE(7)] = 246,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 319,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 381,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 545,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 614,
  [SMALL_STATE(21)] = 630,
  [SMALL_STATE(22)] = 644,
  [SMALL_STATE(23)] = 654,
  [SMALL_STATE(24)] = 664,
  [SMALL_STATE(25)] = 678,
  [SMALL_STATE(26)] = 692,
  [SMALL_STATE(27)] = 704,
  [SMALL_STATE(28)] = 716,
  [SMALL_STATE(29)] = 728,
  [SMALL_STATE(30)] = 738,
  [SMALL_STATE(31)] = 748,
  [SMALL_STATE(32)] = 762,
  [SMALL_STATE(33)] = 772,
  [SMALL_STATE(34)] = 785,
  [SMALL_STATE(35)] = 798,
  [SMALL_STATE(36)] = 807,
  [SMALL_STATE(37)] = 820,
  [SMALL_STATE(38)] = 833,
  [SMALL_STATE(39)] = 842,
  [SMALL_STATE(40)] = 855,
  [SMALL_STATE(41)] = 864,
  [SMALL_STATE(42)] = 877,
  [SMALL_STATE(43)] = 890,
  [SMALL_STATE(44)] = 903,
  [SMALL_STATE(45)] = 916,
  [SMALL_STATE(46)] = 927,
  [SMALL_STATE(47)] = 940,
  [SMALL_STATE(48)] = 949,
  [SMALL_STATE(49)] = 962,
  [SMALL_STATE(50)] = 975,
  [SMALL_STATE(51)] = 984,
  [SMALL_STATE(52)] = 993,
  [SMALL_STATE(53)] = 1004,
  [SMALL_STATE(54)] = 1017,
  [SMALL_STATE(55)] = 1030,
  [SMALL_STATE(56)] = 1039,
  [SMALL_STATE(57)] = 1052,
  [SMALL_STATE(58)] = 1061,
  [SMALL_STATE(59)] = 1069,
  [SMALL_STATE(60)] = 1077,
  [SMALL_STATE(61)] = 1085,
  [SMALL_STATE(62)] = 1093,
  [SMALL_STATE(63)] = 1101,
  [SMALL_STATE(64)] = 1111,
  [SMALL_STATE(65)] = 1121,
  [SMALL_STATE(66)] = 1129,
  [SMALL_STATE(67)] = 1137,
  [SMALL_STATE(68)] = 1145,
  [SMALL_STATE(69)] = 1153,
  [SMALL_STATE(70)] = 1161,
  [SMALL_STATE(71)] = 1169,
  [SMALL_STATE(72)] = 1177,
  [SMALL_STATE(73)] = 1187,
  [SMALL_STATE(74)] = 1197,
  [SMALL_STATE(75)] = 1205,
  [SMALL_STATE(76)] = 1212,
  [SMALL_STATE(77)] = 1219,
  [SMALL_STATE(78)] = 1226,
  [SMALL_STATE(79)] = 1233,
  [SMALL_STATE(80)] = 1240,
  [SMALL_STATE(81)] = 1247,
  [SMALL_STATE(82)] = 1254,
  [SMALL_STATE(83)] = 1261,
  [SMALL_STATE(84)] = 1268,
  [SMALL_STATE(85)] = 1275,
  [SMALL_STATE(86)] = 1282,
  [SMALL_STATE(87)] = 1289,
  [SMALL_STATE(88)] = 1296,
  [SMALL_STATE(89)] = 1303,
  [SMALL_STATE(90)] = 1310,
  [SMALL_STATE(91)] = 1317,
  [SMALL_STATE(92)] = 1324,
  [SMALL_STATE(93)] = 1331,
  [SMALL_STATE(94)] = 1338,
  [SMALL_STATE(95)] = 1345,
  [SMALL_STATE(96)] = 1352,
  [SMALL_STATE(97)] = 1359,
  [SMALL_STATE(98)] = 1366,
  [SMALL_STATE(99)] = 1373,
  [SMALL_STATE(100)] = 1380,
  [SMALL_STATE(101)] = 1387,
  [SMALL_STATE(102)] = 1394,
  [SMALL_STATE(103)] = 1401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csq, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then, 5, .production_id = 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 6, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_csq_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_csq_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lowercase_atom, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sent, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 4, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 7, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csq, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_do, 5, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statecond, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(73),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lowercase_atom, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actioncombo_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actioncombo_repeat1, 2), SHIFT_REPEAT(7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stateliteral, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actioncombo, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statecond, 4),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), REDUCE(sym__identifier, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actioncombo, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectoraction, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_parameters, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_parameters, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectoraction, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_literal, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stateop, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [240] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sent, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_goal(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
