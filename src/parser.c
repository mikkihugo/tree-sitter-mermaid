#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 985
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 419
#define ALIAS_COUNT 21
#define TOKEN_COUNT 189
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 29

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  aux_sym_directive_token1 = 2,
  aux_sym_diagram_sequence_token1 = 3,
  aux_sym__sequence_participant_type_token1 = 4,
  aux_sym__sequence_participant_type_token2 = 5,
  aux_sym_sequence_stmt_participant_token1 = 6,
  aux_sym_sequence_stmt_actor_token1 = 7,
  anon_sym_COLON = 8,
  aux_sym_sequence_stmt_autonumber_token1 = 9,
  aux_sym_sequence_stmt_activate_token1 = 10,
  aux_sym_sequence_stmt_deactivate_token1 = 11,
  aux_sym_sequence_stmt_note_token1 = 12,
  aux_sym_sequence_stmt_note_token2 = 13,
  anon_sym_COMMA = 14,
  aux_sym_sequence_stmt_links_token1 = 15,
  aux_sym_sequence_stmt_link_token1 = 16,
  aux_sym_sequence_stmt_properties_token1 = 17,
  aux_sym_sequence_stmt_details_token1 = 18,
  aux_sym_sequence_stmt_title_token1 = 19,
  aux_sym_sequence_stmt_loop_token1 = 20,
  aux_sym_sequence_stmt_loop_token2 = 21,
  aux_sym_sequence_stmt_rect_token1 = 22,
  aux_sym_sequence_stmt_opt_token1 = 23,
  aux_sym_sequence_stmt_alt_token1 = 24,
  aux_sym_sequence_stmt_alt_token2 = 25,
  aux_sym_sequence_stmt_par_token1 = 26,
  aux_sym_sequence_stmt_par_token2 = 27,
  aux_sym_diagram_class_token1 = 28,
  aux_sym_diagram_class_token2 = 29,
  anon_sym_TILDE = 30,
  aux_sym_class_generics_token1 = 31,
  anon_sym_class = 32,
  anon_sym_COLON_COLON_COLON = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_POUND = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_STAR = 41,
  anon_sym_DOLLAR = 42,
  anon_sym_LT_LT = 43,
  anon_sym_GT_GT = 44,
  aux_sym_diagram_state_token1 = 45,
  aux_sym_diagram_state_token2 = 46,
  aux_sym_state_stmt_simple_token1 = 47,
  aux_sym_diagram_gantt_token1 = 48,
  aux_sym_gantt_stmt_dateformat_token1 = 49,
  aux_sym_gantt_stmt_inclusiveenddates_token1 = 50,
  aux_sym_gantt_stmt_topaxis_token1 = 51,
  aux_sym_gantt_stmt_axisformat_token1 = 52,
  aux_sym_gantt_stmt_includes_token1 = 53,
  aux_sym_gantt_stmt_excludes_token1 = 54,
  aux_sym_gantt_stmt_todaymarker_token1 = 55,
  aux_sym_gantt_stmt_section_token1 = 56,
  aux_sym_diagram_pie_token1 = 57,
  aux_sym_diagram_flow_token1 = 58,
  anon_sym_SEMI = 59,
  aux_sym_flow_stmt_direction_token1 = 60,
  anon_sym_AMP = 61,
  anon_sym_PIPE = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  anon_sym_LPAREN_LPAREN = 65,
  anon_sym_RPAREN_RPAREN = 66,
  anon_sym_LPAREN_DASH = 67,
  anon_sym_DASH_RPAREN = 68,
  anon_sym_LPAREN_LBRACK = 69,
  anon_sym_RBRACK_RPAREN = 70,
  anon_sym_LBRACK_LBRACK = 71,
  anon_sym_RBRACK_RBRACK = 72,
  anon_sym_LBRACK_PIPE = 73,
  anon_sym_PIPE_RBRACK = 74,
  anon_sym_LBRACK_LPAREN = 75,
  anon_sym_RPAREN_RBRACK = 76,
  anon_sym_LBRACE_LBRACE = 77,
  anon_sym_RBRACE_RBRACE = 78,
  anon_sym_GT = 79,
  anon_sym_LBRACK_SLASH = 80,
  anon_sym_BSLASH_RBRACK = 81,
  anon_sym_LBRACK_BSLASH = 82,
  anon_sym_SLASH_RBRACK = 83,
  anon_sym_subgraph = 84,
  anon_sym_end = 85,
  aux_sym_diagram_er_token1 = 86,
  aux_sym_diagram_mindmap_token1 = 87,
  aux_sym_mmap_markdown_token1 = 88,
  aux_sym_mmap_text_token1 = 89,
  aux_sym_mmap_class_token1 = 90,
  aux_sym_mmap_class_token2 = 91,
  aux_sym_mmap_icon_token1 = 92,
  aux_sym_mmap_icon_token2 = 93,
  aux_sym_diagram_gitgraph_token1 = 94,
  aux_sym_gitgraph_stmt_commit_token1 = 95,
  aux_sym_gitgraph_commit_attr_id_token1 = 96,
  aux_sym_gitgraph_commit_attr_tag_token1 = 97,
  aux_sym_gitgraph_commit_attr_type_token1 = 98,
  aux_sym_gitgraph_commit_attr_type_token2 = 99,
  aux_sym_gitgraph_commit_attr_type_token3 = 100,
  aux_sym_gitgraph_commit_attr_type_token4 = 101,
  aux_sym_gitgraph_stmt_branch_token1 = 102,
  aux_sym_gitgraph_stmt_checkout_token1 = 103,
  aux_sym_gitgraph_stmt_merge_token1 = 104,
  aux_sym_gitgraph_stmt_cherry_pick_token1 = 105,
  aux_sym_diagram_journey_token1 = 106,
  sym__whitespace = 107,
  sym__newline = 108,
  sym_comment = 109,
  sym__md_start = 110,
  sym__md_end = 111,
  sym_type_directive = 112,
  aux_sym_direction_tb_token1 = 113,
  aux_sym_direction_bt_token1 = 114,
  aux_sym_direction_rl_token1 = 115,
  aux_sym_direction_lr_token1 = 116,
  aux_sym__sequence_rest_text_token1 = 117,
  sym__sequence_actor_word = 118,
  sym_solid_arrow = 119,
  sym_dotted_arrow = 120,
  sym_solid_open_arrow = 121,
  anon_sym_DASH_DASH_GT = 122,
  sym_solid_cross = 123,
  sym_dotted_cross = 124,
  sym_dotted_point = 125,
  aux_sym_note_placement_left_token1 = 126,
  aux_sym_note_placement_right_token1 = 127,
  sym__class_name = 128,
  sym__alpha_num_token = 129,
  sym__bquote_string = 130,
  sym__dquote_string = 131,
  sym_class_reltype_aggregation = 132,
  anon_sym_LT_PIPE = 133,
  anon_sym_PIPE_GT = 134,
  anon_sym_LT = 135,
  anon_sym_DASH_DASH = 136,
  anon_sym_DOT_DOT = 137,
  aux_sym_class_label_token1 = 138,
  anon_sym_LBRACK_STAR_RBRACK = 139,
  aux_sym_state_name_token1 = 140,
  aux_sym_state_hide_empty_description_token1 = 141,
  sym_state_id = 142,
  aux_sym_state_annotation_fork_token1 = 143,
  aux_sym_state_annotation_fork_token2 = 144,
  aux_sym_state_annotation_join_token1 = 145,
  aux_sym_state_annotation_join_token2 = 146,
  aux_sym_state_annotation_choice_token1 = 147,
  aux_sym_state_annotation_choice_token2 = 148,
  aux_sym_gantt_task_text_token1 = 149,
  sym_gantt_task_data = 150,
  aux_sym_pie_showdata_token1 = 151,
  sym_pie_title = 152,
  aux_sym_pie_label_token1 = 153,
  sym_pie_value = 154,
  aux_sym_flowchart_direction_lr_token1 = 155,
  aux_sym_flowchart_direction_lr_token2 = 156,
  aux_sym_flowchart_direction_rl_token1 = 157,
  aux_sym_flowchart_direction_tb_token1 = 158,
  aux_sym_flowchart_direction_tb_token2 = 159,
  anon_sym_v = 160,
  aux_sym_flowchart_direction_bt_token1 = 161,
  anon_sym_CARET = 162,
  aux_sym_flow_text_literal_token1 = 163,
  sym_flow_text_quoted = 164,
  aux_sym_flow_link_arrow_token1 = 165,
  aux_sym_flow_link_arrow_token2 = 166,
  aux_sym_flow_link_arrow_token3 = 167,
  aux_sym_flow_link_arrow_start_token1 = 168,
  aux_sym_flow_link_arrow_start_token2 = 169,
  aux_sym_flow_link_arrow_start_token3 = 170,
  sym__er_alphanum = 171,
  anon_sym_PIPEo = 172,
  anon_sym_o_PIPE = 173,
  anon_sym_RBRACEo = 174,
  anon_sym_o_LBRACE = 175,
  anon_sym_RBRACE_PIPE = 176,
  anon_sym_PIPE_LBRACE = 177,
  sym_er_cardinarity_only_one = 178,
  anon_sym_DOT_DASH = 179,
  anon_sym_DASH_DOT = 180,
  aux_sym_er_attribute_key_type_pk_token1 = 181,
  aux_sym_er_attribute_key_type_fk_token1 = 182,
  sym__mindmap_text = 183,
  sym__gitgraph_branch_name = 184,
  sym__journey_title_text = 185,
  sym__journey_section_title = 186,
  sym__journey_score = 187,
  sym__journey_actor = 188,
  sym_source_file = 189,
  sym_directive = 190,
  sym__direction = 191,
  sym_diagram_sequence = 192,
  sym__sequence_stmt = 193,
  sym__sequence_participant_type = 194,
  sym_sequence_stmt_participant = 195,
  sym_sequence_stmt_actor = 196,
  sym_sequence_actor = 197,
  sym_sequence_stmt_signal = 198,
  sym_sequence_signal_type = 199,
  sym_sequence_text = 200,
  sym_sequence_stmt_autonumber = 201,
  sym_sequence_stmt_activate = 202,
  sym_sequence_stmt_deactivate = 203,
  sym_sequence_stmt_note = 204,
  sym_sequence_stmt_links = 205,
  sym_sequence_stmt_link = 206,
  sym_sequence_stmt_properties = 207,
  sym_sequence_stmt_details = 208,
  sym_sequence_note_placement = 209,
  sym_sequence_stmt_title = 210,
  sym_sequence_stmt_loop = 211,
  sym_sequence_stmt_rect = 212,
  sym_sequence_stmt_opt = 213,
  aux_sym__sequence_subdocument = 214,
  sym_sequence_stmt_alt = 215,
  sym_sequence_stmt_par = 216,
  sym_diagram_class = 217,
  sym__class_stmt = 218,
  sym_class_stmt_relation = 219,
  sym_class_name = 220,
  sym_class_name_body = 221,
  sym_class_generics = 222,
  sym_class_relation = 223,
  sym__class_reltype = 224,
  sym__class_linetype = 225,
  sym_class_stmt_class = 226,
  sym_class_method_line = 227,
  sym_class_annotation_line = 228,
  sym_class_stmt_method = 229,
  sym_class_stmt_annotation = 230,
  sym_diagram_state = 231,
  sym__state_stmt = 232,
  sym_state_stmt_simple = 233,
  sym_state_stmt_arrow = 234,
  sym_state_stmt_composite = 235,
  sym_state_composite_body = 236,
  sym_state_stmt_annotation = 237,
  sym_state_alias = 238,
  sym_state_stmt_hide_empty_description = 239,
  sym__state_annotation = 240,
  sym_state_note = 241,
  sym_state_note_placement = 242,
  sym_diagram_gantt = 243,
  sym__gantt_stmt = 244,
  sym_gantt_stmt_dateformat = 245,
  sym_gantt_stmt_inclusiveenddates = 246,
  sym_gantt_stmt_topaxis = 247,
  sym_gantt_stmt_axisformat = 248,
  sym_gantt_stmt_includes = 249,
  sym_gantt_stmt_excludes = 250,
  sym_gantt_stmt_todaymarker = 251,
  sym_gantt_stmt_title = 252,
  sym_gantt_stmt_section = 253,
  sym_gantt_stmt_task = 254,
  sym_diagram_pie = 255,
  sym__pie_stmt = 256,
  sym_pie_stmt_title = 257,
  sym_pie_stmt_element = 258,
  sym_diagram_flow = 259,
  sym__flowchart_direction = 260,
  sym__flow_stmt = 261,
  sym_flow_stmt_direction = 262,
  sym_flow_stmt_vertice = 263,
  sym_flow_node = 264,
  sym__flow_link = 265,
  sym_flow_link_simplelink = 266,
  sym_flow_link_arrowtext = 267,
  sym_flow_link_middletext = 268,
  sym_flow_arrow_text = 269,
  sym_flow_vertex_id = 270,
  sym_flow_vertex = 271,
  sym__flow_vertex_kind = 272,
  sym_flow_vertex_square = 273,
  sym_flow_vertex_circle = 274,
  sym_flow_vertex_ellipse = 275,
  sym_flow_vertex_stadium = 276,
  sym_flow_vertex_subroutine = 277,
  sym_flow_vertex_rect = 278,
  sym_flow_vertex_cylinder = 279,
  sym_flow_vertex_round = 280,
  sym_flow_vertex_diamond = 281,
  sym_flow_vertex_hexagon = 282,
  sym_flow_vertex_odd = 283,
  sym_flow_vertex_trapezoid = 284,
  sym_flow_vertex_inv_trapezoid = 285,
  sym_flow_vertex_leanright = 286,
  sym_flow_vertex_leanleft = 287,
  sym__flow_text = 288,
  sym_flow_stmt_subgraph = 289,
  sym_flow_stmt_subgraph_inner = 290,
  sym_flow_vertex_text = 291,
  sym_diagram_er = 292,
  sym__er_stmt = 293,
  sym_er_stmt_entity = 294,
  sym_er_stmt_entity_relation = 295,
  sym_er_entity_name = 296,
  sym_er_relation = 297,
  sym__er_cardinarity = 298,
  sym__er_reltype = 299,
  sym_er_role = 300,
  sym_er_stmt_entity_block = 301,
  sym_er_stmt_entity_block_inner = 302,
  sym_er_attribute = 303,
  sym_er_attribute_type = 304,
  sym_er_attribute_name = 305,
  sym__er_attribute_key_type = 306,
  sym_er_attribute_comment = 307,
  sym_diagram_mindmap = 308,
  sym_mmap_node = 309,
  sym_mmap_node_id = 310,
  sym_mmap_markdown = 311,
  sym_mmap_text = 312,
  sym_mmap_node_content = 313,
  sym_mmap_node_square = 314,
  sym_mmap_node_rounded = 315,
  sym_mmap_node_circle = 316,
  sym_mmap_node_cloud = 317,
  sym_mmap_node_bang = 318,
  sym_mmap_node_hexagon = 319,
  sym_mmap_class = 320,
  sym_mmap_icon = 321,
  sym_diagram_gitgraph = 322,
  sym__gitgraph_stmt = 323,
  sym_gitgraph_stmt_commit = 324,
  sym_gitgraph_commit_attrs = 325,
  sym_gitgraph_commit_attr_id = 326,
  sym_gitgraph_commit_attr_tag = 327,
  sym_gitgraph_commit_attr_type = 328,
  sym_gitgraph_stmt_branch = 329,
  sym_gitgraph_branch_name = 330,
  sym_gitgraph_stmt_checkout = 331,
  sym_gitgraph_stmt_merge = 332,
  sym_gitgraph_stmt_cherry_pick = 333,
  sym_gitgraph_cherry_pick_id = 334,
  sym_diagram_journey = 335,
  sym__journey_stmt = 336,
  sym_journey_title = 337,
  sym_journey_title_text = 338,
  sym_journey_section = 339,
  sym_journey_section_title = 340,
  sym_journey_task = 341,
  sym_journey_task_name = 342,
  sym_journey_task_score = 343,
  sym_journey_task_actors = 344,
  sym_direction_tb = 345,
  sym_direction_bt = 346,
  sym_direction_rl = 347,
  sym_direction_lr = 348,
  sym__sequence_rest_text = 349,
  sym_dotted_open_arrow = 350,
  sym_solid_point = 351,
  sym_sequence_signal_plus_sign = 352,
  sym_sequence_signal_minus_sign = 353,
  sym_note_placement_left = 354,
  sym_note_placement_right = 355,
  sym_class_reltype_extension = 356,
  sym_class_reltype_composition = 357,
  sym_class_reltype_dependency = 358,
  sym_class_linetype_solid = 359,
  sym_class_linetype_dotted = 360,
  sym_class_label = 361,
  sym_state_name = 362,
  sym_state_arrow = 363,
  sym_state_description = 364,
  sym_state_hide_empty_description = 365,
  sym_state_division = 366,
  sym_state_annotation_fork = 367,
  sym_state_annotation_join = 368,
  sym_state_annotation_choice = 369,
  sym_gantt_meta_format = 370,
  sym_gantt_task_text = 371,
  sym_pie_showdata = 372,
  sym_pie_label = 373,
  sym_flowchart_direction_lr = 374,
  sym_flowchart_direction_rl = 375,
  sym_flowchart_direction_tb = 376,
  sym_flowchart_direction_bt = 377,
  sym_flow_text_literal = 378,
  sym_flow_link_arrow = 379,
  sym_flow_link_arrow_start = 380,
  sym__er_word = 381,
  sym_er_cardinarity_zero_or_one = 382,
  sym_er_cardinarity_zero_or_more = 383,
  sym_er_cardinarity_one_or_more = 384,
  sym_er_reltype_non_identifying = 385,
  sym_er_reltype_identifying = 386,
  sym_er_attribute_key_type_pk = 387,
  sym_er_attribute_key_type_fk = 388,
  sym__gitgraph_string = 389,
  sym__journey_task_name = 390,
  aux_sym_source_file_repeat1 = 391,
  aux_sym_diagram_sequence_repeat1 = 392,
  aux_sym_sequence_actor_repeat1 = 393,
  aux_sym_sequence_stmt_alt_repeat1 = 394,
  aux_sym_sequence_stmt_par_repeat1 = 395,
  aux_sym_diagram_class_repeat1 = 396,
  aux_sym_class_name_body_repeat1 = 397,
  aux_sym_class_stmt_class_repeat1 = 398,
  aux_sym_class_method_line_repeat1 = 399,
  aux_sym_diagram_state_repeat1 = 400,
  aux_sym_state_composite_body_repeat1 = 401,
  aux_sym_diagram_gantt_repeat1 = 402,
  aux_sym_diagram_pie_repeat1 = 403,
  aux_sym_diagram_flow_repeat1 = 404,
  aux_sym_flow_stmt_vertice_repeat1 = 405,
  aux_sym_flow_node_repeat1 = 406,
  aux_sym_flow_arrow_text_repeat1 = 407,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 408,
  aux_sym_diagram_er_repeat1 = 409,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 410,
  aux_sym_diagram_mindmap_repeat1 = 411,
  aux_sym_diagram_gitgraph_repeat1 = 412,
  aux_sym_gitgraph_commit_attrs_repeat1 = 413,
  aux_sym_diagram_journey_repeat1 = 414,
  aux_sym_journey_section_repeat1 = 415,
  aux_sym_journey_task_actors_repeat1 = 416,
  aux_sym_gantt_task_text_repeat1 = 417,
  aux_sym_flow_text_literal_repeat1 = 418,
  alias_sym_annotation = 419,
  alias_sym_class_classifier_abstract = 420,
  alias_sym_class_style_name = 421,
  alias_sym_class_visibility_internal = 422,
  alias_sym_class_visibility_private = 423,
  alias_sym_class_visibility_public = 424,
  alias_sym_gantt_axis_format = 425,
  alias_sym_gantt_end_dates = 426,
  alias_sym_gantt_excludes = 427,
  alias_sym_gantt_includes = 428,
  alias_sym_gantt_section = 429,
  alias_sym_gantt_title = 430,
  alias_sym_gantt_today_marker = 431,
  alias_sym_gantt_top_axis = 432,
  alias_sym_note_content = 433,
  alias_sym_sequence_alias = 434,
  alias_sym_sequence_stmt_alt_branch = 435,
  alias_sym_sequence_stmt_loop_inner = 436,
  alias_sym_sequence_stmt_opt_inner = 437,
  alias_sym_sequence_stmt_rect_inner = 438,
  alias_sym_title = 439,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [aux_sym_directive_token1] = "arg_directive",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym__sequence_participant_type_token1] = "participant",
  [aux_sym__sequence_participant_type_token2] = "actor",
  [aux_sym_sequence_stmt_participant_token1] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "sequence_actor",
  [anon_sym_COLON] = ":",
  [aux_sym_sequence_stmt_autonumber_token1] = "autonumber",
  [aux_sym_sequence_stmt_activate_token1] = "activate",
  [aux_sym_sequence_stmt_deactivate_token1] = "deactivate",
  [aux_sym_sequence_stmt_note_token1] = "note ",
  [aux_sym_sequence_stmt_note_token2] = "over",
  [anon_sym_COMMA] = ",",
  [aux_sym_sequence_stmt_links_token1] = "links",
  [aux_sym_sequence_stmt_link_token1] = "link",
  [aux_sym_sequence_stmt_properties_token1] = "properties",
  [aux_sym_sequence_stmt_details_token1] = "details",
  [aux_sym_sequence_stmt_title_token1] = "title",
  [aux_sym_sequence_stmt_loop_token1] = "loop",
  [aux_sym_sequence_stmt_loop_token2] = "end",
  [aux_sym_sequence_stmt_rect_token1] = "rect",
  [aux_sym_sequence_stmt_opt_token1] = "opt",
  [aux_sym_sequence_stmt_alt_token1] = "alt",
  [aux_sym_sequence_stmt_alt_token2] = "else",
  [aux_sym_sequence_stmt_par_token1] = "par",
  [aux_sym_sequence_stmt_par_token2] = "and",
  [aux_sym_diagram_class_token1] = "classDiagram-v2",
  [aux_sym_diagram_class_token2] = "classDiagram",
  [anon_sym_TILDE] = "~",
  [aux_sym_class_generics_token1] = "class_name",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "class_visibility_protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_DOLLAR] = "class_classifier_static",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_diagram_state_token1] = "stateDiagram",
  [aux_sym_diagram_state_token2] = "stateDiagram-v2",
  [aux_sym_state_stmt_simple_token1] = "state ",
  [aux_sym_diagram_gantt_token1] = "gantt",
  [aux_sym_gantt_stmt_dateformat_token1] = "dateformat",
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = "inclusiveenddates",
  [aux_sym_gantt_stmt_topaxis_token1] = "topaxis",
  [aux_sym_gantt_stmt_axisformat_token1] = "axisformat",
  [aux_sym_gantt_stmt_includes_token1] = "includes",
  [aux_sym_gantt_stmt_excludes_token1] = "excludes",
  [aux_sym_gantt_stmt_todaymarker_token1] = "todaymarker",
  [aux_sym_gantt_stmt_section_token1] = "section",
  [aux_sym_diagram_pie_token1] = "pie",
  [aux_sym_diagram_flow_token1] = "flowchart",
  [anon_sym_SEMI] = ";",
  [aux_sym_flow_stmt_direction_token1] = "direction",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN_LPAREN] = "((",
  [anon_sym_RPAREN_RPAREN] = "))",
  [anon_sym_LPAREN_DASH] = "(-",
  [anon_sym_DASH_RPAREN] = "-)",
  [anon_sym_LPAREN_LBRACK] = "([",
  [anon_sym_RBRACK_RPAREN] = "])",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACK_LPAREN] = "[(",
  [anon_sym_RPAREN_RBRACK] = ")]",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK_SLASH] = "[/",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [anon_sym_LBRACK_BSLASH] = "[\\",
  [anon_sym_SLASH_RBRACK] = "/]",
  [anon_sym_subgraph] = "subgraph",
  [anon_sym_end] = "end",
  [aux_sym_diagram_er_token1] = "erdiagram",
  [aux_sym_diagram_mindmap_token1] = "diagram_mindmap_token1",
  [aux_sym_mmap_markdown_token1] = "md_text",
  [aux_sym_mmap_text_token1] = "mmap_text_token1",
  [aux_sym_mmap_class_token1] = "mmap_class_token1",
  [aux_sym_mmap_class_token2] = "mmap_class_token2",
  [aux_sym_mmap_icon_token1] = "mmap_icon_token1",
  [aux_sym_mmap_icon_token2] = "mmap_icon_token2",
  [aux_sym_diagram_gitgraph_token1] = "gitGraph",
  [aux_sym_gitgraph_stmt_commit_token1] = "commit",
  [aux_sym_gitgraph_commit_attr_id_token1] = "id",
  [aux_sym_gitgraph_commit_attr_tag_token1] = "tag",
  [aux_sym_gitgraph_commit_attr_type_token1] = "type",
  [aux_sym_gitgraph_commit_attr_type_token2] = "NORMAL",
  [aux_sym_gitgraph_commit_attr_type_token3] = "REVERSE",
  [aux_sym_gitgraph_commit_attr_type_token4] = "HIGHLIGHT",
  [aux_sym_gitgraph_stmt_branch_token1] = "branch",
  [aux_sym_gitgraph_stmt_checkout_token1] = "checkout",
  [aux_sym_gitgraph_stmt_merge_token1] = "merge",
  [aux_sym_gitgraph_stmt_cherry_pick_token1] = "cherry-pick",
  [aux_sym_diagram_journey_token1] = "journey",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym__md_start] = "_md_start",
  [sym__md_end] = "_md_end",
  [sym_type_directive] = "type_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [aux_sym__sequence_rest_text_token1] = "_sequence_rest_text_token1",
  [sym__sequence_actor_word] = "_sequence_actor_word",
  [sym_solid_arrow] = "solid_arrow",
  [sym_dotted_arrow] = "dotted_arrow",
  [sym_solid_open_arrow] = "solid_open_arrow",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_solid_cross] = "solid_cross",
  [sym_dotted_cross] = "dotted_cross",
  [sym_dotted_point] = "dotted_point",
  [aux_sym_note_placement_left_token1] = "left of",
  [aux_sym_note_placement_right_token1] = "right of",
  [sym__class_name] = "_class_name",
  [sym__alpha_num_token] = "_alpha_num_token",
  [sym__bquote_string] = "_bquote_string",
  [sym__dquote_string] = "cardinality",
  [sym_class_reltype_aggregation] = "class_reltype_aggregation",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_LT] = "<",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_class_label_token1] = "class_label_token1",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [aux_sym_state_name_token1] = "state_name_token1",
  [aux_sym_state_hide_empty_description_token1] = "hide empty description",
  [sym_state_id] = "state_id",
  [aux_sym_state_annotation_fork_token1] = "state_annotation_fork_token1",
  [aux_sym_state_annotation_fork_token2] = "state_annotation_fork_token2",
  [aux_sym_state_annotation_join_token1] = "state_annotation_join_token1",
  [aux_sym_state_annotation_join_token2] = "state_annotation_join_token2",
  [aux_sym_state_annotation_choice_token1] = "state_annotation_choice_token1",
  [aux_sym_state_annotation_choice_token2] = "state_annotation_choice_token2",
  [aux_sym_gantt_task_text_token1] = "gantt_task_text_token1",
  [sym_gantt_task_data] = "gantt_task_data",
  [aux_sym_pie_showdata_token1] = "showdata",
  [sym_pie_title] = "pie_title",
  [aux_sym_pie_label_token1] = "pie_label_token1",
  [sym_pie_value] = "pie_value",
  [aux_sym_flowchart_direction_lr_token1] = "lr",
  [aux_sym_flowchart_direction_lr_token2] = "br",
  [aux_sym_flowchart_direction_rl_token1] = "rl",
  [aux_sym_flowchart_direction_tb_token1] = "tb",
  [aux_sym_flowchart_direction_tb_token2] = "td",
  [anon_sym_v] = "v",
  [aux_sym_flowchart_direction_bt_token1] = "bt",
  [anon_sym_CARET] = "^",
  [aux_sym_flow_text_literal_token1] = "flow_text_literal_token1",
  [sym_flow_text_quoted] = "flow_text_quoted",
  [aux_sym_flow_link_arrow_token1] = "flow_link_arrow_token1",
  [aux_sym_flow_link_arrow_token2] = "flow_link_arrow_token2",
  [aux_sym_flow_link_arrow_token3] = "flow_link_arrow_token3",
  [aux_sym_flow_link_arrow_start_token1] = "flow_link_arrow_start_token1",
  [aux_sym_flow_link_arrow_start_token2] = "flow_link_arrow_start_token2",
  [aux_sym_flow_link_arrow_start_token3] = "flow_link_arrow_start_token3",
  [sym__er_alphanum] = "_er_alphanum",
  [anon_sym_PIPEo] = "|o",
  [anon_sym_o_PIPE] = "o|",
  [anon_sym_RBRACEo] = "}o",
  [anon_sym_o_LBRACE] = "o{",
  [anon_sym_RBRACE_PIPE] = "}|",
  [anon_sym_PIPE_LBRACE] = "|{",
  [sym_er_cardinarity_only_one] = "er_cardinarity_only_one",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DASH_DOT] = "-.",
  [aux_sym_er_attribute_key_type_pk_token1] = "pk",
  [aux_sym_er_attribute_key_type_fk_token1] = "fk",
  [sym__mindmap_text] = "_mindmap_text",
  [sym__gitgraph_branch_name] = "_gitgraph_branch_name",
  [sym__journey_title_text] = "_journey_title_text",
  [sym__journey_section_title] = "_journey_section_title",
  [sym__journey_score] = "_journey_score",
  [sym__journey_actor] = "_journey_actor",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym__direction] = "_direction",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym__sequence_participant_type] = "_sequence_participant_type",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_sequence_actor] = "sequence_actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_sequence_signal_type] = "sequence_signal_type",
  [sym_sequence_text] = "sequence_text",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_sequence_note_placement] = "sequence_note_placement",
  [sym_sequence_stmt_title] = "sequence_stmt_title",
  [sym_sequence_stmt_loop] = "sequence_stmt_loop",
  [sym_sequence_stmt_rect] = "sequence_stmt_rect",
  [sym_sequence_stmt_opt] = "sequence_stmt_opt",
  [aux_sym__sequence_subdocument] = "_sequence_subdocument",
  [sym_sequence_stmt_alt] = "sequence_stmt_alt",
  [sym_sequence_stmt_par] = "sequence_stmt_par",
  [sym_diagram_class] = "diagram_class",
  [sym__class_stmt] = "_class_stmt",
  [sym_class_stmt_relation] = "class_stmt_relation",
  [sym_class_name] = "class_name",
  [sym_class_name_body] = "class_name_body",
  [sym_class_generics] = "class_generics",
  [sym_class_relation] = "class_relation",
  [sym__class_reltype] = "_class_reltype",
  [sym__class_linetype] = "_class_linetype",
  [sym_class_stmt_class] = "class_stmt_class",
  [sym_class_method_line] = "class_method_line",
  [sym_class_annotation_line] = "class_annotation_line",
  [sym_class_stmt_method] = "class_stmt_method",
  [sym_class_stmt_annotation] = "class_stmt_annotation",
  [sym_diagram_state] = "diagram_state",
  [sym__state_stmt] = "_state_stmt",
  [sym_state_stmt_simple] = "state_stmt_simple",
  [sym_state_stmt_arrow] = "state_stmt_arrow",
  [sym_state_stmt_composite] = "state_stmt_composite",
  [sym_state_composite_body] = "state_composite_body",
  [sym_state_stmt_annotation] = "state_stmt_annotation",
  [sym_state_alias] = "state_alias",
  [sym_state_stmt_hide_empty_description] = "state_stmt_hide_empty_description",
  [sym__state_annotation] = "_state_annotation",
  [sym_state_note] = "state_note",
  [sym_state_note_placement] = "state_note_placement",
  [sym_diagram_gantt] = "diagram_gantt",
  [sym__gantt_stmt] = "_gantt_stmt",
  [sym_gantt_stmt_dateformat] = "gantt_stmt_dateformat",
  [sym_gantt_stmt_inclusiveenddates] = "gantt_stmt_inclusiveenddates",
  [sym_gantt_stmt_topaxis] = "gantt_stmt_topaxis",
  [sym_gantt_stmt_axisformat] = "gantt_stmt_axisformat",
  [sym_gantt_stmt_includes] = "gantt_stmt_includes",
  [sym_gantt_stmt_excludes] = "gantt_stmt_excludes",
  [sym_gantt_stmt_todaymarker] = "gantt_stmt_todaymarker",
  [sym_gantt_stmt_title] = "gantt_stmt_title",
  [sym_gantt_stmt_section] = "gantt_stmt_section",
  [sym_gantt_stmt_task] = "gantt_stmt_task",
  [sym_diagram_pie] = "diagram_pie",
  [sym__pie_stmt] = "_pie_stmt",
  [sym_pie_stmt_title] = "pie_stmt_title",
  [sym_pie_stmt_element] = "pie_stmt_element",
  [sym_diagram_flow] = "diagram_flow",
  [sym__flowchart_direction] = "_flowchart_direction",
  [sym__flow_stmt] = "_flow_stmt",
  [sym_flow_stmt_direction] = "flow_stmt_direction",
  [sym_flow_stmt_vertice] = "flow_stmt_vertice",
  [sym_flow_node] = "flow_node",
  [sym__flow_link] = "_flow_link",
  [sym_flow_link_simplelink] = "flow_link_simplelink",
  [sym_flow_link_arrowtext] = "flow_link_arrowtext",
  [sym_flow_link_middletext] = "flow_link_middletext",
  [sym_flow_arrow_text] = "flow_arrow_text",
  [sym_flow_vertex_id] = "flow_vertex_id",
  [sym_flow_vertex] = "flow_vertex",
  [sym__flow_vertex_kind] = "_flow_vertex_kind",
  [sym_flow_vertex_square] = "flow_vertex_square",
  [sym_flow_vertex_circle] = "flow_vertex_circle",
  [sym_flow_vertex_ellipse] = "flow_vertex_ellipse",
  [sym_flow_vertex_stadium] = "flow_vertex_stadium",
  [sym_flow_vertex_subroutine] = "flow_vertex_subroutine",
  [sym_flow_vertex_rect] = "flow_vertex_rect",
  [sym_flow_vertex_cylinder] = "flow_vertex_cylinder",
  [sym_flow_vertex_round] = "flow_vertex_round",
  [sym_flow_vertex_diamond] = "flow_vertex_diamond",
  [sym_flow_vertex_hexagon] = "flow_vertex_hexagon",
  [sym_flow_vertex_odd] = "flow_vertex_odd",
  [sym_flow_vertex_trapezoid] = "flow_vertex_trapezoid",
  [sym_flow_vertex_inv_trapezoid] = "flow_vertex_inv_trapezoid",
  [sym_flow_vertex_leanright] = "flow_vertex_leanright",
  [sym_flow_vertex_leanleft] = "flow_vertex_leanleft",
  [sym__flow_text] = "_flow_text",
  [sym_flow_stmt_subgraph] = "flow_stmt_subgraph",
  [sym_flow_stmt_subgraph_inner] = "flow_stmt_subgraph_inner",
  [sym_flow_vertex_text] = "flow_vertex_text",
  [sym_diagram_er] = "diagram_er",
  [sym__er_stmt] = "_er_stmt",
  [sym_er_stmt_entity] = "er_stmt_entity",
  [sym_er_stmt_entity_relation] = "er_stmt_entity_relation",
  [sym_er_entity_name] = "er_entity_name",
  [sym_er_relation] = "er_relation",
  [sym__er_cardinarity] = "_er_cardinarity",
  [sym__er_reltype] = "_er_reltype",
  [sym_er_role] = "er_role",
  [sym_er_stmt_entity_block] = "er_stmt_entity_block",
  [sym_er_stmt_entity_block_inner] = "er_stmt_entity_block_inner",
  [sym_er_attribute] = "er_attribute",
  [sym_er_attribute_type] = "er_attribute_type",
  [sym_er_attribute_name] = "er_attribute_name",
  [sym__er_attribute_key_type] = "_er_attribute_key_type",
  [sym_er_attribute_comment] = "er_attribute_comment",
  [sym_diagram_mindmap] = "diagram_mindmap",
  [sym_mmap_node] = "mmap_node",
  [sym_mmap_node_id] = "mmap_node_id",
  [sym_mmap_markdown] = "mmap_markdown",
  [sym_mmap_text] = "mmap_text",
  [sym_mmap_node_content] = "mmap_node_content",
  [sym_mmap_node_square] = "mmap_node_square",
  [sym_mmap_node_rounded] = "mmap_node_rounded",
  [sym_mmap_node_circle] = "mmap_node_circle",
  [sym_mmap_node_cloud] = "mmap_node_cloud",
  [sym_mmap_node_bang] = "mmap_node_bang",
  [sym_mmap_node_hexagon] = "mmap_node_hexagon",
  [sym_mmap_class] = "mmap_class",
  [sym_mmap_icon] = "mmap_icon",
  [sym_diagram_gitgraph] = "diagram_gitgraph",
  [sym__gitgraph_stmt] = "_gitgraph_stmt",
  [sym_gitgraph_stmt_commit] = "gitgraph_stmt_commit",
  [sym_gitgraph_commit_attrs] = "gitgraph_commit_attrs",
  [sym_gitgraph_commit_attr_id] = "gitgraph_commit_attr_id",
  [sym_gitgraph_commit_attr_tag] = "gitgraph_commit_attr_tag",
  [sym_gitgraph_commit_attr_type] = "gitgraph_commit_attr_type",
  [sym_gitgraph_stmt_branch] = "gitgraph_stmt_branch",
  [sym_gitgraph_branch_name] = "gitgraph_branch_name",
  [sym_gitgraph_stmt_checkout] = "gitgraph_stmt_checkout",
  [sym_gitgraph_stmt_merge] = "gitgraph_stmt_merge",
  [sym_gitgraph_stmt_cherry_pick] = "gitgraph_stmt_cherry_pick",
  [sym_gitgraph_cherry_pick_id] = "gitgraph_cherry_pick_id",
  [sym_diagram_journey] = "diagram_journey",
  [sym__journey_stmt] = "_journey_stmt",
  [sym_journey_title] = "journey_title",
  [sym_journey_title_text] = "journey_title_text",
  [sym_journey_section] = "journey_section",
  [sym_journey_section_title] = "journey_section_title",
  [sym_journey_task] = "journey_task",
  [sym_journey_task_name] = "journey_task_name",
  [sym_journey_task_score] = "journey_task_score",
  [sym_journey_task_actors] = "journey_task_actors",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym__sequence_rest_text] = "_sequence_rest_text",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_solid_point] = "solid_point",
  [sym_sequence_signal_plus_sign] = "sequence_signal_plus_sign",
  [sym_sequence_signal_minus_sign] = "sequence_signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
  [sym_class_label] = "class_label",
  [sym_state_name] = "state_name",
  [sym_state_arrow] = "state_arrow",
  [sym_state_description] = "state_description",
  [sym_state_hide_empty_description] = "state_hide_empty_description",
  [sym_state_division] = "state_division",
  [sym_state_annotation_fork] = "state_annotation_fork",
  [sym_state_annotation_join] = "state_annotation_join",
  [sym_state_annotation_choice] = "state_annotation_choice",
  [sym_gantt_meta_format] = "gantt_date_format",
  [sym_gantt_task_text] = "gantt_task_text",
  [sym_pie_showdata] = "pie_showdata",
  [sym_pie_label] = "pie_label",
  [sym_flowchart_direction_lr] = "flowchart_direction_lr",
  [sym_flowchart_direction_rl] = "flowchart_direction_rl",
  [sym_flowchart_direction_tb] = "flowchart_direction_tb",
  [sym_flowchart_direction_bt] = "flowchart_direction_bt",
  [sym_flow_text_literal] = "flow_text_literal",
  [sym_flow_link_arrow] = "flow_link_arrow",
  [sym_flow_link_arrow_start] = "flow_link_arrow_start",
  [sym__er_word] = "_er_word",
  [sym_er_cardinarity_zero_or_one] = "er_cardinarity_zero_or_one",
  [sym_er_cardinarity_zero_or_more] = "er_cardinarity_zero_or_more",
  [sym_er_cardinarity_one_or_more] = "er_cardinarity_one_or_more",
  [sym_er_reltype_non_identifying] = "er_reltype_non_identifying",
  [sym_er_reltype_identifying] = "er_reltype_identifying",
  [sym_er_attribute_key_type_pk] = "er_attribute_key_type_pk",
  [sym_er_attribute_key_type_fk] = "er_attribute_key_type_fk",
  [sym__gitgraph_string] = "_gitgraph_string",
  [sym__journey_task_name] = "_journey_task_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_sequence_actor_repeat1] = "sequence_actor_repeat1",
  [aux_sym_sequence_stmt_alt_repeat1] = "sequence_stmt_alt_repeat1",
  [aux_sym_sequence_stmt_par_repeat1] = "sequence_stmt_par_repeat1",
  [aux_sym_diagram_class_repeat1] = "diagram_class_repeat1",
  [aux_sym_class_name_body_repeat1] = "class_name_body_repeat1",
  [aux_sym_class_stmt_class_repeat1] = "class_stmt_class_repeat1",
  [aux_sym_class_method_line_repeat1] = "class_method_line_repeat1",
  [aux_sym_diagram_state_repeat1] = "diagram_state_repeat1",
  [aux_sym_state_composite_body_repeat1] = "state_composite_body_repeat1",
  [aux_sym_diagram_gantt_repeat1] = "diagram_gantt_repeat1",
  [aux_sym_diagram_pie_repeat1] = "diagram_pie_repeat1",
  [aux_sym_diagram_flow_repeat1] = "diagram_flow_repeat1",
  [aux_sym_flow_stmt_vertice_repeat1] = "flow_stmt_vertice_repeat1",
  [aux_sym_flow_node_repeat1] = "flow_node_repeat1",
  [aux_sym_flow_arrow_text_repeat1] = "flow_arrow_text_repeat1",
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = "flow_stmt_subgraph_inner_repeat1",
  [aux_sym_diagram_er_repeat1] = "diagram_er_repeat1",
  [aux_sym_er_stmt_entity_block_inner_repeat1] = "er_stmt_entity_block_inner_repeat1",
  [aux_sym_diagram_mindmap_repeat1] = "diagram_mindmap_repeat1",
  [aux_sym_diagram_gitgraph_repeat1] = "diagram_gitgraph_repeat1",
  [aux_sym_gitgraph_commit_attrs_repeat1] = "gitgraph_commit_attrs_repeat1",
  [aux_sym_diagram_journey_repeat1] = "diagram_journey_repeat1",
  [aux_sym_journey_section_repeat1] = "journey_section_repeat1",
  [aux_sym_journey_task_actors_repeat1] = "journey_task_actors_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [aux_sym_flow_text_literal_repeat1] = "flow_text_literal_repeat1",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_gantt_axis_format] = "gantt_axis_format",
  [alias_sym_gantt_end_dates] = "gantt_end_dates",
  [alias_sym_gantt_excludes] = "gantt_excludes",
  [alias_sym_gantt_includes] = "gantt_includes",
  [alias_sym_gantt_section] = "gantt_section",
  [alias_sym_gantt_title] = "gantt_title",
  [alias_sym_gantt_today_marker] = "gantt_today_marker",
  [alias_sym_gantt_top_axis] = "gantt_top_axis",
  [alias_sym_note_content] = "note_content",
  [alias_sym_sequence_alias] = "sequence_alias",
  [alias_sym_sequence_stmt_alt_branch] = "sequence_stmt_alt_branch",
  [alias_sym_sequence_stmt_loop_inner] = "sequence_stmt_loop_inner",
  [alias_sym_sequence_stmt_opt_inner] = "sequence_stmt_opt_inner",
  [alias_sym_sequence_stmt_rect_inner] = "sequence_stmt_rect_inner",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym__sequence_participant_type_token1] = aux_sym__sequence_participant_type_token1,
  [aux_sym__sequence_participant_type_token2] = aux_sym__sequence_participant_type_token2,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_sequence_stmt_autonumber_token1] = aux_sym_sequence_stmt_autonumber_token1,
  [aux_sym_sequence_stmt_activate_token1] = aux_sym_sequence_stmt_activate_token1,
  [aux_sym_sequence_stmt_deactivate_token1] = aux_sym_sequence_stmt_deactivate_token1,
  [aux_sym_sequence_stmt_note_token1] = aux_sym_sequence_stmt_note_token1,
  [aux_sym_sequence_stmt_note_token2] = aux_sym_sequence_stmt_note_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sequence_stmt_links_token1] = aux_sym_sequence_stmt_links_token1,
  [aux_sym_sequence_stmt_link_token1] = aux_sym_sequence_stmt_link_token1,
  [aux_sym_sequence_stmt_properties_token1] = aux_sym_sequence_stmt_properties_token1,
  [aux_sym_sequence_stmt_details_token1] = aux_sym_sequence_stmt_details_token1,
  [aux_sym_sequence_stmt_title_token1] = aux_sym_sequence_stmt_title_token1,
  [aux_sym_sequence_stmt_loop_token1] = aux_sym_sequence_stmt_loop_token1,
  [aux_sym_sequence_stmt_loop_token2] = anon_sym_end,
  [aux_sym_sequence_stmt_rect_token1] = aux_sym_sequence_stmt_rect_token1,
  [aux_sym_sequence_stmt_opt_token1] = aux_sym_sequence_stmt_opt_token1,
  [aux_sym_sequence_stmt_alt_token1] = aux_sym_sequence_stmt_alt_token1,
  [aux_sym_sequence_stmt_alt_token2] = aux_sym_sequence_stmt_alt_token2,
  [aux_sym_sequence_stmt_par_token1] = aux_sym_sequence_stmt_par_token1,
  [aux_sym_sequence_stmt_par_token2] = aux_sym_sequence_stmt_par_token2,
  [aux_sym_diagram_class_token1] = aux_sym_diagram_class_token1,
  [aux_sym_diagram_class_token2] = aux_sym_diagram_class_token2,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_class_generics_token1] = sym_class_name,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON_COLON] = anon_sym_COLON_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_diagram_state_token1] = aux_sym_diagram_state_token1,
  [aux_sym_diagram_state_token2] = aux_sym_diagram_state_token2,
  [aux_sym_state_stmt_simple_token1] = aux_sym_state_stmt_simple_token1,
  [aux_sym_diagram_gantt_token1] = aux_sym_diagram_gantt_token1,
  [aux_sym_gantt_stmt_dateformat_token1] = aux_sym_gantt_stmt_dateformat_token1,
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = aux_sym_gantt_stmt_inclusiveenddates_token1,
  [aux_sym_gantt_stmt_topaxis_token1] = aux_sym_gantt_stmt_topaxis_token1,
  [aux_sym_gantt_stmt_axisformat_token1] = aux_sym_gantt_stmt_axisformat_token1,
  [aux_sym_gantt_stmt_includes_token1] = aux_sym_gantt_stmt_includes_token1,
  [aux_sym_gantt_stmt_excludes_token1] = aux_sym_gantt_stmt_excludes_token1,
  [aux_sym_gantt_stmt_todaymarker_token1] = aux_sym_gantt_stmt_todaymarker_token1,
  [aux_sym_gantt_stmt_section_token1] = aux_sym_gantt_stmt_section_token1,
  [aux_sym_diagram_pie_token1] = aux_sym_diagram_pie_token1,
  [aux_sym_diagram_flow_token1] = aux_sym_diagram_flow_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_flow_stmt_direction_token1] = aux_sym_flow_stmt_direction_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
  [anon_sym_LPAREN_DASH] = anon_sym_LPAREN_DASH,
  [anon_sym_DASH_RPAREN] = anon_sym_DASH_RPAREN,
  [anon_sym_LPAREN_LBRACK] = anon_sym_LPAREN_LBRACK,
  [anon_sym_RBRACK_RPAREN] = anon_sym_RBRACK_RPAREN,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACK_LPAREN] = anon_sym_LBRACK_LPAREN,
  [anon_sym_RPAREN_RBRACK] = anon_sym_RPAREN_RBRACK,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK_SLASH] = anon_sym_LBRACK_SLASH,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [anon_sym_LBRACK_BSLASH] = anon_sym_LBRACK_BSLASH,
  [anon_sym_SLASH_RBRACK] = anon_sym_SLASH_RBRACK,
  [anon_sym_subgraph] = anon_sym_subgraph,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_diagram_er_token1] = aux_sym_diagram_er_token1,
  [aux_sym_diagram_mindmap_token1] = aux_sym_diagram_mindmap_token1,
  [aux_sym_mmap_markdown_token1] = aux_sym_mmap_markdown_token1,
  [aux_sym_mmap_text_token1] = aux_sym_mmap_text_token1,
  [aux_sym_mmap_class_token1] = aux_sym_mmap_class_token1,
  [aux_sym_mmap_class_token2] = aux_sym_mmap_class_token2,
  [aux_sym_mmap_icon_token1] = aux_sym_mmap_icon_token1,
  [aux_sym_mmap_icon_token2] = aux_sym_mmap_icon_token2,
  [aux_sym_diagram_gitgraph_token1] = aux_sym_diagram_gitgraph_token1,
  [aux_sym_gitgraph_stmt_commit_token1] = aux_sym_gitgraph_stmt_commit_token1,
  [aux_sym_gitgraph_commit_attr_id_token1] = aux_sym_gitgraph_commit_attr_id_token1,
  [aux_sym_gitgraph_commit_attr_tag_token1] = aux_sym_gitgraph_commit_attr_tag_token1,
  [aux_sym_gitgraph_commit_attr_type_token1] = aux_sym_gitgraph_commit_attr_type_token1,
  [aux_sym_gitgraph_commit_attr_type_token2] = aux_sym_gitgraph_commit_attr_type_token2,
  [aux_sym_gitgraph_commit_attr_type_token3] = aux_sym_gitgraph_commit_attr_type_token3,
  [aux_sym_gitgraph_commit_attr_type_token4] = aux_sym_gitgraph_commit_attr_type_token4,
  [aux_sym_gitgraph_stmt_branch_token1] = aux_sym_gitgraph_stmt_branch_token1,
  [aux_sym_gitgraph_stmt_checkout_token1] = aux_sym_gitgraph_stmt_checkout_token1,
  [aux_sym_gitgraph_stmt_merge_token1] = aux_sym_gitgraph_stmt_merge_token1,
  [aux_sym_gitgraph_stmt_cherry_pick_token1] = aux_sym_gitgraph_stmt_cherry_pick_token1,
  [aux_sym_diagram_journey_token1] = aux_sym_diagram_journey_token1,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym__md_start] = sym__md_start,
  [sym__md_end] = sym__md_end,
  [sym_type_directive] = sym_type_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [aux_sym__sequence_rest_text_token1] = aux_sym__sequence_rest_text_token1,
  [sym__sequence_actor_word] = sym__sequence_actor_word,
  [sym_solid_arrow] = sym_solid_arrow,
  [sym_dotted_arrow] = sym_dotted_arrow,
  [sym_solid_open_arrow] = sym_solid_open_arrow,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_solid_cross] = sym_solid_cross,
  [sym_dotted_cross] = sym_dotted_cross,
  [sym_dotted_point] = sym_dotted_point,
  [aux_sym_note_placement_left_token1] = aux_sym_note_placement_left_token1,
  [aux_sym_note_placement_right_token1] = aux_sym_note_placement_right_token1,
  [sym__class_name] = sym__class_name,
  [sym__alpha_num_token] = sym__alpha_num_token,
  [sym__bquote_string] = sym__bquote_string,
  [sym__dquote_string] = sym__dquote_string,
  [sym_class_reltype_aggregation] = sym_class_reltype_aggregation,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_class_label_token1] = aux_sym_class_label_token1,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [aux_sym_state_name_token1] = aux_sym_state_name_token1,
  [aux_sym_state_hide_empty_description_token1] = aux_sym_state_hide_empty_description_token1,
  [sym_state_id] = sym_state_id,
  [aux_sym_state_annotation_fork_token1] = aux_sym_state_annotation_fork_token1,
  [aux_sym_state_annotation_fork_token2] = aux_sym_state_annotation_fork_token2,
  [aux_sym_state_annotation_join_token1] = aux_sym_state_annotation_join_token1,
  [aux_sym_state_annotation_join_token2] = aux_sym_state_annotation_join_token2,
  [aux_sym_state_annotation_choice_token1] = aux_sym_state_annotation_choice_token1,
  [aux_sym_state_annotation_choice_token2] = aux_sym_state_annotation_choice_token2,
  [aux_sym_gantt_task_text_token1] = aux_sym_gantt_task_text_token1,
  [sym_gantt_task_data] = sym_gantt_task_data,
  [aux_sym_pie_showdata_token1] = aux_sym_pie_showdata_token1,
  [sym_pie_title] = sym_pie_title,
  [aux_sym_pie_label_token1] = aux_sym_pie_label_token1,
  [sym_pie_value] = sym_pie_value,
  [aux_sym_flowchart_direction_lr_token1] = aux_sym_flowchart_direction_lr_token1,
  [aux_sym_flowchart_direction_lr_token2] = aux_sym_flowchart_direction_lr_token2,
  [aux_sym_flowchart_direction_rl_token1] = aux_sym_flowchart_direction_rl_token1,
  [aux_sym_flowchart_direction_tb_token1] = aux_sym_flowchart_direction_tb_token1,
  [aux_sym_flowchart_direction_tb_token2] = aux_sym_flowchart_direction_tb_token2,
  [anon_sym_v] = anon_sym_v,
  [aux_sym_flowchart_direction_bt_token1] = aux_sym_flowchart_direction_bt_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_flow_text_literal_token1] = aux_sym_flow_text_literal_token1,
  [sym_flow_text_quoted] = sym_flow_text_quoted,
  [aux_sym_flow_link_arrow_token1] = aux_sym_flow_link_arrow_token1,
  [aux_sym_flow_link_arrow_token2] = aux_sym_flow_link_arrow_token2,
  [aux_sym_flow_link_arrow_token3] = aux_sym_flow_link_arrow_token3,
  [aux_sym_flow_link_arrow_start_token1] = aux_sym_flow_link_arrow_start_token1,
  [aux_sym_flow_link_arrow_start_token2] = aux_sym_flow_link_arrow_start_token2,
  [aux_sym_flow_link_arrow_start_token3] = aux_sym_flow_link_arrow_start_token3,
  [sym__er_alphanum] = sym__er_alphanum,
  [anon_sym_PIPEo] = anon_sym_PIPEo,
  [anon_sym_o_PIPE] = anon_sym_o_PIPE,
  [anon_sym_RBRACEo] = anon_sym_RBRACEo,
  [anon_sym_o_LBRACE] = anon_sym_o_LBRACE,
  [anon_sym_RBRACE_PIPE] = anon_sym_RBRACE_PIPE,
  [anon_sym_PIPE_LBRACE] = anon_sym_PIPE_LBRACE,
  [sym_er_cardinarity_only_one] = sym_er_cardinarity_only_one,
  [anon_sym_DOT_DASH] = anon_sym_DOT_DASH,
  [anon_sym_DASH_DOT] = anon_sym_DASH_DOT,
  [aux_sym_er_attribute_key_type_pk_token1] = aux_sym_er_attribute_key_type_pk_token1,
  [aux_sym_er_attribute_key_type_fk_token1] = aux_sym_er_attribute_key_type_fk_token1,
  [sym__mindmap_text] = sym__mindmap_text,
  [sym__gitgraph_branch_name] = sym__gitgraph_branch_name,
  [sym__journey_title_text] = sym__journey_title_text,
  [sym__journey_section_title] = sym__journey_section_title,
  [sym__journey_score] = sym__journey_score,
  [sym__journey_actor] = sym__journey_actor,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym__direction] = sym__direction,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym__sequence_participant_type] = sym__sequence_participant_type,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_sequence_actor] = sym_sequence_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_sequence_signal_type] = sym_sequence_signal_type,
  [sym_sequence_text] = sym_sequence_text,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_sequence_note_placement] = sym_sequence_note_placement,
  [sym_sequence_stmt_title] = sym_sequence_stmt_title,
  [sym_sequence_stmt_loop] = sym_sequence_stmt_loop,
  [sym_sequence_stmt_rect] = sym_sequence_stmt_rect,
  [sym_sequence_stmt_opt] = sym_sequence_stmt_opt,
  [aux_sym__sequence_subdocument] = aux_sym__sequence_subdocument,
  [sym_sequence_stmt_alt] = sym_sequence_stmt_alt,
  [sym_sequence_stmt_par] = sym_sequence_stmt_par,
  [sym_diagram_class] = sym_diagram_class,
  [sym__class_stmt] = sym__class_stmt,
  [sym_class_stmt_relation] = sym_class_stmt_relation,
  [sym_class_name] = sym_class_name,
  [sym_class_name_body] = sym_class_name_body,
  [sym_class_generics] = sym_class_generics,
  [sym_class_relation] = sym_class_relation,
  [sym__class_reltype] = sym__class_reltype,
  [sym__class_linetype] = sym__class_linetype,
  [sym_class_stmt_class] = sym_class_stmt_class,
  [sym_class_method_line] = sym_class_method_line,
  [sym_class_annotation_line] = sym_class_annotation_line,
  [sym_class_stmt_method] = sym_class_stmt_method,
  [sym_class_stmt_annotation] = sym_class_stmt_annotation,
  [sym_diagram_state] = sym_diagram_state,
  [sym__state_stmt] = sym__state_stmt,
  [sym_state_stmt_simple] = sym_state_stmt_simple,
  [sym_state_stmt_arrow] = sym_state_stmt_arrow,
  [sym_state_stmt_composite] = sym_state_stmt_composite,
  [sym_state_composite_body] = sym_state_composite_body,
  [sym_state_stmt_annotation] = sym_state_stmt_annotation,
  [sym_state_alias] = sym_state_alias,
  [sym_state_stmt_hide_empty_description] = sym_state_stmt_hide_empty_description,
  [sym__state_annotation] = sym__state_annotation,
  [sym_state_note] = sym_state_note,
  [sym_state_note_placement] = sym_state_note_placement,
  [sym_diagram_gantt] = sym_diagram_gantt,
  [sym__gantt_stmt] = sym__gantt_stmt,
  [sym_gantt_stmt_dateformat] = sym_gantt_stmt_dateformat,
  [sym_gantt_stmt_inclusiveenddates] = sym_gantt_stmt_inclusiveenddates,
  [sym_gantt_stmt_topaxis] = sym_gantt_stmt_topaxis,
  [sym_gantt_stmt_axisformat] = sym_gantt_stmt_axisformat,
  [sym_gantt_stmt_includes] = sym_gantt_stmt_includes,
  [sym_gantt_stmt_excludes] = sym_gantt_stmt_excludes,
  [sym_gantt_stmt_todaymarker] = sym_gantt_stmt_todaymarker,
  [sym_gantt_stmt_title] = sym_gantt_stmt_title,
  [sym_gantt_stmt_section] = sym_gantt_stmt_section,
  [sym_gantt_stmt_task] = sym_gantt_stmt_task,
  [sym_diagram_pie] = sym_diagram_pie,
  [sym__pie_stmt] = sym__pie_stmt,
  [sym_pie_stmt_title] = sym_pie_stmt_title,
  [sym_pie_stmt_element] = sym_pie_stmt_element,
  [sym_diagram_flow] = sym_diagram_flow,
  [sym__flowchart_direction] = sym__flowchart_direction,
  [sym__flow_stmt] = sym__flow_stmt,
  [sym_flow_stmt_direction] = sym_flow_stmt_direction,
  [sym_flow_stmt_vertice] = sym_flow_stmt_vertice,
  [sym_flow_node] = sym_flow_node,
  [sym__flow_link] = sym__flow_link,
  [sym_flow_link_simplelink] = sym_flow_link_simplelink,
  [sym_flow_link_arrowtext] = sym_flow_link_arrowtext,
  [sym_flow_link_middletext] = sym_flow_link_middletext,
  [sym_flow_arrow_text] = sym_flow_arrow_text,
  [sym_flow_vertex_id] = sym_flow_vertex_id,
  [sym_flow_vertex] = sym_flow_vertex,
  [sym__flow_vertex_kind] = sym__flow_vertex_kind,
  [sym_flow_vertex_square] = sym_flow_vertex_square,
  [sym_flow_vertex_circle] = sym_flow_vertex_circle,
  [sym_flow_vertex_ellipse] = sym_flow_vertex_ellipse,
  [sym_flow_vertex_stadium] = sym_flow_vertex_stadium,
  [sym_flow_vertex_subroutine] = sym_flow_vertex_subroutine,
  [sym_flow_vertex_rect] = sym_flow_vertex_rect,
  [sym_flow_vertex_cylinder] = sym_flow_vertex_cylinder,
  [sym_flow_vertex_round] = sym_flow_vertex_round,
  [sym_flow_vertex_diamond] = sym_flow_vertex_diamond,
  [sym_flow_vertex_hexagon] = sym_flow_vertex_hexagon,
  [sym_flow_vertex_odd] = sym_flow_vertex_odd,
  [sym_flow_vertex_trapezoid] = sym_flow_vertex_trapezoid,
  [sym_flow_vertex_inv_trapezoid] = sym_flow_vertex_inv_trapezoid,
  [sym_flow_vertex_leanright] = sym_flow_vertex_leanright,
  [sym_flow_vertex_leanleft] = sym_flow_vertex_leanleft,
  [sym__flow_text] = sym__flow_text,
  [sym_flow_stmt_subgraph] = sym_flow_stmt_subgraph,
  [sym_flow_stmt_subgraph_inner] = sym_flow_stmt_subgraph_inner,
  [sym_flow_vertex_text] = sym_flow_vertex_text,
  [sym_diagram_er] = sym_diagram_er,
  [sym__er_stmt] = sym__er_stmt,
  [sym_er_stmt_entity] = sym_er_stmt_entity,
  [sym_er_stmt_entity_relation] = sym_er_stmt_entity_relation,
  [sym_er_entity_name] = sym_er_entity_name,
  [sym_er_relation] = sym_er_relation,
  [sym__er_cardinarity] = sym__er_cardinarity,
  [sym__er_reltype] = sym__er_reltype,
  [sym_er_role] = sym_er_role,
  [sym_er_stmt_entity_block] = sym_er_stmt_entity_block,
  [sym_er_stmt_entity_block_inner] = sym_er_stmt_entity_block_inner,
  [sym_er_attribute] = sym_er_attribute,
  [sym_er_attribute_type] = sym_er_attribute_type,
  [sym_er_attribute_name] = sym_er_attribute_name,
  [sym__er_attribute_key_type] = sym__er_attribute_key_type,
  [sym_er_attribute_comment] = sym_er_attribute_comment,
  [sym_diagram_mindmap] = sym_diagram_mindmap,
  [sym_mmap_node] = sym_mmap_node,
  [sym_mmap_node_id] = sym_mmap_node_id,
  [sym_mmap_markdown] = sym_mmap_markdown,
  [sym_mmap_text] = sym_mmap_text,
  [sym_mmap_node_content] = sym_mmap_node_content,
  [sym_mmap_node_square] = sym_mmap_node_square,
  [sym_mmap_node_rounded] = sym_mmap_node_rounded,
  [sym_mmap_node_circle] = sym_mmap_node_circle,
  [sym_mmap_node_cloud] = sym_mmap_node_cloud,
  [sym_mmap_node_bang] = sym_mmap_node_bang,
  [sym_mmap_node_hexagon] = sym_mmap_node_hexagon,
  [sym_mmap_class] = sym_mmap_class,
  [sym_mmap_icon] = sym_mmap_icon,
  [sym_diagram_gitgraph] = sym_diagram_gitgraph,
  [sym__gitgraph_stmt] = sym__gitgraph_stmt,
  [sym_gitgraph_stmt_commit] = sym_gitgraph_stmt_commit,
  [sym_gitgraph_commit_attrs] = sym_gitgraph_commit_attrs,
  [sym_gitgraph_commit_attr_id] = sym_gitgraph_commit_attr_id,
  [sym_gitgraph_commit_attr_tag] = sym_gitgraph_commit_attr_tag,
  [sym_gitgraph_commit_attr_type] = sym_gitgraph_commit_attr_type,
  [sym_gitgraph_stmt_branch] = sym_gitgraph_stmt_branch,
  [sym_gitgraph_branch_name] = sym_gitgraph_branch_name,
  [sym_gitgraph_stmt_checkout] = sym_gitgraph_stmt_checkout,
  [sym_gitgraph_stmt_merge] = sym_gitgraph_stmt_merge,
  [sym_gitgraph_stmt_cherry_pick] = sym_gitgraph_stmt_cherry_pick,
  [sym_gitgraph_cherry_pick_id] = sym_gitgraph_cherry_pick_id,
  [sym_diagram_journey] = sym_diagram_journey,
  [sym__journey_stmt] = sym__journey_stmt,
  [sym_journey_title] = sym_journey_title,
  [sym_journey_title_text] = sym_journey_title_text,
  [sym_journey_section] = sym_journey_section,
  [sym_journey_section_title] = sym_journey_section_title,
  [sym_journey_task] = sym_journey_task,
  [sym_journey_task_name] = sym_journey_task_name,
  [sym_journey_task_score] = sym_journey_task_score,
  [sym_journey_task_actors] = sym_journey_task_actors,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym__sequence_rest_text] = sym__sequence_rest_text,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_solid_point] = sym_solid_point,
  [sym_sequence_signal_plus_sign] = sym_sequence_signal_plus_sign,
  [sym_sequence_signal_minus_sign] = sym_sequence_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
  [sym_class_label] = sym_class_label,
  [sym_state_name] = sym_state_name,
  [sym_state_arrow] = sym_state_arrow,
  [sym_state_description] = sym_state_description,
  [sym_state_hide_empty_description] = sym_state_hide_empty_description,
  [sym_state_division] = sym_state_division,
  [sym_state_annotation_fork] = sym_state_annotation_fork,
  [sym_state_annotation_join] = sym_state_annotation_join,
  [sym_state_annotation_choice] = sym_state_annotation_choice,
  [sym_gantt_meta_format] = sym_gantt_meta_format,
  [sym_gantt_task_text] = sym_gantt_task_text,
  [sym_pie_showdata] = sym_pie_showdata,
  [sym_pie_label] = sym_pie_label,
  [sym_flowchart_direction_lr] = sym_flowchart_direction_lr,
  [sym_flowchart_direction_rl] = sym_flowchart_direction_rl,
  [sym_flowchart_direction_tb] = sym_flowchart_direction_tb,
  [sym_flowchart_direction_bt] = sym_flowchart_direction_bt,
  [sym_flow_text_literal] = sym_flow_text_literal,
  [sym_flow_link_arrow] = sym_flow_link_arrow,
  [sym_flow_link_arrow_start] = sym_flow_link_arrow_start,
  [sym__er_word] = sym__er_word,
  [sym_er_cardinarity_zero_or_one] = sym_er_cardinarity_zero_or_one,
  [sym_er_cardinarity_zero_or_more] = sym_er_cardinarity_zero_or_more,
  [sym_er_cardinarity_one_or_more] = sym_er_cardinarity_one_or_more,
  [sym_er_reltype_non_identifying] = sym_er_reltype_non_identifying,
  [sym_er_reltype_identifying] = sym_er_reltype_identifying,
  [sym_er_attribute_key_type_pk] = sym_er_attribute_key_type_pk,
  [sym_er_attribute_key_type_fk] = sym_er_attribute_key_type_fk,
  [sym__gitgraph_string] = sym__gitgraph_string,
  [sym__journey_task_name] = sym__journey_task_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_sequence_actor_repeat1] = aux_sym_sequence_actor_repeat1,
  [aux_sym_sequence_stmt_alt_repeat1] = aux_sym_sequence_stmt_alt_repeat1,
  [aux_sym_sequence_stmt_par_repeat1] = aux_sym_sequence_stmt_par_repeat1,
  [aux_sym_diagram_class_repeat1] = aux_sym_diagram_class_repeat1,
  [aux_sym_class_name_body_repeat1] = aux_sym_class_name_body_repeat1,
  [aux_sym_class_stmt_class_repeat1] = aux_sym_class_stmt_class_repeat1,
  [aux_sym_class_method_line_repeat1] = aux_sym_class_method_line_repeat1,
  [aux_sym_diagram_state_repeat1] = aux_sym_diagram_state_repeat1,
  [aux_sym_state_composite_body_repeat1] = aux_sym_state_composite_body_repeat1,
  [aux_sym_diagram_gantt_repeat1] = aux_sym_diagram_gantt_repeat1,
  [aux_sym_diagram_pie_repeat1] = aux_sym_diagram_pie_repeat1,
  [aux_sym_diagram_flow_repeat1] = aux_sym_diagram_flow_repeat1,
  [aux_sym_flow_stmt_vertice_repeat1] = aux_sym_flow_stmt_vertice_repeat1,
  [aux_sym_flow_node_repeat1] = aux_sym_flow_node_repeat1,
  [aux_sym_flow_arrow_text_repeat1] = aux_sym_flow_arrow_text_repeat1,
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = aux_sym_flow_stmt_subgraph_inner_repeat1,
  [aux_sym_diagram_er_repeat1] = aux_sym_diagram_er_repeat1,
  [aux_sym_er_stmt_entity_block_inner_repeat1] = aux_sym_er_stmt_entity_block_inner_repeat1,
  [aux_sym_diagram_mindmap_repeat1] = aux_sym_diagram_mindmap_repeat1,
  [aux_sym_diagram_gitgraph_repeat1] = aux_sym_diagram_gitgraph_repeat1,
  [aux_sym_gitgraph_commit_attrs_repeat1] = aux_sym_gitgraph_commit_attrs_repeat1,
  [aux_sym_diagram_journey_repeat1] = aux_sym_diagram_journey_repeat1,
  [aux_sym_journey_section_repeat1] = aux_sym_journey_section_repeat1,
  [aux_sym_journey_task_actors_repeat1] = aux_sym_journey_task_actors_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [aux_sym_flow_text_literal_repeat1] = aux_sym_flow_text_literal_repeat1,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_gantt_axis_format] = alias_sym_gantt_axis_format,
  [alias_sym_gantt_end_dates] = alias_sym_gantt_end_dates,
  [alias_sym_gantt_excludes] = alias_sym_gantt_excludes,
  [alias_sym_gantt_includes] = alias_sym_gantt_includes,
  [alias_sym_gantt_section] = alias_sym_gantt_section,
  [alias_sym_gantt_title] = alias_sym_gantt_title,
  [alias_sym_gantt_today_marker] = alias_sym_gantt_today_marker,
  [alias_sym_gantt_top_axis] = alias_sym_gantt_top_axis,
  [alias_sym_note_content] = alias_sym_note_content,
  [alias_sym_sequence_alias] = alias_sym_sequence_alias,
  [alias_sym_sequence_stmt_alt_branch] = alias_sym_sequence_stmt_alt_branch,
  [alias_sym_sequence_stmt_loop_inner] = alias_sym_sequence_stmt_loop_inner,
  [alias_sym_sequence_stmt_opt_inner] = alias_sym_sequence_stmt_opt_inner,
  [alias_sym_sequence_stmt_rect_inner] = alias_sym_sequence_stmt_rect_inner,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_sequence_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_actor_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_autonumber_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_activate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_deactivate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_links_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_link_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_properties_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_details_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_title_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_rect_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_opt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_generics_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_stmt_simple_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_gantt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_dateformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_topaxis_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_axisformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_includes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_excludes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_todaymarker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_section_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_pie_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_flow_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_stmt_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subgraph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_er_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_mindmap_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_markdown_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mmap_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gitgraph_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_stmt_commit_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_commit_attr_id_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_commit_attr_tag_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_commit_attr_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_commit_attr_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_commit_attr_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_commit_attr_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_stmt_branch_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_stmt_checkout_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_stmt_merge_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gitgraph_stmt_cherry_pick_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_journey_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__md_start] = {
    .visible = false,
    .named = true,
  },
  [sym__md_end] = {
    .visible = false,
    .named = true,
  },
  [sym_type_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_rest_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__sequence_actor_word] = {
    .visible = false,
    .named = true,
  },
  [sym_solid_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_point] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_placement_left_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_right_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_num_token] = {
    .visible = false,
    .named = true,
  },
  [sym__bquote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_aggregation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_hide_empty_description_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_state_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_state_annotation_fork_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_fork_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_gantt_task_data] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_showdata_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_pie_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_pie_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flowchart_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_lr_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_text_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_flow_text_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flow_link_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__er_alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_er_cardinarity_only_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_pk_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_fk_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__mindmap_text] = {
    .visible = false,
    .named = true,
  },
  [sym__gitgraph_branch_name] = {
    .visible = false,
    .named = true,
  },
  [sym__journey_title_text] = {
    .visible = false,
    .named = true,
  },
  [sym__journey_section_title] = {
    .visible = false,
    .named = true,
  },
  [sym__journey_score] = {
    .visible = false,
    .named = true,
  },
  [sym__journey_actor] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__sequence_participant_type] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_link] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_details] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_subdocument] = {
    .visible = false,
    .named = false,
  },
  [sym_sequence_stmt_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_par] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_class] = {
    .visible = true,
    .named = true,
  },
  [sym__class_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_class_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__class_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__class_linetype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_state] = {
    .visible = true,
    .named = true,
  },
  [sym__state_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_stmt_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_state_composite_body] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_state_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym__state_annotation] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_note] = {
    .visible = true,
    .named = true,
  },
  [sym_state_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym__gantt_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_gantt_stmt_dateformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_inclusiveenddates] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_topaxis] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_axisformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_todaymarker] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_task] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_pie] = {
    .visible = true,
    .named = true,
  },
  [sym__pie_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pie_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_stmt_element] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_flow] = {
    .visible = true,
    .named = true,
  },
  [sym__flowchart_direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__flow_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_stmt_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_vertice] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_node] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_link] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_link_simplelink] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrowtext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_middletext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_arrow_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_id] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_vertex_kind] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_vertex_square] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_ellipse] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_stadium] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_cylinder] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_round] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_diamond] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_odd] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_inv_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanright] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanleft] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_text] = {
    .visible = false,
    .named = true,
  },
  [sym_flow_stmt_subgraph] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_subgraph_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_text] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_er] = {
    .visible = true,
    .named = true,
  },
  [sym__er_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_stmt_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_er_entity_name] = {
    .visible = true,
    .named = true,
  },
  [sym_er_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__er_cardinarity] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__er_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_role] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__er_attribute_key_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_attribute_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_mindmap] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_text] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_content] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_square] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_rounded] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_cloud] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_class] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_gitgraph] = {
    .visible = true,
    .named = true,
  },
  [sym__gitgraph_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_gitgraph_stmt_commit] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_commit_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_commit_attr_id] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_commit_attr_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_commit_attr_type] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_stmt_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_branch_name] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_stmt_checkout] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_stmt_merge] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_stmt_cherry_pick] = {
    .visible = true,
    .named = true,
  },
  [sym_gitgraph_cherry_pick_id] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_journey] = {
    .visible = true,
    .named = true,
  },
  [sym__journey_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_journey_title] = {
    .visible = true,
    .named = true,
  },
  [sym_journey_title_text] = {
    .visible = true,
    .named = true,
  },
  [sym_journey_section] = {
    .visible = true,
    .named = true,
  },
  [sym_journey_section_title] = {
    .visible = true,
    .named = true,
  },
  [sym_journey_task] = {
    .visible = true,
    .named = true,
  },
  [sym_journey_task_name] = {
    .visible = true,
    .named = true,
  },
  [sym_journey_task_score] = {
    .visible = true,
    .named = true,
  },
  [sym_journey_task_actors] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_point] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_minus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_left] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_right] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_solid] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_dotted] = {
    .visible = true,
    .named = true,
  },
  [sym_class_label] = {
    .visible = true,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_division] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_join] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_meta_format] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_task_text] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_showdata] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_label] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow_start] = {
    .visible = true,
    .named = true,
  },
  [sym__er_word] = {
    .visible = false,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_non_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_pk] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_fk] = {
    .visible = true,
    .named = true,
  },
  [sym__gitgraph_string] = {
    .visible = false,
    .named = true,
  },
  [sym__journey_task_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_actor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_stmt_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_composite_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gantt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_pie_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_vertice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_arrow_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_er_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_er_stmt_entity_block_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_mindmap_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gitgraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gitgraph_commit_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_journey_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_journey_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_journey_task_actors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_classifier_abstract] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_style_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_private] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_public] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_axis_format] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_end_dates] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_excludes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_includes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_section] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_today_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_top_axis] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_alt_branch] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_rect_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_gantt_title,
  },
  [2] = {
    [1] = alias_sym_gantt_end_dates,
  },
  [3] = {
    [1] = alias_sym_gantt_top_axis,
  },
  [4] = {
    [1] = alias_sym_gantt_axis_format,
  },
  [5] = {
    [1] = alias_sym_gantt_includes,
  },
  [6] = {
    [1] = alias_sym_gantt_excludes,
  },
  [7] = {
    [1] = alias_sym_gantt_today_marker,
  },
  [8] = {
    [1] = alias_sym_gantt_section,
  },
  [9] = {
    [2] = alias_sym_title,
  },
  [10] = {
    [2] = alias_sym_sequence_stmt_alt_branch,
  },
  [11] = {
    [0] = sym_state_description,
  },
  [12] = {
    [3] = alias_sym_sequence_alias,
  },
  [13] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [14] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [15] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [16] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [17] = {
    [3] = alias_sym_class_style_name,
  },
  [18] = {
    [1] = alias_sym_annotation,
  },
  [19] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [20] = {
    [0] = alias_sym_class_visibility_public,
  },
  [21] = {
    [0] = alias_sym_class_visibility_private,
  },
  [22] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [23] = {
    [4] = alias_sym_note_content,
  },
  [24] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
  [25] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [26] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [27] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [28] = {
    [2] = alias_sym_class_classifier_abstract,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__sequence_subdocument, 5,
    aux_sym__sequence_subdocument,
    alias_sym_sequence_stmt_alt_branch,
    alias_sym_sequence_stmt_loop_inner,
    alias_sym_sequence_stmt_opt_inner,
    alias_sym_sequence_stmt_rect_inner,
  sym__sequence_rest_text, 3,
    sym__sequence_rest_text,
    alias_sym_sequence_alias,
    alias_sym_title,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  sym_gantt_meta_format, 9,
    sym_gantt_meta_format,
    alias_sym_gantt_axis_format,
    alias_sym_gantt_end_dates,
    alias_sym_gantt_excludes,
    alias_sym_gantt_includes,
    alias_sym_gantt_section,
    alias_sym_gantt_title,
    alias_sym_gantt_today_marker,
    alias_sym_gantt_top_axis,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 3,
  [9] = 3,
  [10] = 6,
  [11] = 2,
  [12] = 2,
  [13] = 6,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 22,
  [30] = 24,
  [31] = 21,
  [32] = 14,
  [33] = 27,
  [34] = 28,
  [35] = 35,
  [36] = 22,
  [37] = 37,
  [38] = 24,
  [39] = 21,
  [40] = 28,
  [41] = 19,
  [42] = 27,
  [43] = 28,
  [44] = 22,
  [45] = 24,
  [46] = 27,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 48,
  [52] = 47,
  [53] = 50,
  [54] = 54,
  [55] = 48,
  [56] = 50,
  [57] = 57,
  [58] = 58,
  [59] = 48,
  [60] = 50,
  [61] = 47,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 89,
  [113] = 93,
  [114] = 114,
  [115] = 92,
  [116] = 91,
  [117] = 90,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 120,
  [123] = 114,
  [124] = 111,
  [125] = 110,
  [126] = 121,
  [127] = 109,
  [128] = 108,
  [129] = 107,
  [130] = 106,
  [131] = 105,
  [132] = 104,
  [133] = 103,
  [134] = 102,
  [135] = 101,
  [136] = 119,
  [137] = 100,
  [138] = 99,
  [139] = 98,
  [140] = 97,
  [141] = 118,
  [142] = 96,
  [143] = 95,
  [144] = 94,
  [145] = 85,
  [146] = 86,
  [147] = 87,
  [148] = 88,
  [149] = 89,
  [150] = 104,
  [151] = 91,
  [152] = 92,
  [153] = 91,
  [154] = 93,
  [155] = 86,
  [156] = 85,
  [157] = 94,
  [158] = 95,
  [159] = 96,
  [160] = 97,
  [161] = 118,
  [162] = 119,
  [163] = 90,
  [164] = 98,
  [165] = 121,
  [166] = 88,
  [167] = 87,
  [168] = 120,
  [169] = 86,
  [170] = 85,
  [171] = 94,
  [172] = 95,
  [173] = 114,
  [174] = 111,
  [175] = 96,
  [176] = 97,
  [177] = 110,
  [178] = 98,
  [179] = 109,
  [180] = 99,
  [181] = 100,
  [182] = 101,
  [183] = 108,
  [184] = 107,
  [185] = 99,
  [186] = 106,
  [187] = 102,
  [188] = 103,
  [189] = 105,
  [190] = 92,
  [191] = 103,
  [192] = 90,
  [193] = 89,
  [194] = 88,
  [195] = 102,
  [196] = 101,
  [197] = 118,
  [198] = 104,
  [199] = 105,
  [200] = 106,
  [201] = 107,
  [202] = 108,
  [203] = 109,
  [204] = 110,
  [205] = 111,
  [206] = 114,
  [207] = 120,
  [208] = 119,
  [209] = 100,
  [210] = 87,
  [211] = 121,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 228,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 228,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 304,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 304,
  [315] = 315,
  [316] = 316,
  [317] = 304,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 248,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 237,
  [373] = 370,
  [374] = 374,
  [375] = 375,
  [376] = 370,
  [377] = 370,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 391,
  [393] = 393,
  [394] = 248,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 391,
  [400] = 237,
  [401] = 401,
  [402] = 402,
  [403] = 229,
  [404] = 404,
  [405] = 391,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 263,
  [410] = 410,
  [411] = 411,
  [412] = 411,
  [413] = 413,
  [414] = 303,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 223,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 238,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 389,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 316,
  [453] = 453,
  [454] = 454,
  [455] = 274,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 288,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 231,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 258,
  [492] = 484,
  [493] = 493,
  [494] = 494,
  [495] = 484,
  [496] = 496,
  [497] = 484,
  [498] = 241,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 507,
  [514] = 514,
  [515] = 508,
  [516] = 510,
  [517] = 511,
  [518] = 512,
  [519] = 507,
  [520] = 508,
  [521] = 521,
  [522] = 510,
  [523] = 511,
  [524] = 512,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 526,
  [538] = 538,
  [539] = 527,
  [540] = 540,
  [541] = 528,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 530,
  [554] = 533,
  [555] = 535,
  [556] = 556,
  [557] = 536,
  [558] = 558,
  [559] = 526,
  [560] = 527,
  [561] = 528,
  [562] = 562,
  [563] = 530,
  [564] = 533,
  [565] = 535,
  [566] = 536,
  [567] = 567,
  [568] = 529,
  [569] = 569,
  [570] = 570,
  [571] = 569,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 529,
  [581] = 569,
  [582] = 570,
  [583] = 572,
  [584] = 573,
  [585] = 574,
  [586] = 576,
  [587] = 587,
  [588] = 578,
  [589] = 529,
  [590] = 590,
  [591] = 591,
  [592] = 569,
  [593] = 593,
  [594] = 570,
  [595] = 572,
  [596] = 596,
  [597] = 573,
  [598] = 574,
  [599] = 576,
  [600] = 578,
  [601] = 575,
  [602] = 590,
  [603] = 578,
  [604] = 604,
  [605] = 605,
  [606] = 576,
  [607] = 574,
  [608] = 608,
  [609] = 536,
  [610] = 535,
  [611] = 611,
  [612] = 533,
  [613] = 530,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 504,
  [621] = 621,
  [622] = 575,
  [623] = 623,
  [624] = 590,
  [625] = 625,
  [626] = 528,
  [627] = 604,
  [628] = 527,
  [629] = 526,
  [630] = 512,
  [631] = 631,
  [632] = 619,
  [633] = 573,
  [634] = 634,
  [635] = 635,
  [636] = 615,
  [637] = 616,
  [638] = 618,
  [639] = 619,
  [640] = 640,
  [641] = 504,
  [642] = 575,
  [643] = 590,
  [644] = 604,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 615,
  [656] = 616,
  [657] = 618,
  [658] = 619,
  [659] = 504,
  [660] = 660,
  [661] = 661,
  [662] = 572,
  [663] = 507,
  [664] = 664,
  [665] = 508,
  [666] = 604,
  [667] = 447,
  [668] = 618,
  [669] = 570,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 511,
  [675] = 646,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 616,
  [686] = 615,
  [687] = 510,
  [688] = 596,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 479,
  [693] = 693,
  [694] = 694,
  [695] = 478,
  [696] = 696,
  [697] = 474,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 689,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 708,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 708,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 690,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 689,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 713,
  [744] = 744,
  [745] = 745,
  [746] = 689,
  [747] = 742,
  [748] = 748,
  [749] = 713,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 690,
  [759] = 742,
  [760] = 742,
  [761] = 705,
  [762] = 713,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 690,
  [777] = 705,
  [778] = 778,
  [779] = 708,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 705,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 795,
  [815] = 797,
  [816] = 816,
  [817] = 798,
  [818] = 800,
  [819] = 802,
  [820] = 803,
  [821] = 804,
  [822] = 822,
  [823] = 811,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 807,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 811,
  [833] = 833,
  [834] = 834,
  [835] = 807,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 795,
  [840] = 797,
  [841] = 841,
  [842] = 796,
  [843] = 798,
  [844] = 800,
  [845] = 802,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 797,
  [864] = 864,
  [865] = 804,
  [866] = 803,
  [867] = 867,
  [868] = 868,
  [869] = 811,
  [870] = 870,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 850,
  [875] = 851,
  [876] = 852,
  [877] = 853,
  [878] = 878,
  [879] = 855,
  [880] = 856,
  [881] = 857,
  [882] = 864,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 802,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 894,
  [895] = 850,
  [896] = 851,
  [897] = 852,
  [898] = 853,
  [899] = 795,
  [900] = 855,
  [901] = 856,
  [902] = 857,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 798,
  [909] = 801,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 803,
  [916] = 828,
  [917] = 917,
  [918] = 804,
  [919] = 782,
  [920] = 781,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 850,
  [925] = 849,
  [926] = 883,
  [927] = 904,
  [928] = 848,
  [929] = 929,
  [930] = 930,
  [931] = 851,
  [932] = 852,
  [933] = 828,
  [934] = 853,
  [935] = 119,
  [936] = 936,
  [937] = 937,
  [938] = 922,
  [939] = 923,
  [940] = 855,
  [941] = 849,
  [942] = 883,
  [943] = 904,
  [944] = 848,
  [945] = 800,
  [946] = 946,
  [947] = 947,
  [948] = 948,
  [949] = 828,
  [950] = 950,
  [951] = 951,
  [952] = 952,
  [953] = 118,
  [954] = 922,
  [955] = 923,
  [956] = 856,
  [957] = 849,
  [958] = 883,
  [959] = 904,
  [960] = 848,
  [961] = 961,
  [962] = 962,
  [963] = 857,
  [964] = 964,
  [965] = 922,
  [966] = 966,
  [967] = 967,
  [968] = 968,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 868,
  [974] = 799,
  [975] = 923,
  [976] = 807,
  [977] = 977,
  [978] = 978,
  [979] = 979,
  [980] = 980,
  [981] = 981,
  [982] = 982,
  [983] = 824,
  [984] = 984,
};

static TSCharacterRange aux_sym_flow_text_literal_token1_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '('}, {'*', ','}, {'.', '.'}, {'0', ':'}, {'<', '['}, {'^', '{'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 669,
        '"', 146,
        '#', 564,
        '$', 571,
        '%', 31,
        '&', 591,
        '(', 567,
        ')', 569,
        '*', 570,
        '+', 561,
        ',', 529,
        '-', 563,
        '.', 60,
        '/', 135,
        ':', 523,
        ';', 588,
        '<', 817,
        '=', 87,
        '>', 612,
        'C', 297,
        'E', 336,
        'H', 115,
        'M', 244,
        'N', 123,
        'R', 105,
        'S', 245,
        '[', 595,
        '\\', 136,
        ']', 597,
        '^', 1017,
        '`', 23,
        'c', 118,
        'e', 122,
        'h', 307,
        'm', 156,
        'n', 369,
        'o', 813,
        'r', 259,
        's', 168,
        'v', 1015,
        'x', 86,
        '{', 557,
        '|', 593,
        '}', 559,
        '~', 546,
        '\t', 654,
        ' ', 654,
        'A', 211,
        'a', 211,
        'B', 399,
        'b', 399,
        'D', 193,
        'd', 193,
        'F', 328,
        'f', 328,
        'G', 173,
        'g', 173,
        'I', 232,
        'i', 232,
        'J', 370,
        'j', 370,
        'L', 247,
        'l', 247,
        'P', 180,
        'p', 180,
        'T', 178,
        't', 178,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(657);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(633);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(653);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '%') ADVANCE(689);
      if (lookahead == ',') ADVANCE(529);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == ':') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 653,
        '\n', 670,
        ' ', 657,
        '%', 689,
        'A', 699,
        'a', 699,
        'D', 712,
        'd', 712,
        'E', 735,
        'e', 735,
        'L', 722,
        'l', 722,
        'N', 742,
        'n', 742,
        'O', 747,
        'o', 747,
        'P', 691,
        'p', 691,
        'R', 713,
        'r', 713,
        'S', 714,
        's', 714,
        'T', 726,
        't', 726,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 653,
        '\n', 670,
        ' ', 657,
        '%', 689,
        'A', 700,
        'a', 700,
        'D', 712,
        'd', 712,
        'E', 735,
        'e', 735,
        'L', 722,
        'l', 722,
        'N', 742,
        'n', 742,
        'O', 747,
        'o', 747,
        'P', 691,
        'p', 691,
        'R', 713,
        'r', 713,
        'S', 714,
        's', 714,
        'T', 726,
        't', 726,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 653,
        '\n', 670,
        ' ', 657,
        '%', 689,
        'A', 700,
        'a', 700,
        'D', 712,
        'd', 712,
        'E', 731,
        'e', 731,
        'L', 722,
        'l', 722,
        'N', 742,
        'n', 742,
        'O', 747,
        'o', 747,
        'P', 691,
        'p', 691,
        'R', 713,
        'r', 713,
        'S', 714,
        's', 714,
        'T', 726,
        't', 726,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(653);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '%') ADVANCE(689);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(653);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '%') ADVANCE(689);
      if (lookahead == '+') ADVANCE(561);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(664);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '%') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ';') ADVANCE(1061);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(515);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 670,
        '#', 564,
        '%', 32,
        '(', 565,
        ')', 568,
        '+', 561,
        '-', 562,
        '<', 84,
        '}', 558,
        '~', 547,
        '\t', 657,
        ' ', 657,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 670,
        '%', 831,
        '-', 833,
        '[', 832,
        '}', 560,
        '\t', 658,
        ' ', 658,
        'D', 851,
        'd', 851,
        'H', 852,
        'h', 852,
        'N', 866,
        'n', 866,
        'S', 875,
        's', 875,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '%') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 670,
        '%', 32,
        '-', 66,
        ':', 522,
        '[', 58,
        '}', 558,
        '\t', 657,
        ' ', 657,
        'D', 899,
        'd', 899,
        'H', 900,
        'h', 900,
        'N', 904,
        'n', 904,
        'S', 907,
        's', 907,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(527);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == 'D') ADVANCE(325);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(375);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(377);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(659);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(675);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '"', 493,
        '%', 32,
        '*', 570,
        '-', 64,
        '.', 72,
        ':', 522,
        '<', 818,
        '>', 612,
        '`', 494,
        'o', 814,
        '|', 90,
        '~', 546,
        '\t', 657,
        ' ', 657,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(811);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '%') ADVANCE(1021);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(1022);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(925);
      if (lookahead == ':') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(1021);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(1022);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '%', 1021,
        ')', 568,
        '-', 55,
        '/', 135,
        '\\', 136,
        ']', 597,
        '|', 137,
        '}', 558,
        '\t', 657,
        ' ', 657,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(1022);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(628);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(1046);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1047);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(1055);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1056);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(1051);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(1052);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(639);
      END_STATE();
    case 41:
      if (lookahead == '%') ADVANCE(516);
      END_STATE();
    case 42:
      if (lookahead == '%') ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(552);
      END_STATE();
    case 43:
      if (lookahead == '%') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(627);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(995);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(996);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(916);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        '%', 32,
        '-', 67,
        '.', 62,
        '<', 70,
        '=', 89,
        '\t', 657,
        ' ', 657,
        'o', 791,
        'x', 791,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 47:
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead == 's') ADVANCE(800);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(803);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 48:
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 49:
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(666);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1008);
      END_STATE();
    case 50:
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 51:
      if (lookahead == '(') ADVANCE(634);
      END_STATE();
    case 52:
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == ']') ADVANCE(609);
      END_STATE();
    case 53:
      if (lookahead == ')') ADVANCE(603);
      if (lookahead == ']') ADVANCE(605);
      END_STATE();
    case 54:
      if (lookahead == ')') ADVANCE(783);
      if (lookahead == '>') ADVANCE(780);
      if (lookahead == 'x') ADVANCE(782);
      END_STATE();
    case 55:
      if (lookahead == ')') ADVANCE(601);
      END_STATE();
    case 56:
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead == '.') ADVANCE(1031);
      END_STATE();
    case 57:
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '>') ADVANCE(778);
      if (lookahead == 'x') ADVANCE(781);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(139);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '[') ADVANCE(229);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(1040);
      if (lookahead == '.') ADVANCE(823);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead == '.') ADVANCE(1031);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(1025);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(1024);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(819);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(819);
      if (lookahead == '.') ADVANCE(1041);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(821);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '{') ADVANCE(1036);
      if (lookahead == '|') ADVANCE(1034);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(823);
      END_STATE();
    case 73:
      if (lookahead == '2') ADVANCE(544);
      END_STATE();
    case 74:
      if (lookahead == '2') ADVANCE(575);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(555);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(631);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == '<') ADVANCE(572);
      END_STATE();
    case 85:
      if (lookahead == '<') ADVANCE(216);
      END_STATE();
    case 86:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == '=') ADVANCE(1030);
      END_STATE();
    case 88:
      if (lookahead == '=') ADVANCE(1027);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(1026);
      END_STATE();
    case 89:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == '>') ADVANCE(816);
      END_STATE();
    case 91:
      if (lookahead == '>') ADVANCE(573);
      END_STATE();
    case 92:
      if (lookahead == '>') ADVANCE(917);
      END_STATE();
    case 93:
      if (lookahead == '>') ADVANCE(919);
      END_STATE();
    case 94:
      if (lookahead == '>') ADVANCE(921);
      END_STATE();
    case 95:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 99:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(536);
      if (lookahead == 'd') ADVANCE(536);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(324);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(325);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(326);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(326);
      if (lookahead == '_') ADVANCE(199);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(646);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 109:
      if (lookahead == 'G') ADVANCE(113);
      END_STATE();
    case 110:
      if (lookahead == 'G') ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 111:
      if (lookahead == 'G') ADVANCE(114);
      END_STATE();
    case 112:
      if (lookahead == 'G') ADVANCE(415);
      END_STATE();
    case 113:
      if (lookahead == 'H') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'H') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 117:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(177);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(248);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(645);
      END_STATE();
    case 121:
      if (lookahead == 'M') ADVANCE(99);
      END_STATE();
    case 122:
      ADVANCE_MAP(
        'N', 233,
        'n', 100,
        'L', 435,
        'l', 435,
        'R', 235,
        'r', 235,
        'X', 210,
        'x', 210,
      );
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(101);
      if (lookahead == 's') ADVANCE(553);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(647);
      END_STATE();
    case 132:
      if (lookahead == 'V') ADVANCE(106);
      END_STATE();
    case 133:
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 134:
      if (lookahead == '[') ADVANCE(229);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(616);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(614);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(607);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == '{') ADVANCE(1038);
      if (lookahead == '|') ADVANCE(1039);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(886);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(918);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(920);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(922);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(141);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == '`') ADVANCE(674);
      END_STATE();
    case 147:
      if (lookahead == '`') ADVANCE(810);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(619);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(617);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == '|') ADVANCE(1037);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == '|') ADVANCE(1037);
      if (lookahead == '}') ADVANCE(611);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == '{') ADVANCE(1038);
      if (lookahead == '|') ADVANCE(1039);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(622);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 169:
      if (lookahead == '{') ADVANCE(1036);
      if (lookahead == '|') ADVANCE(1034);
      END_STATE();
    case 170:
      if (lookahead == '{') ADVANCE(610);
      END_STATE();
    case 171:
      if (lookahead == '}') ADVANCE(611);
      END_STATE();
    case 172:
      if (lookahead == '}') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(172);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(997);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        'A', 289,
        'a', 289,
        'B', 1013,
        'b', 1013,
        'D', 1014,
        'd', 1014,
        'I', 450,
        'i', 450,
        'O', 236,
        'o', 236,
        'Y', 393,
        'y', 393,
      );
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(450);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(393);
      END_STATE();
    case 180:
      ADVANCE_MAP(
        'A', 401,
        'a', 401,
        'I', 249,
        'i', 249,
        'K', 1042,
        'k', 1042,
        'R', 376,
        'r', 376,
      );
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 194:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 195:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 196:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 197:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 198:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 199:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 206:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1013);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1014);
      END_STATE();
    case 207:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(678);
      END_STATE();
    case 208:
      ADVANCE_MAP(
        'B', 449,
        'b', 449,
        'L', 405,
        'l', 405,
        'R', 338,
        'r', 338,
        'T', 207,
        't', 207,
      );
      END_STATE();
    case 209:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 210:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 211:
      ADVANCE_MAP(
        'C', 438,
        'c', 438,
        'L', 439,
        'l', 439,
        'N', 234,
        'n', 234,
        'S', 520,
        's', 520,
        'U', 456,
        'u', 456,
        'X', 306,
        'x', 306,
      );
      END_STATE();
    case 212:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 213:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 214:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 215:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 216:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(387);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(384);
      END_STATE();
    case 217:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 218:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(473);
      END_STATE();
    case 219:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(476);
      END_STATE();
    case 220:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 221:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 222:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 223:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 224:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 225:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 226:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 227:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 228:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 229:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(388);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(385);
      END_STATE();
    case 230:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(543);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(174);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 243:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 247:
      ADVANCE_MAP(
        'E', 286,
        'e', 286,
        'I', 354,
        'i', 354,
        'O', 372,
        'o', 372,
        'R', 1010,
        'r', 1010,
      );
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 283:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(784);
      END_STATE();
    case 284:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(785);
      END_STATE();
    case 285:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 286:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(451);
      END_STATE();
    case 287:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(390);
      END_STATE();
    case 288:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 289:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(643);
      END_STATE();
    case 290:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(416);
      END_STATE();
    case 292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 293:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(420);
      END_STATE();
    case 294:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 295:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(640);
      END_STATE();
    case 296:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(648);
      END_STATE();
    case 297:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 298:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 299:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      END_STATE();
    case 300:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(467);
      END_STATE();
    case 301:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 302:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 303:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 304:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 305:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1042);
      END_STATE();
    case 306:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 307:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 308:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 309:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 310:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 311:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 312:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 313:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 314:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 315:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 316:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 317:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 318:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 319:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 320:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 321:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 322:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 323:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 324:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 326:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 328:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 329:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(531);
      END_STATE();
    case 330:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(651);
      END_STATE();
    case 331:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 332:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 333:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(379);
      END_STATE();
    case 334:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 335:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 336:
      ADVANCE_MAP(
        'L', 435,
        'l', 435,
        'N', 233,
        'n', 233,
        'R', 235,
        'r', 235,
        'X', 210,
        'x', 210,
      );
      END_STATE();
    case 337:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 338:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 339:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 340:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 341:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 342:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 343:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 344:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(621);
      END_STATE();
    case 345:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 346:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(574);
      END_STATE();
    case 347:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 348:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 350:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(396);
      END_STATE();
    case 351:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 352:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 353:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      END_STATE();
    case 359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 369:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 370:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 371:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 372:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 373:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 374:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 375:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 376:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 377:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 378:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 379:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 380:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 381:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 382:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 383:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 384:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 385:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 386:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 387:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 389:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 390:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 391:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(535);
      END_STATE();
    case 392:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 393:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 394:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 395:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 396:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 397:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 398:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1011);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 410:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 411:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 412:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 413:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 414:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 415:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 416:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 417:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 418:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 419:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 420:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 421:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 422:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 423:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 424:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 425:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(580);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      END_STATE();
    case 435:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 436:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(427);
      END_STATE();
    case 437:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(577);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(641);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(581);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 470:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 471:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(411);
      END_STATE();
    case 472:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 473:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 474:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 477:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 478:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 479:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 480:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 481:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(198);
      END_STATE();
    case 482:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 483:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 484:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(238);
      END_STATE();
    case 485:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      END_STATE();
    case 486:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 487:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 488:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 489:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 490:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(1028);
      END_STATE();
    case 491:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1008);
      END_STATE();
    case 492:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1009);
      END_STATE();
    case 493:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 494:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(147);
      END_STATE();
    case 495:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(628);
      END_STATE();
    case 496:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\t', 653,
        '\n', 670,
        ' ', 657,
        '%', 689,
        'A', 700,
        'a', 700,
        'D', 712,
        'd', 712,
        'L', 722,
        'l', 722,
        'N', 742,
        'n', 742,
        'O', 747,
        'o', 747,
        'P', 691,
        'p', 691,
        'R', 713,
        'r', 713,
        'S', 714,
        's', 714,
        'T', 726,
        't', 726,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 497:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 669,
        '%', 32,
        '(', 566,
        ')', 569,
        ':', 80,
        '[', 594,
        '{', 170,
        '\t', 654,
        ' ', 654,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(75);
      END_STATE();
    case 498:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '"', 25,
        '%', 31,
        '&', 591,
        '(', 567,
        ')', 52,
        ',', 529,
        '-', 56,
        '.', 62,
        '/', 135,
        ':', 522,
        ';', 588,
        '=', 87,
        '>', 612,
        'H', 117,
        'M', 244,
        'N', 124,
        'O', 480,
        'R', 108,
        '[', 595,
        '\\', 136,
        ']', 596,
        '`', 23,
        'm', 156,
        'o', 69,
        'r', 302,
        '{', 557,
        '|', 138,
        '}', 162,
        '~', 546,
        '\t', 657,
        ' ', 657,
        '<', 68,
        'x', 68,
        'A', 358,
        'a', 358,
        'B', 422,
        'b', 422,
        'C', 297,
        'c', 297,
        'E', 335,
        'e', 335,
        'F', 328,
        'f', 328,
        'G', 173,
        'g', 173,
        'I', 231,
        'i', 231,
        'J', 370,
        'j', 370,
        'L', 246,
        'l', 246,
        'P', 305,
        'p', 305,
        'S', 279,
        's', 279,
        'T', 179,
        't', 179,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      END_STATE();
    case 499:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '"', 25,
        '%', 32,
        '-', 65,
        '.', 60,
        '}', 558,
        '\t', 657,
        ' ', 657,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1032);
      END_STATE();
    case 500:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '"', 493,
        '%', 32,
        '(', 565,
        ')', 568,
        '*', 570,
        '-', 64,
        '.', 72,
        ':', 522,
        '<', 818,
        '>', 612,
        '[', 594,
        ']', 596,
        '^', 1017,
        'e', 160,
        'o', 812,
        'v', 1015,
        '|', 90,
        '}', 171,
        '~', 546,
        '\t', 657,
        ' ', 657,
        'B', 399,
        'b', 399,
        'L', 400,
        'l', 400,
        'R', 337,
        'r', 337,
        'T', 206,
        't', 206,
      );
      END_STATE();
    case 501:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '"', 493,
        '%', 32,
        '-', 64,
        '.', 72,
        ':', 81,
        '`', 494,
        '{', 556,
        '~', 546,
        '\t', 657,
        ' ', 657,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 502:
      if (eof) ADVANCE(514);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '%') ADVANCE(1001);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 503:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '$', 571,
        '%', 32,
        '(', 565,
        ')', 568,
        '*', 570,
        ';', 588,
        '[', 594,
        ']', 596,
        '|', 592,
        '}', 558,
        '\t', 657,
        ' ', 657,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 504:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '%', 925,
        '\t', 657,
        ' ', 657,
        'A', 988,
        'a', 988,
        'D', 926,
        'd', 926,
        'E', 989,
        'e', 989,
        'I', 966,
        'i', 966,
        'S', 942,
        's', 942,
        'T', 954,
        't', 954,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 505:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '%', 831,
        '\t', 658,
        ' ', 658,
        'S', 849,
        's', 849,
        'T', 855,
        't', 855,
      );
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 506:
      if (eof) ADVANCE(514);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 507:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '%', 32,
        '(', 565,
        ')', 568,
        '-', 65,
        '.', 60,
        ':', 522,
        '>', 91,
        '[', 58,
        ']', 53,
        '{', 556,
        '|', 592,
        '}', 558,
        '\t', 657,
        ' ', 657,
        'D', 899,
        'd', 899,
        'H', 900,
        'h', 900,
        'N', 904,
        'n', 904,
        'S', 907,
        's', 907,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 508:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '%', 32,
        '-', 57,
        ':', 522,
        '<', 85,
        '[', 134,
        'o', 169,
        '{', 556,
        '|', 163,
        '}', 161,
        '\t', 657,
        ' ', 657,
        'A', 426,
        'a', 426,
      );
      END_STATE();
    case 509:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '%', 32,
        '-', 64,
        ':', 81,
        '<', 85,
        '[', 59,
        '{', 556,
        '}', 558,
        '~', 546,
        '\t', 657,
        ' ', 657,
        'A', 906,
        'a', 906,
        'D', 899,
        'd', 899,
        'H', 900,
        'h', 900,
        'N', 904,
        'n', 904,
        'S', 907,
        's', 907,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 510:
      if (eof) ADVANCE(514);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == ':') ADVANCE(522);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead == '~') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 511:
      if (eof) ADVANCE(514);
      ADVANCE_MAP(
        '\n', 670,
        '%', 32,
        ';', 588,
        's', 800,
        '\t', 657,
        ' ', 657,
        'D', 803,
        'd', 803,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 512:
      if (eof) ADVANCE(514);
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(655);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(83);
      END_STATE();
    case 513:
      if (eof) ADVANCE(514);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead == 'c') ADVANCE(787);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token2);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(77);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(477);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == '{') ADVANCE(552);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == 'D') ADVANCE(324);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(610);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == '|') ADVANCE(1037);
      if (lookahead == '}') ADVANCE(611);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(820);
      if (lookahead == '>') ADVANCE(778);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(598);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(598);
      if (lookahead == '-') ADVANCE(600);
      if (lookahead == '[') ADVANCE(602);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(599);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(816);
      if (lookahead == ']') ADVANCE(607);
      if (lookahead == '{') ADVANCE(1038);
      if (lookahead == '|') ADVANCE(1039);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(608);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == '\\') ADVANCE(615);
      if (lookahead == '|') ADVANCE(606);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead == ']') ADVANCE(605);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_diagram_mindmap_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(627);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '{') ADVANCE(627);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '%') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(11);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_mmap_class_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == '\t') ADVANCE(657);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token1);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(639);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(11);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(11);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '%') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(639);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_diagram_gitgraph_token1);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_gitgraph_stmt_commit_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_gitgraph_commit_attr_id_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_gitgraph_commit_attr_tag_token1);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_gitgraph_commit_attr_type_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_gitgraph_commit_attr_type_token2);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_gitgraph_commit_attr_type_token3);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_gitgraph_commit_attr_type_token4);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_gitgraph_stmt_branch_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_gitgraph_stmt_checkout_token1);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_gitgraph_stmt_merge_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_gitgraph_stmt_cherry_pick_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_diagram_journey_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(653);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(654);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(75);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(655);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(83);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(172);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(628);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1047);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1056);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(1052);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ';') ADVANCE(1061);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(666);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1008);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(996);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(669);
      if (lookahead == ':') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == ':') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__md_start);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__md_end);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '%') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(775);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == ' ') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '_') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(752);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(703);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      ADVANCE_MAP(
        'C', 763,
        'c', 763,
        'L', 758,
        'l', 758,
        'N', 707,
        'n', 707,
        'U', 764,
        'u', 764,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(763);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(758);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(775);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(776);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(777);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(795);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(799);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(618);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(796);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(792);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(793);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(808);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(805);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(802);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '{') ADVANCE(1036);
      if (lookahead == '|') ADVANCE(1034);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(572);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '|') ADVANCE(815);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(815);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(783);
      if (lookahead == '>') ADVANCE(779);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(779);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(885);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      ADVANCE_MAP(
        'B', 874,
        'b', 874,
        'L', 870,
        'l', 870,
        'R', 858,
        'r', 858,
        'T', 836,
        't', 836,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(885);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(885);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(914);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(914);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(913);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(916);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(916);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(992);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(924);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(924);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(923);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(981);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(991);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(971);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(979);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(980);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(984);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(990);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(958);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(982);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(959);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(927);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(932);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(940);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(944);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(946);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(953);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(965);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(975);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(970);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(976);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(951);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(967);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(978);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(987);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(983);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(936);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(974);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(968);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(945);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(985);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(986);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(941);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(928);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(929);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(930);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(935);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(972);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(964);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(973);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(957);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(950);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(949);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(956);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(960);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(947);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(938);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(939);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(948);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(952);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(933);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(955);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(961);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(992);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(996);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(994);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(994);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(996);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(1006);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(25);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(1006);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_pie_label_token1);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1008);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1009);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(1022);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1019);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1019);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1020);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(1018);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(1022);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(1022);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(1025);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(1024);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(1027);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(1026);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(1025);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(1024);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(1027);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(1026);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == '.') ADVANCE(1031);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1032);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(1045);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1045);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '%') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1047);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1047);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__gitgraph_branch_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__journey_title_text);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '{') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(1050);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__journey_title_text);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1050);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__journey_title_text);
      if (lookahead == '%') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(1052);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__journey_title_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(1052);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__journey_section_title);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(1054);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__journey_section_title);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead != 0) ADVANCE(1054);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__journey_section_title);
      if (lookahead == '%') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1056);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__journey_section_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1056);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__journey_score);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__journey_actor);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '{') ADVANCE(1061);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1059);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__journey_actor);
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1059);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__journey_actor);
      if (lookahead == '%') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ';') ADVANCE(1061);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__journey_actor);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ';') ADVANCE(1061);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 498},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 496},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 496},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 496},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 496},
  [48] = {.lex_state = 496},
  [49] = {.lex_state = 496},
  [50] = {.lex_state = 496},
  [51] = {.lex_state = 496},
  [52] = {.lex_state = 496},
  [53] = {.lex_state = 496},
  [54] = {.lex_state = 496},
  [55] = {.lex_state = 496},
  [56] = {.lex_state = 496},
  [57] = {.lex_state = 496},
  [58] = {.lex_state = 496},
  [59] = {.lex_state = 496},
  [60] = {.lex_state = 496},
  [61] = {.lex_state = 496},
  [62] = {.lex_state = 498},
  [63] = {.lex_state = 507},
  [64] = {.lex_state = 507},
  [65] = {.lex_state = 507},
  [66] = {.lex_state = 507},
  [67] = {.lex_state = 507},
  [68] = {.lex_state = 507},
  [69] = {.lex_state = 504},
  [70] = {.lex_state = 507},
  [71] = {.lex_state = 507},
  [72] = {.lex_state = 507},
  [73] = {.lex_state = 507},
  [74] = {.lex_state = 507},
  [75] = {.lex_state = 507},
  [76] = {.lex_state = 507},
  [77] = {.lex_state = 504},
  [78] = {.lex_state = 504},
  [79] = {.lex_state = 498},
  [80] = {.lex_state = 507},
  [81] = {.lex_state = 507},
  [82] = {.lex_state = 507},
  [83] = {.lex_state = 507},
  [84] = {.lex_state = 498},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 496},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 496},
  [153] = {.lex_state = 496},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 496},
  [156] = {.lex_state = 496},
  [157] = {.lex_state = 496},
  [158] = {.lex_state = 496},
  [159] = {.lex_state = 496},
  [160] = {.lex_state = 496},
  [161] = {.lex_state = 496},
  [162] = {.lex_state = 496},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 496},
  [165] = {.lex_state = 496},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 496},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 496},
  [174] = {.lex_state = 496},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 496},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 496},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 496},
  [184] = {.lex_state = 496},
  [185] = {.lex_state = 496},
  [186] = {.lex_state = 496},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 496},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 496},
  [192] = {.lex_state = 496},
  [193] = {.lex_state = 496},
  [194] = {.lex_state = 496},
  [195] = {.lex_state = 496},
  [196] = {.lex_state = 496},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 496},
  [210] = {.lex_state = 496},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 500},
  [213] = {.lex_state = 497},
  [214] = {.lex_state = 500},
  [215] = {.lex_state = 498},
  [216] = {.lex_state = 500},
  [217] = {.lex_state = 498},
  [218] = {.lex_state = 498},
  [219] = {.lex_state = 509},
  [220] = {.lex_state = 498},
  [221] = {.lex_state = 508},
  [222] = {.lex_state = 509},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 500},
  [225] = {.lex_state = 498},
  [226] = {.lex_state = 498},
  [227] = {.lex_state = 507},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 500},
  [230] = {.lex_state = 498},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 498},
  [233] = {.lex_state = 507},
  [234] = {.lex_state = 507},
  [235] = {.lex_state = 507},
  [236] = {.lex_state = 507},
  [237] = {.lex_state = 26},
  [238] = {.lex_state = 500},
  [239] = {.lex_state = 26},
  [240] = {.lex_state = 507},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 507},
  [243] = {.lex_state = 507},
  [244] = {.lex_state = 507},
  [245] = {.lex_state = 507},
  [246] = {.lex_state = 507},
  [247] = {.lex_state = 507},
  [248] = {.lex_state = 26},
  [249] = {.lex_state = 507},
  [250] = {.lex_state = 507},
  [251] = {.lex_state = 507},
  [252] = {.lex_state = 507},
  [253] = {.lex_state = 507},
  [254] = {.lex_state = 507},
  [255] = {.lex_state = 47},
  [256] = {.lex_state = 507},
  [257] = {.lex_state = 507},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 507},
  [260] = {.lex_state = 507},
  [261] = {.lex_state = 513},
  [262] = {.lex_state = 507},
  [263] = {.lex_state = 500},
  [264] = {.lex_state = 26},
  [265] = {.lex_state = 509},
  [266] = {.lex_state = 507},
  [267] = {.lex_state = 47},
  [268] = {.lex_state = 47},
  [269] = {.lex_state = 513},
  [270] = {.lex_state = 507},
  [271] = {.lex_state = 507},
  [272] = {.lex_state = 504},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 500},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 508},
  [277] = {.lex_state = 504},
  [278] = {.lex_state = 504},
  [279] = {.lex_state = 507},
  [280] = {.lex_state = 504},
  [281] = {.lex_state = 47},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 504},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 513},
  [286] = {.lex_state = 504},
  [287] = {.lex_state = 47},
  [288] = {.lex_state = 500},
  [289] = {.lex_state = 504},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 12},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 504},
  [294] = {.lex_state = 513},
  [295] = {.lex_state = 504},
  [296] = {.lex_state = 504},
  [297] = {.lex_state = 12},
  [298] = {.lex_state = 504},
  [299] = {.lex_state = 504},
  [300] = {.lex_state = 498},
  [301] = {.lex_state = 12},
  [302] = {.lex_state = 511},
  [303] = {.lex_state = 35},
  [304] = {.lex_state = 508},
  [305] = {.lex_state = 508},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 498},
  [308] = {.lex_state = 498},
  [309] = {.lex_state = 498},
  [310] = {.lex_state = 511},
  [311] = {.lex_state = 511},
  [312] = {.lex_state = 508},
  [313] = {.lex_state = 498},
  [314] = {.lex_state = 508},
  [315] = {.lex_state = 12},
  [316] = {.lex_state = 35},
  [317] = {.lex_state = 508},
  [318] = {.lex_state = 511},
  [319] = {.lex_state = 498},
  [320] = {.lex_state = 498},
  [321] = {.lex_state = 498},
  [322] = {.lex_state = 498},
  [323] = {.lex_state = 497},
  [324] = {.lex_state = 498},
  [325] = {.lex_state = 498},
  [326] = {.lex_state = 498},
  [327] = {.lex_state = 498},
  [328] = {.lex_state = 498},
  [329] = {.lex_state = 498},
  [330] = {.lex_state = 498},
  [331] = {.lex_state = 498},
  [332] = {.lex_state = 498},
  [333] = {.lex_state = 498},
  [334] = {.lex_state = 498},
  [335] = {.lex_state = 498},
  [336] = {.lex_state = 498},
  [337] = {.lex_state = 498},
  [338] = {.lex_state = 511},
  [339] = {.lex_state = 511},
  [340] = {.lex_state = 26},
  [341] = {.lex_state = 503},
  [342] = {.lex_state = 498},
  [343] = {.lex_state = 498},
  [344] = {.lex_state = 498},
  [345] = {.lex_state = 498},
  [346] = {.lex_state = 498},
  [347] = {.lex_state = 498},
  [348] = {.lex_state = 503},
  [349] = {.lex_state = 505},
  [350] = {.lex_state = 503},
  [351] = {.lex_state = 498},
  [352] = {.lex_state = 12},
  [353] = {.lex_state = 505},
  [354] = {.lex_state = 503},
  [355] = {.lex_state = 503},
  [356] = {.lex_state = 505},
  [357] = {.lex_state = 503},
  [358] = {.lex_state = 26},
  [359] = {.lex_state = 26},
  [360] = {.lex_state = 498},
  [361] = {.lex_state = 498},
  [362] = {.lex_state = 498},
  [363] = {.lex_state = 498},
  [364] = {.lex_state = 498},
  [365] = {.lex_state = 499},
  [366] = {.lex_state = 498},
  [367] = {.lex_state = 501},
  [368] = {.lex_state = 499},
  [369] = {.lex_state = 499},
  [370] = {.lex_state = 7},
  [371] = {.lex_state = 498},
  [372] = {.lex_state = 501},
  [373] = {.lex_state = 7},
  [374] = {.lex_state = 498},
  [375] = {.lex_state = 498},
  [376] = {.lex_state = 7},
  [377] = {.lex_state = 7},
  [378] = {.lex_state = 499},
  [379] = {.lex_state = 498},
  [380] = {.lex_state = 498},
  [381] = {.lex_state = 498},
  [382] = {.lex_state = 507},
  [383] = {.lex_state = 498},
  [384] = {.lex_state = 498},
  [385] = {.lex_state = 498},
  [386] = {.lex_state = 497},
  [387] = {.lex_state = 511},
  [388] = {.lex_state = 499},
  [389] = {.lex_state = 503},
  [390] = {.lex_state = 499},
  [391] = {.lex_state = 498},
  [392] = {.lex_state = 498},
  [393] = {.lex_state = 511},
  [394] = {.lex_state = 510},
  [395] = {.lex_state = 511},
  [396] = {.lex_state = 511},
  [397] = {.lex_state = 503},
  [398] = {.lex_state = 501},
  [399] = {.lex_state = 498},
  [400] = {.lex_state = 510},
  [401] = {.lex_state = 501},
  [402] = {.lex_state = 511},
  [403] = {.lex_state = 509},
  [404] = {.lex_state = 499},
  [405] = {.lex_state = 498},
  [406] = {.lex_state = 29},
  [407] = {.lex_state = 507},
  [408] = {.lex_state = 501},
  [409] = {.lex_state = 509},
  [410] = {.lex_state = 501},
  [411] = {.lex_state = 498},
  [412] = {.lex_state = 498},
  [413] = {.lex_state = 503},
  [414] = {.lex_state = 34},
  [415] = {.lex_state = 499},
  [416] = {.lex_state = 29},
  [417] = {.lex_state = 499},
  [418] = {.lex_state = 22},
  [419] = {.lex_state = 22},
  [420] = {.lex_state = 22},
  [421] = {.lex_state = 22},
  [422] = {.lex_state = 22},
  [423] = {.lex_state = 22},
  [424] = {.lex_state = 499},
  [425] = {.lex_state = 505},
  [426] = {.lex_state = 502},
  [427] = {.lex_state = 29},
  [428] = {.lex_state = 501},
  [429] = {.lex_state = 501},
  [430] = {.lex_state = 501},
  [431] = {.lex_state = 29},
  [432] = {.lex_state = 29},
  [433] = {.lex_state = 29},
  [434] = {.lex_state = 501},
  [435] = {.lex_state = 29},
  [436] = {.lex_state = 499},
  [437] = {.lex_state = 508},
  [438] = {.lex_state = 29},
  [439] = {.lex_state = 29},
  [440] = {.lex_state = 499},
  [441] = {.lex_state = 499},
  [442] = {.lex_state = 509},
  [443] = {.lex_state = 29},
  [444] = {.lex_state = 501},
  [445] = {.lex_state = 501},
  [446] = {.lex_state = 46},
  [447] = {.lex_state = 46},
  [448] = {.lex_state = 29},
  [449] = {.lex_state = 29},
  [450] = {.lex_state = 29},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 34},
  [453] = {.lex_state = 498},
  [454] = {.lex_state = 512},
  [455] = {.lex_state = 509},
  [456] = {.lex_state = 498},
  [457] = {.lex_state = 498},
  [458] = {.lex_state = 497},
  [459] = {.lex_state = 506},
  [460] = {.lex_state = 498},
  [461] = {.lex_state = 509},
  [462] = {.lex_state = 498},
  [463] = {.lex_state = 497},
  [464] = {.lex_state = 497},
  [465] = {.lex_state = 497},
  [466] = {.lex_state = 497},
  [467] = {.lex_state = 503},
  [468] = {.lex_state = 498},
  [469] = {.lex_state = 497},
  [470] = {.lex_state = 498},
  [471] = {.lex_state = 506},
  [472] = {.lex_state = 506},
  [473] = {.lex_state = 498},
  [474] = {.lex_state = 500},
  [475] = {.lex_state = 506},
  [476] = {.lex_state = 498},
  [477] = {.lex_state = 498},
  [478] = {.lex_state = 500},
  [479] = {.lex_state = 500},
  [480] = {.lex_state = 498},
  [481] = {.lex_state = 47},
  [482] = {.lex_state = 512},
  [483] = {.lex_state = 498},
  [484] = {.lex_state = 14},
  [485] = {.lex_state = 498},
  [486] = {.lex_state = 499},
  [487] = {.lex_state = 503},
  [488] = {.lex_state = 503},
  [489] = {.lex_state = 498},
  [490] = {.lex_state = 498},
  [491] = {.lex_state = 6},
  [492] = {.lex_state = 14},
  [493] = {.lex_state = 509},
  [494] = {.lex_state = 503},
  [495] = {.lex_state = 14},
  [496] = {.lex_state = 498},
  [497] = {.lex_state = 14},
  [498] = {.lex_state = 6},
  [499] = {.lex_state = 503},
  [500] = {.lex_state = 503},
  [501] = {.lex_state = 498},
  [502] = {.lex_state = 14},
  [503] = {.lex_state = 507},
  [504] = {.lex_state = 501},
  [505] = {.lex_state = 501},
  [506] = {.lex_state = 498},
  [507] = {.lex_state = 2},
  [508] = {.lex_state = 2},
  [509] = {.lex_state = 498},
  [510] = {.lex_state = 2},
  [511] = {.lex_state = 2},
  [512] = {.lex_state = 14},
  [513] = {.lex_state = 2},
  [514] = {.lex_state = 498},
  [515] = {.lex_state = 2},
  [516] = {.lex_state = 2},
  [517] = {.lex_state = 2},
  [518] = {.lex_state = 14},
  [519] = {.lex_state = 2},
  [520] = {.lex_state = 2},
  [521] = {.lex_state = 33},
  [522] = {.lex_state = 2},
  [523] = {.lex_state = 2},
  [524] = {.lex_state = 14},
  [525] = {.lex_state = 498},
  [526] = {.lex_state = 14},
  [527] = {.lex_state = 14},
  [528] = {.lex_state = 14},
  [529] = {.lex_state = 14},
  [530] = {.lex_state = 2},
  [531] = {.lex_state = 501},
  [532] = {.lex_state = 498},
  [533] = {.lex_state = 2},
  [534] = {.lex_state = 498},
  [535] = {.lex_state = 2},
  [536] = {.lex_state = 2},
  [537] = {.lex_state = 14},
  [538] = {.lex_state = 507},
  [539] = {.lex_state = 14},
  [540] = {.lex_state = 507},
  [541] = {.lex_state = 14},
  [542] = {.lex_state = 507},
  [543] = {.lex_state = 507},
  [544] = {.lex_state = 507},
  [545] = {.lex_state = 507},
  [546] = {.lex_state = 507},
  [547] = {.lex_state = 507},
  [548] = {.lex_state = 507},
  [549] = {.lex_state = 507},
  [550] = {.lex_state = 507},
  [551] = {.lex_state = 507},
  [552] = {.lex_state = 498},
  [553] = {.lex_state = 2},
  [554] = {.lex_state = 2},
  [555] = {.lex_state = 2},
  [556] = {.lex_state = 507},
  [557] = {.lex_state = 2},
  [558] = {.lex_state = 498},
  [559] = {.lex_state = 14},
  [560] = {.lex_state = 14},
  [561] = {.lex_state = 14},
  [562] = {.lex_state = 498},
  [563] = {.lex_state = 2},
  [564] = {.lex_state = 2},
  [565] = {.lex_state = 2},
  [566] = {.lex_state = 2},
  [567] = {.lex_state = 507},
  [568] = {.lex_state = 14},
  [569] = {.lex_state = 14},
  [570] = {.lex_state = 14},
  [571] = {.lex_state = 14},
  [572] = {.lex_state = 14},
  [573] = {.lex_state = 2},
  [574] = {.lex_state = 2},
  [575] = {.lex_state = 498},
  [576] = {.lex_state = 2},
  [577] = {.lex_state = 498},
  [578] = {.lex_state = 2},
  [579] = {.lex_state = 512},
  [580] = {.lex_state = 14},
  [581] = {.lex_state = 14},
  [582] = {.lex_state = 14},
  [583] = {.lex_state = 14},
  [584] = {.lex_state = 2},
  [585] = {.lex_state = 2},
  [586] = {.lex_state = 2},
  [587] = {.lex_state = 507},
  [588] = {.lex_state = 2},
  [589] = {.lex_state = 14},
  [590] = {.lex_state = 498},
  [591] = {.lex_state = 507},
  [592] = {.lex_state = 14},
  [593] = {.lex_state = 507},
  [594] = {.lex_state = 14},
  [595] = {.lex_state = 14},
  [596] = {.lex_state = 27},
  [597] = {.lex_state = 2},
  [598] = {.lex_state = 2},
  [599] = {.lex_state = 2},
  [600] = {.lex_state = 2},
  [601] = {.lex_state = 498},
  [602] = {.lex_state = 498},
  [603] = {.lex_state = 2},
  [604] = {.lex_state = 498},
  [605] = {.lex_state = 507},
  [606] = {.lex_state = 2},
  [607] = {.lex_state = 2},
  [608] = {.lex_state = 503},
  [609] = {.lex_state = 2},
  [610] = {.lex_state = 2},
  [611] = {.lex_state = 498},
  [612] = {.lex_state = 2},
  [613] = {.lex_state = 2},
  [614] = {.lex_state = 498},
  [615] = {.lex_state = 14},
  [616] = {.lex_state = 14},
  [617] = {.lex_state = 498},
  [618] = {.lex_state = 14},
  [619] = {.lex_state = 14},
  [620] = {.lex_state = 501},
  [621] = {.lex_state = 507},
  [622] = {.lex_state = 498},
  [623] = {.lex_state = 498},
  [624] = {.lex_state = 498},
  [625] = {.lex_state = 498},
  [626] = {.lex_state = 14},
  [627] = {.lex_state = 498},
  [628] = {.lex_state = 14},
  [629] = {.lex_state = 14},
  [630] = {.lex_state = 14},
  [631] = {.lex_state = 498},
  [632] = {.lex_state = 14},
  [633] = {.lex_state = 2},
  [634] = {.lex_state = 503},
  [635] = {.lex_state = 498},
  [636] = {.lex_state = 14},
  [637] = {.lex_state = 14},
  [638] = {.lex_state = 14},
  [639] = {.lex_state = 14},
  [640] = {.lex_state = 498},
  [641] = {.lex_state = 501},
  [642] = {.lex_state = 498},
  [643] = {.lex_state = 498},
  [644] = {.lex_state = 498},
  [645] = {.lex_state = 498},
  [646] = {.lex_state = 27},
  [647] = {.lex_state = 498},
  [648] = {.lex_state = 498},
  [649] = {.lex_state = 498},
  [650] = {.lex_state = 24},
  [651] = {.lex_state = 498},
  [652] = {.lex_state = 24},
  [653] = {.lex_state = 498},
  [654] = {.lex_state = 24},
  [655] = {.lex_state = 14},
  [656] = {.lex_state = 14},
  [657] = {.lex_state = 14},
  [658] = {.lex_state = 14},
  [659] = {.lex_state = 501},
  [660] = {.lex_state = 33},
  [661] = {.lex_state = 498},
  [662] = {.lex_state = 14},
  [663] = {.lex_state = 2},
  [664] = {.lex_state = 498},
  [665] = {.lex_state = 2},
  [666] = {.lex_state = 498},
  [667] = {.lex_state = 503},
  [668] = {.lex_state = 14},
  [669] = {.lex_state = 14},
  [670] = {.lex_state = 498},
  [671] = {.lex_state = 498},
  [672] = {.lex_state = 501},
  [673] = {.lex_state = 498},
  [674] = {.lex_state = 2},
  [675] = {.lex_state = 27},
  [676] = {.lex_state = 498},
  [677] = {.lex_state = 503},
  [678] = {.lex_state = 498},
  [679] = {.lex_state = 7},
  [680] = {.lex_state = 498},
  [681] = {.lex_state = 503},
  [682] = {.lex_state = 498},
  [683] = {.lex_state = 7},
  [684] = {.lex_state = 7},
  [685] = {.lex_state = 14},
  [686] = {.lex_state = 14},
  [687] = {.lex_state = 2},
  [688] = {.lex_state = 27},
  [689] = {.lex_state = 14},
  [690] = {.lex_state = 498},
  [691] = {.lex_state = 27},
  [692] = {.lex_state = 498},
  [693] = {.lex_state = 506},
  [694] = {.lex_state = 498},
  [695] = {.lex_state = 498},
  [696] = {.lex_state = 498},
  [697] = {.lex_state = 498},
  [698] = {.lex_state = 27},
  [699] = {.lex_state = 498},
  [700] = {.lex_state = 498},
  [701] = {.lex_state = 506},
  [702] = {.lex_state = 498},
  [703] = {.lex_state = 498},
  [704] = {.lex_state = 14},
  [705] = {.lex_state = 498},
  [706] = {.lex_state = 498},
  [707] = {.lex_state = 498},
  [708] = {.lex_state = 498},
  [709] = {.lex_state = 498},
  [710] = {.lex_state = 498},
  [711] = {.lex_state = 498},
  [712] = {.lex_state = 498},
  [713] = {.lex_state = 14},
  [714] = {.lex_state = 498},
  [715] = {.lex_state = 498},
  [716] = {.lex_state = 498},
  [717] = {.lex_state = 498},
  [718] = {.lex_state = 503},
  [719] = {.lex_state = 37},
  [720] = {.lex_state = 498},
  [721] = {.lex_state = 499},
  [722] = {.lex_state = 498},
  [723] = {.lex_state = 498},
  [724] = {.lex_state = 498},
  [725] = {.lex_state = 507},
  [726] = {.lex_state = 498},
  [727] = {.lex_state = 38},
  [728] = {.lex_state = 39},
  [729] = {.lex_state = 498},
  [730] = {.lex_state = 498},
  [731] = {.lex_state = 24},
  [732] = {.lex_state = 24},
  [733] = {.lex_state = 24},
  [734] = {.lex_state = 14},
  [735] = {.lex_state = 14},
  [736] = {.lex_state = 498},
  [737] = {.lex_state = 14},
  [738] = {.lex_state = 503},
  [739] = {.lex_state = 498},
  [740] = {.lex_state = 14},
  [741] = {.lex_state = 498},
  [742] = {.lex_state = 14},
  [743] = {.lex_state = 14},
  [744] = {.lex_state = 14},
  [745] = {.lex_state = 498},
  [746] = {.lex_state = 14},
  [747] = {.lex_state = 14},
  [748] = {.lex_state = 14},
  [749] = {.lex_state = 14},
  [750] = {.lex_state = 499},
  [751] = {.lex_state = 507},
  [752] = {.lex_state = 498},
  [753] = {.lex_state = 14},
  [754] = {.lex_state = 14},
  [755] = {.lex_state = 14},
  [756] = {.lex_state = 507},
  [757] = {.lex_state = 498},
  [758] = {.lex_state = 498},
  [759] = {.lex_state = 14},
  [760] = {.lex_state = 14},
  [761] = {.lex_state = 498},
  [762] = {.lex_state = 14},
  [763] = {.lex_state = 499},
  [764] = {.lex_state = 8},
  [765] = {.lex_state = 498},
  [766] = {.lex_state = 14},
  [767] = {.lex_state = 498},
  [768] = {.lex_state = 498},
  [769] = {.lex_state = 498},
  [770] = {.lex_state = 499},
  [771] = {.lex_state = 498},
  [772] = {.lex_state = 498},
  [773] = {.lex_state = 498},
  [774] = {.lex_state = 498},
  [775] = {.lex_state = 498},
  [776] = {.lex_state = 498},
  [777] = {.lex_state = 498},
  [778] = {.lex_state = 498},
  [779] = {.lex_state = 498},
  [780] = {.lex_state = 498},
  [781] = {.lex_state = 27},
  [782] = {.lex_state = 27},
  [783] = {.lex_state = 498},
  [784] = {.lex_state = 498},
  [785] = {.lex_state = 499},
  [786] = {.lex_state = 498},
  [787] = {.lex_state = 498},
  [788] = {.lex_state = 498},
  [789] = {.lex_state = 498},
  [790] = {.lex_state = 498},
  [791] = {.lex_state = 498},
  [792] = {.lex_state = 498},
  [793] = {.lex_state = 498},
  [794] = {.lex_state = 676},
  [795] = {.lex_state = 498},
  [796] = {.lex_state = 498},
  [797] = {.lex_state = 498},
  [798] = {.lex_state = 498},
  [799] = {.lex_state = 37},
  [800] = {.lex_state = 498},
  [801] = {.lex_state = 498},
  [802] = {.lex_state = 498},
  [803] = {.lex_state = 498},
  [804] = {.lex_state = 498},
  [805] = {.lex_state = 499},
  [806] = {.lex_state = 507},
  [807] = {.lex_state = 498},
  [808] = {.lex_state = 499},
  [809] = {.lex_state = 498},
  [810] = {.lex_state = 1},
  [811] = {.lex_state = 498},
  [812] = {.lex_state = 8},
  [813] = {.lex_state = 40},
  [814] = {.lex_state = 498},
  [815] = {.lex_state = 498},
  [816] = {.lex_state = 8},
  [817] = {.lex_state = 498},
  [818] = {.lex_state = 498},
  [819] = {.lex_state = 498},
  [820] = {.lex_state = 498},
  [821] = {.lex_state = 498},
  [822] = {.lex_state = 498},
  [823] = {.lex_state = 498},
  [824] = {.lex_state = 498},
  [825] = {.lex_state = 498},
  [826] = {.lex_state = 498},
  [827] = {.lex_state = 498},
  [828] = {.lex_state = 498},
  [829] = {.lex_state = 500},
  [830] = {.lex_state = 498},
  [831] = {.lex_state = 507},
  [832] = {.lex_state = 498},
  [833] = {.lex_state = 498},
  [834] = {.lex_state = 507},
  [835] = {.lex_state = 498},
  [836] = {.lex_state = 498},
  [837] = {.lex_state = 498},
  [838] = {.lex_state = 498},
  [839] = {.lex_state = 498},
  [840] = {.lex_state = 498},
  [841] = {.lex_state = 49},
  [842] = {.lex_state = 498},
  [843] = {.lex_state = 498},
  [844] = {.lex_state = 498},
  [845] = {.lex_state = 498},
  [846] = {.lex_state = 498},
  [847] = {.lex_state = 498},
  [848] = {.lex_state = 498},
  [849] = {.lex_state = 498},
  [850] = {.lex_state = 498},
  [851] = {.lex_state = 498},
  [852] = {.lex_state = 498},
  [853] = {.lex_state = 498},
  [854] = {.lex_state = 498},
  [855] = {.lex_state = 498},
  [856] = {.lex_state = 498},
  [857] = {.lex_state = 498},
  [858] = {.lex_state = 48},
  [859] = {.lex_state = 503},
  [860] = {.lex_state = 500},
  [861] = {.lex_state = 498},
  [862] = {.lex_state = 498},
  [863] = {.lex_state = 498},
  [864] = {.lex_state = 42},
  [865] = {.lex_state = 498},
  [866] = {.lex_state = 498},
  [867] = {.lex_state = 498},
  [868] = {.lex_state = 43},
  [869] = {.lex_state = 498},
  [870] = {.lex_state = 507},
  [871] = {.lex_state = 507},
  [872] = {.lex_state = 498},
  [873] = {.lex_state = 507},
  [874] = {.lex_state = 498},
  [875] = {.lex_state = 498},
  [876] = {.lex_state = 498},
  [877] = {.lex_state = 498},
  [878] = {.lex_state = 498},
  [879] = {.lex_state = 498},
  [880] = {.lex_state = 498},
  [881] = {.lex_state = 498},
  [882] = {.lex_state = 42},
  [883] = {.lex_state = 498},
  [884] = {.lex_state = 498},
  [885] = {.lex_state = 503},
  [886] = {.lex_state = 498},
  [887] = {.lex_state = 498},
  [888] = {.lex_state = 498},
  [889] = {.lex_state = 498},
  [890] = {.lex_state = 498},
  [891] = {.lex_state = 2},
  [892] = {.lex_state = 498},
  [893] = {.lex_state = 498},
  [894] = {.lex_state = 498},
  [895] = {.lex_state = 498},
  [896] = {.lex_state = 498},
  [897] = {.lex_state = 498},
  [898] = {.lex_state = 498},
  [899] = {.lex_state = 498},
  [900] = {.lex_state = 498},
  [901] = {.lex_state = 498},
  [902] = {.lex_state = 498},
  [903] = {.lex_state = 503},
  [904] = {.lex_state = 498},
  [905] = {.lex_state = 498},
  [906] = {.lex_state = 498},
  [907] = {.lex_state = 503},
  [908] = {.lex_state = 498},
  [909] = {.lex_state = 498},
  [910] = {.lex_state = 498},
  [911] = {.lex_state = 498},
  [912] = {.lex_state = 498},
  [913] = {.lex_state = 2},
  [914] = {.lex_state = 498},
  [915] = {.lex_state = 498},
  [916] = {.lex_state = 498},
  [917] = {.lex_state = 503},
  [918] = {.lex_state = 498},
  [919] = {.lex_state = 2},
  [920] = {.lex_state = 2},
  [921] = {.lex_state = 2},
  [922] = {.lex_state = 498},
  [923] = {.lex_state = 498},
  [924] = {.lex_state = 498},
  [925] = {.lex_state = 498},
  [926] = {.lex_state = 498},
  [927] = {.lex_state = 498},
  [928] = {.lex_state = 498},
  [929] = {.lex_state = 503},
  [930] = {.lex_state = 498},
  [931] = {.lex_state = 498},
  [932] = {.lex_state = 498},
  [933] = {.lex_state = 498},
  [934] = {.lex_state = 498},
  [935] = {.lex_state = 498},
  [936] = {.lex_state = 507},
  [937] = {.lex_state = 500},
  [938] = {.lex_state = 498},
  [939] = {.lex_state = 498},
  [940] = {.lex_state = 498},
  [941] = {.lex_state = 498},
  [942] = {.lex_state = 498},
  [943] = {.lex_state = 498},
  [944] = {.lex_state = 498},
  [945] = {.lex_state = 498},
  [946] = {.lex_state = 498},
  [947] = {.lex_state = 498},
  [948] = {.lex_state = 498},
  [949] = {.lex_state = 498},
  [950] = {.lex_state = 498},
  [951] = {.lex_state = 498},
  [952] = {.lex_state = 498},
  [953] = {.lex_state = 498},
  [954] = {.lex_state = 498},
  [955] = {.lex_state = 498},
  [956] = {.lex_state = 498},
  [957] = {.lex_state = 498},
  [958] = {.lex_state = 498},
  [959] = {.lex_state = 498},
  [960] = {.lex_state = 498},
  [961] = {.lex_state = 498},
  [962] = {.lex_state = 498},
  [963] = {.lex_state = 498},
  [964] = {.lex_state = 507},
  [965] = {.lex_state = 498},
  [966] = {.lex_state = 498},
  [967] = {.lex_state = 498},
  [968] = {.lex_state = 498},
  [969] = {.lex_state = 498},
  [970] = {.lex_state = 44},
  [971] = {.lex_state = 507},
  [972] = {.lex_state = 507},
  [973] = {.lex_state = 43},
  [974] = {.lex_state = 37},
  [975] = {.lex_state = 498},
  [976] = {.lex_state = 498},
  [977] = {.lex_state = 498},
  [978] = {.lex_state = 500},
  [979] = {.lex_state = 503},
  [980] = {.lex_state = 507},
  [981] = {.lex_state = 45},
  [982] = {.lex_state = 45},
  [983] = {.lex_state = 498},
  [984] = {.lex_state = 498},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_sequence_stmt_autonumber_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_activate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_deactivate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_note_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sequence_stmt_links_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_link_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_properties_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_details_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_title_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_rect_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token2] = ACTIONS(1),
    [aux_sym_diagram_class_token1] = ACTIONS(1),
    [aux_sym_diagram_class_token2] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym_diagram_state_token1] = ACTIONS(1),
    [aux_sym_diagram_state_token2] = ACTIONS(1),
    [aux_sym_state_stmt_simple_token1] = ACTIONS(1),
    [aux_sym_diagram_gantt_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_dateformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_inclusiveenddates_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_topaxis_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_axisformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_includes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_excludes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_todaymarker_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_section_token1] = ACTIONS(1),
    [aux_sym_diagram_pie_token1] = ACTIONS(1),
    [aux_sym_diagram_flow_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_flow_stmt_direction_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_subgraph] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_diagram_er_token1] = ACTIONS(1),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(1),
    [aux_sym_mmap_class_token1] = ACTIONS(1),
    [aux_sym_mmap_icon_token1] = ACTIONS(1),
    [aux_sym_diagram_gitgraph_token1] = ACTIONS(1),
    [aux_sym_gitgraph_stmt_commit_token1] = ACTIONS(1),
    [aux_sym_gitgraph_commit_attr_id_token1] = ACTIONS(1),
    [aux_sym_gitgraph_commit_attr_tag_token1] = ACTIONS(1),
    [aux_sym_gitgraph_commit_attr_type_token1] = ACTIONS(1),
    [aux_sym_gitgraph_commit_attr_type_token2] = ACTIONS(1),
    [aux_sym_gitgraph_commit_attr_type_token3] = ACTIONS(1),
    [aux_sym_gitgraph_commit_attr_type_token4] = ACTIONS(1),
    [aux_sym_gitgraph_stmt_checkout_token1] = ACTIONS(1),
    [aux_sym_gitgraph_stmt_merge_token1] = ACTIONS(1),
    [aux_sym_gitgraph_stmt_cherry_pick_token1] = ACTIONS(1),
    [aux_sym_diagram_journey_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym__md_start] = ACTIONS(1),
    [sym__md_end] = ACTIONS(1),
    [aux_sym_direction_tb_token1] = ACTIONS(1),
    [aux_sym_direction_bt_token1] = ACTIONS(1),
    [aux_sym_direction_rl_token1] = ACTIONS(1),
    [aux_sym_direction_lr_token1] = ACTIONS(1),
    [sym_solid_arrow] = ACTIONS(1),
    [sym_solid_open_arrow] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_dotted_point] = ACTIONS(1),
    [aux_sym_note_placement_left_token1] = ACTIONS(1),
    [aux_sym_note_placement_right_token1] = ACTIONS(1),
    [sym_class_reltype_aggregation] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_state_hide_empty_description_token1] = ACTIONS(1),
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token2] = ACTIONS(1),
    [aux_sym_flowchart_direction_rl_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token2] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [aux_sym_flowchart_direction_bt_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_flow_link_arrow_token2] = ACTIONS(1),
    [aux_sym_flow_link_arrow_start_token2] = ACTIONS(1),
    [anon_sym_o_PIPE] = ACTIONS(1),
    [anon_sym_RBRACEo] = ACTIONS(1),
    [anon_sym_o_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACE] = ACTIONS(1),
    [sym_er_cardinarity_only_one] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_pk_token1] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_fk_token1] = ACTIONS(1),
    [sym__journey_score] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(862),
    [sym_directive] = STATE(79),
    [sym_diagram_sequence] = STATE(861),
    [sym_diagram_class] = STATE(861),
    [sym_diagram_state] = STATE(861),
    [sym_diagram_gantt] = STATE(861),
    [sym_diagram_pie] = STATE(861),
    [sym_diagram_flow] = STATE(861),
    [sym_diagram_er] = STATE(861),
    [sym_diagram_mindmap] = STATE(861),
    [sym_diagram_gitgraph] = STATE(861),
    [sym_diagram_journey] = STATE(861),
    [aux_sym_source_file_repeat1] = STATE(79),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(7),
    [aux_sym_diagram_sequence_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token1] = ACTIONS(11),
    [aux_sym_diagram_class_token2] = ACTIONS(13),
    [aux_sym_diagram_state_token1] = ACTIONS(15),
    [aux_sym_diagram_state_token2] = ACTIONS(17),
    [aux_sym_diagram_gantt_token1] = ACTIONS(19),
    [aux_sym_diagram_pie_token1] = ACTIONS(21),
    [aux_sym_diagram_flow_token1] = ACTIONS(23),
    [aux_sym_diagram_er_token1] = ACTIONS(25),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(27),
    [aux_sym_diagram_gitgraph_token1] = ACTIONS(29),
    [aux_sym_diagram_journey_token1] = ACTIONS(31),
    [sym__whitespace] = ACTIONS(5),
    [sym__newline] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    STATE(622), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [105] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    STATE(666), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [210] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(575), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [315] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    STATE(644), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [420] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    STATE(590), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [525] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    STATE(624), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [630] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    STATE(604), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [735] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(123), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    STATE(627), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [840] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(125), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    STATE(643), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [945] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(127), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    STATE(642), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1050] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(129), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    STATE(601), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1155] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(131), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    STATE(602), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1260] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(139), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(142), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(145), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(148), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(151), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(154), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(157), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(160), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(163), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(166), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(171), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(174), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(177), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(180), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(183), 1,
      sym__newline,
    ACTIONS(186), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(133), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(169), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1360] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym__sequence_actor_word,
    ACTIONS(192), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(195), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(198), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(201), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(204), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(207), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(210), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(213), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(216), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(219), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(222), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(225), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(228), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(231), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(237), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    ACTIONS(169), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(189), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1460] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(240), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1560] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(242), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1660] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(244), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1760] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1859] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1958] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2057] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2156] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2255] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(46), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2354] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(326), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(633), 1,
      sym__sequence_participant_type,
    ACTIONS(294), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(37), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(153), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2451] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2550] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2649] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(26), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2748] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(334), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(19), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2847] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(27), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2946] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(338), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3045] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(186), 1,
      sym__sequence_actor_word,
    ACTIONS(343), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(349), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(355), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(361), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(367), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(370), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(373), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(376), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(379), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(382), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(385), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(388), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(340), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3144] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(391), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3243] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(393), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3342] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(403), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(406), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(409), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(412), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(415), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(418), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(421), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(424), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(427), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(430), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(433), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(436), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(439), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(442), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(445), 1,
      sym__newline,
    ACTIONS(448), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(633), 1,
      sym__sequence_participant_type,
    ACTIONS(397), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(35), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(153), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3439] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(20), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3538] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(633), 1,
      sym__sequence_participant_type,
    ACTIONS(294), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(35), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(153), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3635] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3734] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(459), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3833] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(461), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(21), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3932] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4031] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4130] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(467), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4229] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4328] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4427] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(473), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(584), 1,
      sym__sequence_participant_type,
    ACTIONS(246), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(151), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4526] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4622] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4718] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4814] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4910] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5006] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5102] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5198] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5294] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5390] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5486] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5582] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5678] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5774] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(93), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(597), 1,
      sym__sequence_participant_type,
    ACTIONS(35), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(116), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5870] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(573), 1,
      sym__sequence_participant_type,
    ACTIONS(81), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(91), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5966] = 18,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(485), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(487), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(489), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(491), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(493), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(497), 1,
      anon_sym_GT,
    ACTIONS(499), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(501), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(332), 1,
      sym__flow_vertex_kind,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(503), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(475), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    STATE(328), 15,
      sym_flow_vertex_square,
      sym_flow_vertex_circle,
      sym_flow_vertex_ellipse,
      sym_flow_vertex_stadium,
      sym_flow_vertex_subroutine,
      sym_flow_vertex_rect,
      sym_flow_vertex_cylinder,
      sym_flow_vertex_round,
      sym_flow_vertex_diamond,
      sym_flow_vertex_hexagon,
      sym_flow_vertex_odd,
      sym_flow_vertex_trapezoid,
      sym_flow_vertex_inv_trapezoid,
      sym_flow_vertex_leanright,
      sym_flow_vertex_leanleft,
  [6044] = 18,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(511), 1,
      sym__newline,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(66), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6111] = 18,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      sym__newline,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6178] = 18,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      sym__newline,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6245] = 18,
    ACTIONS(537), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(545), 1,
      sym__newline,
    ACTIONS(548), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(551), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(554), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(557), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(560), 1,
      anon_sym_DASH_DASH,
    ACTIONS(563), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(566), 1,
      aux_sym_state_name_token1,
    ACTIONS(569), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(66), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6312] = 18,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      sym__newline,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(66), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6379] = 17,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(279), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6442] = 17,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
    ACTIONS(574), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(576), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(580), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(582), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(592), 1,
      sym__newline,
    ACTIONS(594), 1,
      aux_sym_gantt_task_text_token1,
    STATE(660), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(77), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(295), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6505] = 17,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(279), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6568] = 17,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    ACTIONS(598), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(600), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(602), 1,
      aux_sym_state_name_token1,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(437), 1,
      sym_state_name,
    STATE(696), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6631] = 17,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(279), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6694] = 17,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(598), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(600), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(602), 1,
      aux_sym_state_name_token1,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(437), 1,
      sym_state_name,
    STATE(696), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6757] = 17,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(598), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(600), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(602), 1,
      aux_sym_state_name_token1,
    ACTIONS(608), 1,
      sym__newline,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(437), 1,
      sym_state_name,
    STATE(661), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6820] = 17,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(610), 1,
      sym__newline,
    STATE(65), 1,
      sym__state_stmt,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6883] = 17,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(598), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(600), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(602), 1,
      aux_sym_state_name_token1,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(437), 1,
      sym_state_name,
    STATE(696), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6946] = 17,
    ACTIONS(574), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(576), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(580), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(582), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(594), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 1,
      sym__newline,
    STATE(660), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(78), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(295), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [7009] = 17,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(623), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(626), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(629), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(632), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(635), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(638), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(641), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(644), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(647), 1,
      sym__newline,
    ACTIONS(650), 1,
      aux_sym_gantt_task_text_token1,
    STATE(660), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(78), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(295), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [7072] = 17,
    ACTIONS(7), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(9), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(11), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(13), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(15), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(17), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(19), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(21), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(23), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(25), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(27), 1,
      aux_sym_diagram_mindmap_token1,
    ACTIONS(29), 1,
      aux_sym_diagram_gitgraph_token1,
    ACTIONS(31), 1,
      aux_sym_diagram_journey_token1,
    ACTIONS(653), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(217), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(914), 10,
      sym_diagram_sequence,
      sym_diagram_class,
      sym_diagram_state,
      sym_diagram_gantt,
      sym_diagram_pie,
      sym_diagram_flow,
      sym_diagram_er,
      sym_diagram_mindmap,
      sym_diagram_gitgraph,
      sym_diagram_journey,
  [7135] = 16,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(279), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7195] = 16,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(598), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(600), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(602), 1,
      aux_sym_state_name_token1,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(437), 1,
      sym_state_name,
    STATE(682), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7255] = 16,
    ACTIONS(505), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(525), 1,
      aux_sym_state_name_token1,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(64), 1,
      sym__state_stmt,
    STATE(223), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7315] = 16,
    ACTIONS(509), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(515), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(517), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(519), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(521), 1,
      anon_sym_DASH_DASH,
    ACTIONS(527), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(598), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(600), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(602), 1,
      aux_sym_state_name_token1,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(437), 1,
      sym_state_name,
    STATE(696), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(257), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(235), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7375] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(657), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(655), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LPAREN_LPAREN,
      anon_sym_LPAREN_DASH,
      anon_sym_LPAREN_LBRACK,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK_PIPE,
      anon_sym_LBRACK_LPAREN,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_LBRACK_SLASH,
      anon_sym_LBRACK_BSLASH,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [7407] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7439] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7471] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7503] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7535] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7567] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7599] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7631] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7663] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7695] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7727] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7759] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7791] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7823] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7855] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7887] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7919] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7951] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7983] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8015] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8047] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8079] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8111] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8143] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8175] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8207] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8239] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8271] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8303] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8335] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8367] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8399] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8431] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8463] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8495] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8527] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8559] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(785), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(783), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8591] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8623] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8655] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8687] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8719] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(785), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(783), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8751] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8783] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8815] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8847] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8879] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8911] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8943] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8975] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9007] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9039] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9071] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9103] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9135] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9167] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9199] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9231] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9263] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9295] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9327] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9359] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9391] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9423] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9455] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9486] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9517] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9548] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9579] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9610] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9641] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9672] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9703] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9734] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9765] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9796] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9827] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9858] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9889] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9920] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9951] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(785), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(783), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9982] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10013] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10044] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10075] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10106] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10137] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10168] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10199] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10230] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10261] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10292] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10323] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10354] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10385] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10416] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10447] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10478] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10509] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10540] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10571] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10602] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10633] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10664] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10695] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10726] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10757] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10788] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10819] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10850] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10881] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10912] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10943] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10974] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11005] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11036] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11067] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11098] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11129] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11160] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11191] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11222] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11253] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11284] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11315] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11346] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11377] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(785), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(783), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11408] = 15,
    ACTIONS(787), 1,
      anon_sym_COLON,
    ACTIONS(789), 1,
      anon_sym_STAR,
    ACTIONS(791), 1,
      anon_sym_GT,
    ACTIONS(793), 1,
      sym__dquote_string,
    ACTIONS(795), 1,
      sym_class_reltype_aggregation,
    ACTIONS(799), 1,
      anon_sym_LT,
    ACTIONS(801), 1,
      anon_sym_DASH_DASH,
    ACTIONS(803), 1,
      anon_sym_DOT_DOT,
    STATE(264), 1,
      sym__class_linetype,
    STATE(398), 1,
      sym_class_relation,
    STATE(407), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(359), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(430), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11459] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(815), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(817), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(819), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(821), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(823), 1,
      sym__newline,
    STATE(482), 1,
      sym_mmap_icon,
    STATE(789), 1,
      sym_mmap_class,
    STATE(386), 6,
      sym_mmap_node_square,
      sym_mmap_node_rounded,
      sym_mmap_node_circle,
      sym_mmap_node_cloud,
      sym_mmap_node_bang,
      sym_mmap_node_hexagon,
  [11510] = 13,
    ACTIONS(789), 1,
      anon_sym_STAR,
    ACTIONS(791), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      sym_class_reltype_aggregation,
    ACTIONS(799), 1,
      anon_sym_LT,
    ACTIONS(801), 1,
      anon_sym_DASH_DASH,
    ACTIONS(803), 1,
      anon_sym_DOT_DOT,
    STATE(264), 1,
      sym__class_linetype,
    STATE(401), 1,
      sym_class_relation,
    STATE(407), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(359), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(430), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11555] = 9,
    STATE(215), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(487), 1,
      sym__flow_link,
    STATE(608), 1,
      sym_flow_link_arrow_start,
    STATE(738), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(825), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(827), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(830), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(885), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11592] = 8,
    ACTIONS(835), 1,
      sym__newline,
    STATE(311), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(841), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(833), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(839), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(387), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11627] = 6,
    ACTIONS(843), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(850), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(848), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(217), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    ACTIONS(846), 10,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
      aux_sym_diagram_gitgraph_token1,
      aux_sym_diagram_journey_token1,
  [11658] = 9,
    STATE(220), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(487), 1,
      sym__flow_link,
    STATE(608), 1,
      sym_flow_link_arrow_start,
    STATE(738), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(853), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(855), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(857), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(885), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11695] = 6,
    ACTIONS(861), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      aux_sym_state_name_token1,
    STATE(243), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(859), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11726] = 9,
    STATE(215), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(487), 1,
      sym__flow_link,
    STATE(608), 1,
      sym_flow_link_arrow_start,
    STATE(738), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(855), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(857), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(867), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(885), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11763] = 10,
    ACTIONS(871), 1,
      anon_sym_LBRACE,
    ACTIONS(879), 1,
      sym_er_cardinarity_only_one,
    STATE(382), 1,
      sym__er_cardinarity,
    STATE(750), 1,
      sym_er_relation,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(869), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(873), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(875), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(877), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(441), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11801] = 3,
    ACTIONS(883), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(881), 14,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11825] = 6,
    ACTIONS(885), 1,
      anon_sym_COLON,
    ACTIONS(889), 1,
      anon_sym_DASH_DASH_GT,
    STATE(646), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(887), 10,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11855] = 7,
    STATE(525), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(841), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(833), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(839), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(387), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11887] = 10,
    ACTIONS(893), 1,
      ts_builtin_sym_end,
    ACTIONS(895), 1,
      aux_sym_gitgraph_stmt_commit_token1,
    ACTIONS(898), 1,
      aux_sym_gitgraph_stmt_branch_token1,
    ACTIONS(901), 1,
      aux_sym_gitgraph_stmt_checkout_token1,
    ACTIONS(904), 1,
      aux_sym_gitgraph_stmt_merge_token1,
    ACTIONS(907), 1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
    ACTIONS(910), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(225), 2,
      sym__gitgraph_stmt,
      aux_sym_diagram_gitgraph_repeat1,
    STATE(371), 5,
      sym_gitgraph_stmt_commit,
      sym_gitgraph_stmt_branch,
      sym_gitgraph_stmt_checkout,
      sym_gitgraph_stmt_merge,
      sym_gitgraph_stmt_cherry_pick,
  [11924] = 10,
    ACTIONS(913), 1,
      ts_builtin_sym_end,
    ACTIONS(915), 1,
      aux_sym_gitgraph_stmt_commit_token1,
    ACTIONS(917), 1,
      aux_sym_gitgraph_stmt_branch_token1,
    ACTIONS(919), 1,
      aux_sym_gitgraph_stmt_checkout_token1,
    ACTIONS(921), 1,
      aux_sym_gitgraph_stmt_merge_token1,
    ACTIONS(923), 1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
    ACTIONS(925), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(225), 2,
      sym__gitgraph_stmt,
      aux_sym_diagram_gitgraph_repeat1,
    STATE(371), 5,
      sym_gitgraph_stmt_commit,
      sym_gitgraph_stmt_branch,
      sym_gitgraph_stmt_checkout,
      sym_gitgraph_stmt_merge,
      sym_gitgraph_stmt_cherry_pick,
  [11961] = 4,
    ACTIONS(929), 1,
      anon_sym_COLON,
    ACTIONS(931), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(927), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11986] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(935), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(933), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12009] = 5,
    ACTIONS(939), 1,
      anon_sym_TILDE,
    ACTIONS(941), 1,
      anon_sym_LT,
    STATE(274), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(937), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12036] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(945), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(943), 12,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
      aux_sym_diagram_gitgraph_token1,
      aux_sym_diagram_journey_token1,
      sym__newline,
  [12059] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_class_label_token1,
    STATE(262), 1,
      sym_state_description,
    ACTIONS(949), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(947), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [12088] = 10,
    ACTIONS(915), 1,
      aux_sym_gitgraph_stmt_commit_token1,
    ACTIONS(917), 1,
      aux_sym_gitgraph_stmt_branch_token1,
    ACTIONS(919), 1,
      aux_sym_gitgraph_stmt_checkout_token1,
    ACTIONS(921), 1,
      aux_sym_gitgraph_stmt_merge_token1,
    ACTIONS(923), 1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
    ACTIONS(953), 1,
      ts_builtin_sym_end,
    ACTIONS(955), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(226), 2,
      sym__gitgraph_stmt,
      aux_sym_diagram_gitgraph_repeat1,
    STATE(371), 5,
      sym_gitgraph_stmt_commit,
      sym_gitgraph_stmt_branch,
      sym_gitgraph_stmt_checkout,
      sym_gitgraph_stmt_merge,
      sym_gitgraph_stmt_cherry_pick,
  [12125] = 3,
    ACTIONS(959), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(957), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12147] = 3,
    ACTIONS(963), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(961), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12169] = 3,
    ACTIONS(967), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(965), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12191] = 3,
    ACTIONS(971), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(969), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12213] = 5,
    ACTIONS(975), 1,
      sym__class_name,
    ACTIONS(977), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(979), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(973), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12239] = 3,
    ACTIONS(979), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(973), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12261] = 10,
    ACTIONS(789), 1,
      anon_sym_STAR,
    ACTIONS(791), 1,
      anon_sym_GT,
    ACTIONS(799), 1,
      anon_sym_LT,
    ACTIONS(981), 1,
      sym__class_name,
    ACTIONS(985), 1,
      sym_class_reltype_aggregation,
    STATE(531), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(983), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(430), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12297] = 3,
    ACTIONS(989), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(987), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12319] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__sequence_actor_word,
    STATE(241), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(996), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(991), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12347] = 3,
    ACTIONS(1000), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(998), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12369] = 3,
    ACTIONS(1004), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1002), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12391] = 3,
    ACTIONS(1008), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1006), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12413] = 3,
    ACTIONS(1012), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1010), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12435] = 3,
    ACTIONS(1016), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1014), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12457] = 3,
    ACTIONS(1020), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1018), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12479] = 5,
    ACTIONS(975), 1,
      sym__class_name,
    ACTIONS(977), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1024), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1022), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12505] = 3,
    ACTIONS(1028), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1026), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12527] = 3,
    ACTIONS(1032), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1030), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12549] = 3,
    ACTIONS(1036), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1034), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12571] = 3,
    ACTIONS(1040), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1038), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12593] = 3,
    ACTIONS(1044), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1042), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12615] = 3,
    ACTIONS(1048), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1046), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12637] = 12,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1054), 1,
      anon_sym_end,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(287), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(700), 1,
      sym__flow_stmt,
    STATE(829), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12677] = 3,
    ACTIONS(1060), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1058), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12699] = 3,
    ACTIONS(1064), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1062), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12721] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym__sequence_actor_word,
    STATE(241), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1070), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1066), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12749] = 3,
    ACTIONS(1074), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1072), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12771] = 3,
    ACTIONS(1078), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1076), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12793] = 11,
    ACTIONS(1080), 1,
      ts_builtin_sym_end,
    ACTIONS(1082), 1,
      anon_sym_class,
    ACTIONS(1084), 1,
      anon_sym_LT_LT,
    ACTIONS(1086), 1,
      sym__class_name,
    ACTIONS(1088), 1,
      sym__bquote_string,
    STATE(212), 1,
      sym_class_name,
    STATE(229), 1,
      sym_class_name_body,
    STATE(504), 1,
      aux_sym_class_name_body_repeat1,
    STATE(741), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(699), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12831] = 3,
    ACTIONS(1092), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1090), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12853] = 3,
    ACTIONS(1024), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1022), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12875] = 10,
    ACTIONS(789), 1,
      anon_sym_STAR,
    ACTIONS(791), 1,
      anon_sym_GT,
    ACTIONS(799), 1,
      anon_sym_LT,
    ACTIONS(985), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1094), 1,
      sym__class_name,
    STATE(672), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1096), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(430), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12911] = 9,
    ACTIONS(861), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    STATE(243), 1,
      sym_state_composite_body,
    STATE(247), 1,
      sym__state_annotation,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1098), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(1100), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(1102), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(233), 3,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [12945] = 3,
    ACTIONS(1106), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1104), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12967] = 12,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    ACTIONS(1108), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(287), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(700), 1,
      sym__flow_stmt,
    STATE(978), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13007] = 12,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    ACTIONS(1110), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(287), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(700), 1,
      sym__flow_stmt,
    STATE(860), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13047] = 11,
    ACTIONS(1082), 1,
      anon_sym_class,
    ACTIONS(1084), 1,
      anon_sym_LT_LT,
    ACTIONS(1086), 1,
      sym__class_name,
    ACTIONS(1088), 1,
      sym__bquote_string,
    ACTIONS(1112), 1,
      ts_builtin_sym_end,
    STATE(212), 1,
      sym_class_name,
    STATE(229), 1,
      sym_class_name_body,
    STATE(504), 1,
      aux_sym_class_name_body_repeat1,
    STATE(741), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(699), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13085] = 3,
    ACTIONS(935), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(933), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13107] = 3,
    ACTIONS(1116), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1114), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13129] = 3,
    ACTIONS(1120), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1118), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13150] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(756), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13187] = 3,
    ACTIONS(1140), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1138), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13208] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(756), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13245] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(933), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
  [13264] = 3,
    ACTIONS(1146), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1144), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13285] = 3,
    ACTIONS(1150), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1148), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13306] = 3,
    ACTIONS(1152), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(540), 11,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13327] = 3,
    ACTIONS(1156), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1154), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13348] = 11,
    ACTIONS(1158), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1161), 1,
      anon_sym_subgraph,
    ACTIONS(1164), 1,
      anon_sym_end,
    ACTIONS(1166), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(281), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(700), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13385] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    ACTIONS(1169), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(756), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13422] = 3,
    ACTIONS(1173), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1171), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13443] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    ACTIONS(1175), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(556), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13480] = 10,
    ACTIONS(1082), 1,
      anon_sym_class,
    ACTIONS(1084), 1,
      anon_sym_LT_LT,
    ACTIONS(1086), 1,
      sym__class_name,
    ACTIONS(1088), 1,
      sym__bquote_string,
    STATE(212), 1,
      sym_class_name,
    STATE(229), 1,
      sym_class_name_body,
    STATE(504), 1,
      aux_sym_class_name_body_repeat1,
    STATE(741), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(699), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13515] = 3,
    ACTIONS(1179), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1177), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13536] = 11,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    ACTIONS(1181), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(281), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(700), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13573] = 3,
    ACTIONS(1185), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1183), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13594] = 3,
    ACTIONS(1189), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1187), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13615] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    ACTIONS(1191), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(756), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13652] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    ACTIONS(1193), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(756), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13689] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    ACTIONS(1195), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(587), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13726] = 3,
    ACTIONS(1199), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1197), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13747] = 10,
    ACTIONS(1082), 1,
      anon_sym_class,
    ACTIONS(1084), 1,
      anon_sym_LT_LT,
    ACTIONS(1086), 1,
      sym__class_name,
    ACTIONS(1088), 1,
      sym__bquote_string,
    STATE(212), 1,
      sym_class_name,
    STATE(229), 1,
      sym_class_name_body,
    STATE(504), 1,
      aux_sym_class_name_body_repeat1,
    STATE(676), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(699), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13782] = 3,
    ACTIONS(1203), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1201), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13803] = 3,
    ACTIONS(1207), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1205), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13824] = 11,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    ACTIONS(1209), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(756), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13861] = 3,
    ACTIONS(1213), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1211), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13882] = 3,
    ACTIONS(1217), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1215), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13903] = 5,
    ACTIONS(1221), 1,
      anon_sym_AMP,
    STATE(308), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1223), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1219), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13927] = 10,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(756), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13961] = 10,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    ACTIONS(1225), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(678), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13995] = 5,
    ACTIONS(1229), 1,
      anon_sym_RBRACK,
    ACTIONS(1231), 1,
      aux_sym_flow_text_literal_token1,
    STATE(303), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1227), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [14019] = 7,
    ACTIONS(1234), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1238), 1,
      sym_solid_open_arrow,
    ACTIONS(1240), 1,
      anon_sym_DASH_DASH_GT,
    STATE(373), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1236), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14047] = 7,
    ACTIONS(1234), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1238), 1,
      sym_solid_open_arrow,
    ACTIONS(1240), 1,
      anon_sym_DASH_DASH_GT,
    STATE(370), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1236), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14075] = 10,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(540), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14109] = 7,
    ACTIONS(879), 1,
      sym_er_cardinarity_only_one,
    STATE(808), 1,
      sym__er_cardinarity,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(873), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(875), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(877), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(441), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [14137] = 5,
    ACTIONS(1244), 1,
      anon_sym_AMP,
    STATE(308), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1247), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1242), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14161] = 5,
    ACTIONS(1221), 1,
      anon_sym_AMP,
    STATE(300), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1251), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1249), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14185] = 10,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    ACTIONS(1253), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(678), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14219] = 10,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    ACTIONS(1255), 1,
      sym__newline,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(457), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14253] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1257), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [14271] = 10,
    ACTIONS(1259), 1,
      ts_builtin_sym_end,
    ACTIONS(1261), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1263), 1,
      sym__newline,
    ACTIONS(1265), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1267), 1,
      aux_sym_pie_label_token1,
    STATE(343), 1,
      sym_pie_showdata,
    STATE(886), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(344), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(501), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14305] = 7,
    ACTIONS(1234), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1238), 1,
      sym_solid_open_arrow,
    ACTIONS(1240), 1,
      anon_sym_DASH_DASH_GT,
    STATE(377), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1236), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14333] = 10,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_LT_LT,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(605), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14367] = 5,
    ACTIONS(1271), 1,
      anon_sym_RBRACK,
    ACTIONS(1273), 1,
      aux_sym_flow_text_literal_token1,
    STATE(303), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1269), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [14391] = 7,
    ACTIONS(1234), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1238), 1,
      sym_solid_open_arrow,
    ACTIONS(1240), 1,
      anon_sym_DASH_DASH_GT,
    STATE(376), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1236), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14419] = 10,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    ACTIONS(1275), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(678), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14453] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1279), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1277), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14472] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1247), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1242), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14491] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1283), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1281), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14510] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1287), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1285), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14529] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1291), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__newline,
    ACTIONS(1289), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [14550] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1295), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1293), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14569] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1299), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1297), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14588] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1303), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1301), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14607] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1307), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1305), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14626] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1311), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1309), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14645] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1315), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1313), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14664] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1319), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1317), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14683] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1323), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1321), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14702] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1327), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1325), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14721] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1331), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1329), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14740] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1335), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1333), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14759] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1339), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1337), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14778] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1343), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1341), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14797] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1347), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1345), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14816] = 9,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(678), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14847] = 9,
    ACTIONS(1050), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1052), 1,
      anon_sym_subgraph,
    ACTIONS(1056), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(218), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(490), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(649), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14878] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1351), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1349), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14896] = 6,
    ACTIONS(1357), 1,
      anon_sym_STAR,
    ACTIONS(1359), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1353), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1355), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [14920] = 9,
    ACTIONS(1361), 1,
      sym__newline,
    ACTIONS(1363), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1365), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1367), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(453), 1,
      sym__er_attribute_key_type,
    STATE(911), 1,
      sym__er_word,
    STATE(912), 1,
      sym_er_attribute_comment,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(726), 2,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [14950] = 8,
    ACTIONS(1261), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1267), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1369), 1,
      ts_builtin_sym_end,
    ACTIONS(1371), 1,
      sym__newline,
    STATE(886), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(347), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(501), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14978] = 8,
    ACTIONS(1261), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1267), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1369), 1,
      ts_builtin_sym_end,
    ACTIONS(1373), 1,
      sym__newline,
    STATE(886), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(345), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(501), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15006] = 8,
    ACTIONS(1375), 1,
      ts_builtin_sym_end,
    ACTIONS(1377), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1380), 1,
      sym__newline,
    ACTIONS(1383), 1,
      aux_sym_pie_label_token1,
    STATE(886), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(345), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(501), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15034] = 7,
    ACTIONS(1386), 1,
      aux_sym_gitgraph_commit_attr_id_token1,
    ACTIONS(1388), 1,
      aux_sym_gitgraph_commit_attr_tag_token1,
    ACTIONS(1390), 1,
      aux_sym_gitgraph_commit_attr_type_token1,
    ACTIONS(1392), 1,
      sym__newline,
    STATE(948), 1,
      sym_gitgraph_commit_attrs,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(362), 4,
      sym_gitgraph_commit_attr_id,
      sym_gitgraph_commit_attr_tag,
      sym_gitgraph_commit_attr_type,
      aux_sym_gitgraph_commit_attrs_repeat1,
  [15060] = 8,
    ACTIONS(1261), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1267), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1373), 1,
      sym__newline,
    ACTIONS(1394), 1,
      ts_builtin_sym_end,
    STATE(886), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(345), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(501), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15088] = 6,
    ACTIONS(1398), 1,
      anon_sym_STAR,
    ACTIONS(1400), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1355), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1396), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15112] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1404), 1,
      aux_sym_class_label_token1,
    STATE(790), 1,
      sym_journey_task_name,
    STATE(836), 1,
      sym__journey_task_name,
    STATE(353), 2,
      sym_journey_task,
      aux_sym_journey_section_repeat1,
    ACTIONS(1402), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [15138] = 4,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1408), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1406), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [15158] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1411), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(825), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15176] = 9,
    ACTIONS(1122), 1,
      anon_sym_TILDE,
    ACTIONS(1126), 1,
      anon_sym_PLUS,
    ACTIONS(1128), 1,
      anon_sym_DASH,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    ACTIONS(1136), 1,
      sym__alpha_num_token,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    STATE(739), 1,
      sym_class_method_line,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [15206] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1415), 1,
      aux_sym_class_label_token1,
    STATE(790), 1,
      sym_journey_task_name,
    STATE(836), 1,
      sym__journey_task_name,
    STATE(353), 2,
      sym_journey_task,
      aux_sym_journey_section_repeat1,
    ACTIONS(1413), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [15232] = 6,
    ACTIONS(1420), 1,
      anon_sym_STAR,
    ACTIONS(1422), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1355), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1418), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15256] = 6,
    ACTIONS(1426), 1,
      anon_sym_STAR,
    ACTIONS(1428), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1355), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1424), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15280] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1404), 1,
      aux_sym_class_label_token1,
    STATE(790), 1,
      sym_journey_task_name,
    STATE(836), 1,
      sym__journey_task_name,
    STATE(349), 2,
      sym_journey_task,
      aux_sym_journey_section_repeat1,
    ACTIONS(1430), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [15306] = 6,
    ACTIONS(1434), 1,
      anon_sym_STAR,
    ACTIONS(1436), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1355), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1432), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15330] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1440), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1438), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15348] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1444), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1442), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15366] = 7,
    ACTIONS(1446), 1,
      ts_builtin_sym_end,
    ACTIONS(1448), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1451), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(1454), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(360), 2,
      sym__journey_stmt,
      aux_sym_diagram_journey_repeat1,
    STATE(468), 2,
      sym_journey_title,
      sym_journey_section,
  [15391] = 7,
    ACTIONS(1457), 1,
      ts_builtin_sym_end,
    ACTIONS(1459), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1461), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(1463), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(360), 2,
      sym__journey_stmt,
      aux_sym_diagram_journey_repeat1,
    STATE(468), 2,
      sym_journey_title,
      sym_journey_section,
  [15416] = 6,
    ACTIONS(1386), 1,
      aux_sym_gitgraph_commit_attr_id_token1,
    ACTIONS(1388), 1,
      aux_sym_gitgraph_commit_attr_tag_token1,
    ACTIONS(1390), 1,
      aux_sym_gitgraph_commit_attr_type_token1,
    ACTIONS(1465), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(364), 4,
      sym_gitgraph_commit_attr_id,
      sym_gitgraph_commit_attr_tag,
      sym_gitgraph_commit_attr_type,
      aux_sym_gitgraph_commit_attrs_repeat1,
  [15439] = 7,
    ACTIONS(1459), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1461), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(1467), 1,
      ts_builtin_sym_end,
    ACTIONS(1469), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(361), 2,
      sym__journey_stmt,
      aux_sym_diagram_journey_repeat1,
    STATE(468), 2,
      sym_journey_title,
      sym_journey_section,
  [15464] = 6,
    ACTIONS(1471), 1,
      aux_sym_gitgraph_commit_attr_id_token1,
    ACTIONS(1474), 1,
      aux_sym_gitgraph_commit_attr_tag_token1,
    ACTIONS(1477), 1,
      aux_sym_gitgraph_commit_attr_type_token1,
    ACTIONS(1480), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(364), 4,
      sym_gitgraph_commit_attr_id,
      sym_gitgraph_commit_attr_tag,
      sym_gitgraph_commit_attr_type,
      aux_sym_gitgraph_commit_attrs_repeat1,
  [15487] = 6,
    ACTIONS(1482), 1,
      ts_builtin_sym_end,
    ACTIONS(1484), 1,
      sym__er_alphanum,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(787), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(736), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15509] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1486), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15523] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(977), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1022), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15539] = 6,
    ACTIONS(1484), 1,
      sym__er_alphanum,
    ACTIONS(1488), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(787), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(736), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15561] = 6,
    ACTIONS(1484), 1,
      sym__er_alphanum,
    ACTIONS(1490), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(787), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(736), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15583] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(1492), 1,
      anon_sym_PLUS,
    ACTIONS(1494), 1,
      anon_sym_DASH,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(883), 1,
      sym_sequence_actor,
    STATE(665), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15609] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1496), 7,
      ts_builtin_sym_end,
      aux_sym_gitgraph_stmt_commit_token1,
      aux_sym_gitgraph_stmt_branch_token1,
      aux_sym_gitgraph_stmt_checkout_token1,
      aux_sym_gitgraph_stmt_merge_token1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
      sym__newline,
  [15623] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(977), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(973), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15639] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(1492), 1,
      anon_sym_PLUS,
    ACTIONS(1494), 1,
      anon_sym_DASH,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(958), 1,
      sym_sequence_actor,
    STATE(508), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15665] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1498), 7,
      ts_builtin_sym_end,
      aux_sym_gitgraph_stmt_commit_token1,
      aux_sym_gitgraph_stmt_branch_token1,
      aux_sym_gitgraph_stmt_checkout_token1,
      aux_sym_gitgraph_stmt_merge_token1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
      sym__newline,
  [15679] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1500), 7,
      ts_builtin_sym_end,
      aux_sym_gitgraph_stmt_commit_token1,
      aux_sym_gitgraph_stmt_branch_token1,
      aux_sym_gitgraph_stmt_checkout_token1,
      aux_sym_gitgraph_stmt_merge_token1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
      sym__newline,
  [15693] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(1492), 1,
      anon_sym_PLUS,
    ACTIONS(1494), 1,
      anon_sym_DASH,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(942), 1,
      sym_sequence_actor,
    STATE(515), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15719] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    ACTIONS(1492), 1,
      anon_sym_PLUS,
    ACTIONS(1494), 1,
      anon_sym_DASH,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(926), 1,
      sym_sequence_actor,
    STATE(520), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15745] = 6,
    ACTIONS(1484), 1,
      sym__er_alphanum,
    ACTIONS(1502), 1,
      sym__newline,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(671), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(736), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15767] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1504), 7,
      ts_builtin_sym_end,
      aux_sym_gitgraph_stmt_commit_token1,
      aux_sym_gitgraph_stmt_branch_token1,
      aux_sym_gitgraph_stmt_checkout_token1,
      aux_sym_gitgraph_stmt_merge_token1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
      sym__newline,
  [15781] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1506), 7,
      ts_builtin_sym_end,
      aux_sym_gitgraph_stmt_commit_token1,
      aux_sym_gitgraph_stmt_branch_token1,
      aux_sym_gitgraph_stmt_checkout_token1,
      aux_sym_gitgraph_stmt_merge_token1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
      sym__newline,
  [15795] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1508), 7,
      ts_builtin_sym_end,
      aux_sym_gitgraph_stmt_commit_token1,
      aux_sym_gitgraph_stmt_branch_token1,
      aux_sym_gitgraph_stmt_checkout_token1,
      aux_sym_gitgraph_stmt_merge_token1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
      sym__newline,
  [15809] = 5,
    ACTIONS(1510), 1,
      anon_sym_DASH_DASH,
    STATE(307), 1,
      sym__er_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(366), 2,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
    ACTIONS(1512), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15829] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1514), 7,
      ts_builtin_sym_end,
      aux_sym_gitgraph_stmt_commit_token1,
      aux_sym_gitgraph_stmt_branch_token1,
      aux_sym_gitgraph_stmt_checkout_token1,
      aux_sym_gitgraph_stmt_merge_token1,
      aux_sym_gitgraph_stmt_cherry_pick_token1,
      sym__newline,
  [15843] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1516), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15857] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1518), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15871] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(819), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(821), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(1520), 1,
      ts_builtin_sym_end,
    ACTIONS(1522), 1,
      sym__newline,
    STATE(454), 1,
      sym_mmap_icon,
    STATE(707), 1,
      sym_mmap_class,
  [15896] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1526), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1524), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15911] = 5,
    ACTIONS(1484), 1,
      sym__er_alphanum,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(647), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(736), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15930] = 4,
    ACTIONS(1530), 1,
      sym__alpha_num_token,
    STATE(389), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1528), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [15947] = 6,
    ACTIONS(1533), 1,
      anon_sym_RBRACE,
    ACTIONS(1535), 1,
      sym__er_alphanum,
    STATE(785), 1,
      sym_er_attribute_type,
    STATE(806), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(415), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15968] = 6,
    ACTIONS(1537), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1539), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1541), 1,
      aux_sym_note_placement_right_token1,
    STATE(687), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(921), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15989] = 6,
    ACTIONS(1539), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1541), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1543), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(510), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(921), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16010] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1547), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1545), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16025] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(977), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1022), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [16040] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1551), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1549), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16055] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1555), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1553), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16070] = 6,
    ACTIONS(1559), 1,
      sym__alpha_num_token,
    STATE(413), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(717), 1,
      sym_flow_vertex_text,
    STATE(937), 1,
      sym_flow_vertex_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1557), 2,
      anon_sym_SEMI,
      sym__newline,
  [16091] = 7,
    ACTIONS(1088), 1,
      sym__bquote_string,
    ACTIONS(1561), 1,
      sym__class_name,
    ACTIONS(1563), 1,
      sym__dquote_string,
    STATE(229), 1,
      sym_class_name_body,
    STATE(641), 1,
      aux_sym_class_name_body_repeat1,
    STATE(673), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16114] = 6,
    ACTIONS(1539), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1541), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1565), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(522), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(921), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16135] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(977), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(973), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [16150] = 7,
    ACTIONS(1088), 1,
      sym__bquote_string,
    ACTIONS(1561), 1,
      sym__class_name,
    ACTIONS(1567), 1,
      sym__dquote_string,
    STATE(229), 1,
      sym_class_name_body,
    STATE(534), 1,
      sym_class_name,
    STATE(641), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16173] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1571), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1569), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16188] = 4,
    ACTIONS(1573), 1,
      anon_sym_TILDE,
    STATE(455), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(937), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16205] = 5,
    ACTIONS(1484), 1,
      sym__er_alphanum,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(787), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(736), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16224] = 6,
    ACTIONS(1539), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1541), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1575), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(516), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(921), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16245] = 5,
    ACTIONS(1577), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1579), 1,
      sym_flow_text_quoted,
    STATE(452), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(887), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16263] = 5,
    ACTIONS(801), 1,
      anon_sym_DASH_DASH,
    ACTIONS(803), 1,
      anon_sym_DOT_DOT,
    STATE(239), 1,
      sym__class_linetype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(359), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [16281] = 6,
    ACTIONS(1581), 1,
      sym__class_name,
    ACTIONS(1583), 1,
      sym__bquote_string,
    STATE(403), 1,
      sym_class_name_body,
    STATE(493), 1,
      sym_class_name,
    STATE(659), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16301] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1022), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16313] = 6,
    ACTIONS(1088), 1,
      sym__bquote_string,
    ACTIONS(1561), 1,
      sym__class_name,
    STATE(229), 1,
      sym_class_name_body,
    STATE(534), 1,
      sym_class_name,
    STATE(641), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16333] = 5,
    ACTIONS(1585), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1587), 1,
      aux_sym_note_placement_right_token1,
    STATE(688), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(698), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16351] = 5,
    ACTIONS(1585), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1587), 1,
      aux_sym_note_placement_right_token1,
    STATE(596), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(698), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16369] = 4,
    ACTIONS(1591), 1,
      sym__alpha_num_token,
    STATE(389), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1589), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [16385] = 4,
    ACTIONS(1593), 1,
      aux_sym_flow_text_literal_token1,
    STATE(414), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1227), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16401] = 5,
    ACTIONS(1535), 1,
      sym__er_alphanum,
    ACTIONS(1596), 1,
      anon_sym_RBRACE,
    STATE(785), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(424), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16419] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1600), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(873), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16437] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1602), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16449] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1604), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1606), 1,
      sym__md_start,
    STATE(972), 1,
      sym_mmap_node_content,
    STATE(479), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16469] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1604), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1606), 1,
      sym__md_start,
    STATE(971), 1,
      sym_mmap_node_content,
    STATE(479), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16489] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1604), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1606), 1,
      sym__md_start,
    STATE(969), 1,
      sym_mmap_node_content,
    STATE(479), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16509] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1608), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1610), 1,
      sym__md_start,
    STATE(968), 1,
      sym_mmap_node_content,
    STATE(692), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16529] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1608), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1610), 1,
      sym__md_start,
    STATE(967), 1,
      sym_mmap_node_content,
    STATE(692), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16549] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1604), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1606), 1,
      sym__md_start,
    STATE(966), 1,
      sym_mmap_node_content,
    STATE(479), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16569] = 5,
    ACTIONS(1612), 1,
      anon_sym_RBRACE,
    ACTIONS(1614), 1,
      sym__er_alphanum,
    STATE(785), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(424), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16587] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1619), 1,
      aux_sym_class_label_token1,
    ACTIONS(1617), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [16603] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1623), 1,
      sym_pie_title,
    ACTIONS(1625), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1621), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [16621] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1627), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(870), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16639] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1629), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16651] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1631), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16663] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1633), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16675] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1635), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(854), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16693] = 5,
    ACTIONS(1577), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1637), 1,
      sym_flow_text_quoted,
    STATE(452), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(847), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16711] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1639), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(837), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16729] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1641), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16741] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1643), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(834), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16759] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1645), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16771] = 5,
    ACTIONS(885), 1,
      anon_sym_COLON,
    ACTIONS(889), 1,
      anon_sym_DASH_DASH_GT,
    STATE(675), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16789] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1647), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(831), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16807] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1649), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(830), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16825] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1651), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16837] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1653), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16849] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(973), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16861] = 5,
    ACTIONS(1577), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1655), 1,
      sym_flow_text_quoted,
    STATE(452), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(826), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16879] = 6,
    ACTIONS(1088), 1,
      sym__bquote_string,
    ACTIONS(1561), 1,
      sym__class_name,
    STATE(229), 1,
      sym_class_name_body,
    STATE(552), 1,
      sym_class_name,
    STATE(641), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16899] = 6,
    ACTIONS(1088), 1,
      sym__bquote_string,
    ACTIONS(1581), 1,
      sym__class_name,
    STATE(229), 1,
      sym_class_name_body,
    STATE(620), 1,
      aux_sym_class_name_body_repeat1,
    STATE(712), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16919] = 4,
    ACTIONS(1657), 1,
      sym__alpha_num_token,
    STATE(446), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1528), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16935] = 4,
    ACTIONS(1660), 1,
      sym__alpha_num_token,
    STATE(446), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1662), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16951] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1664), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(793), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16969] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1666), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(778), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16987] = 5,
    ACTIONS(1598), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1668), 1,
      sym_flow_text_quoted,
    STATE(316), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17005] = 5,
    ACTIONS(1670), 1,
      sym__dquote_string,
    STATE(219), 1,
      sym_state_alias,
    STATE(265), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17023] = 4,
    ACTIONS(1672), 1,
      aux_sym_flow_text_literal_token1,
    STATE(414), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1269), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [17039] = 5,
    ACTIONS(1363), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1674), 1,
      sym__newline,
    STATE(846), 1,
      sym_er_attribute_comment,
    STATE(911), 1,
      sym__er_word,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17056] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(819), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1676), 1,
      ts_builtin_sym_end,
    ACTIONS(1678), 1,
      sym__newline,
    STATE(745), 1,
      sym_mmap_class,
  [17075] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1138), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17086] = 3,
    STATE(859), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(855), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [17099] = 4,
    ACTIONS(1680), 1,
      ts_builtin_sym_end,
    STATE(489), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1682), 2,
      anon_sym_SEMI,
      sym__newline,
  [17114] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1686), 1,
      sym__newline,
    ACTIONS(1684), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17129] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1690), 1,
      aux_sym_class_label_token1,
    STATE(757), 1,
      sym_class_label,
    ACTIONS(1688), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17146] = 4,
    ACTIONS(1692), 1,
      ts_builtin_sym_end,
    STATE(460), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1694), 2,
      anon_sym_SEMI,
      sym__newline,
  [17161] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1183), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17172] = 4,
    ACTIONS(1225), 1,
      ts_builtin_sym_end,
    STATE(460), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1697), 2,
      anon_sym_SEMI,
      sym__newline,
  [17187] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1701), 1,
      sym__newline,
    ACTIONS(1699), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17202] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1705), 1,
      sym__newline,
    ACTIONS(1703), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17217] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1709), 1,
      sym__newline,
    ACTIONS(1707), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17232] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1713), 1,
      sym__newline,
    ACTIONS(1711), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17247] = 3,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1715), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17260] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1717), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [17271] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1721), 1,
      sym__newline,
    ACTIONS(1719), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17286] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1723), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17297] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1690), 1,
      aux_sym_class_label_token1,
    STATE(715), 1,
      sym_class_label,
    ACTIONS(1725), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17314] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1690), 1,
      aux_sym_class_label_token1,
    STATE(768), 1,
      sym_class_label,
    ACTIONS(1727), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17331] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1729), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [17342] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1731), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [17353] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_class_label_token1,
    STATE(262), 1,
      sym_state_description,
    ACTIONS(947), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17370] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1733), 4,
      aux_sym_gitgraph_commit_attr_id_token1,
      aux_sym_gitgraph_commit_attr_tag_token1,
      aux_sym_gitgraph_commit_attr_type_token1,
      sym__newline,
  [17381] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1735), 4,
      aux_sym_gitgraph_commit_attr_id_token1,
      aux_sym_gitgraph_commit_attr_tag_token1,
      aux_sym_gitgraph_commit_attr_type_token1,
      sym__newline,
  [17392] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1737), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [17403] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1739), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [17414] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1741), 4,
      aux_sym_gitgraph_commit_attr_id_token1,
      aux_sym_gitgraph_commit_attr_tag_token1,
      aux_sym_gitgraph_commit_attr_type_token1,
      sym__newline,
  [17425] = 3,
    ACTIONS(1743), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1164), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [17438] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(819), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1520), 1,
      ts_builtin_sym_end,
    ACTIONS(1522), 1,
      sym__newline,
    STATE(707), 1,
      sym_mmap_class,
  [17457] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1745), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17468] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1747), 1,
      sym__newline,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(953), 1,
      sym__sequence_rest_text,
    STATE(975), 1,
      sym_sequence_text,
  [17487] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1751), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [17498] = 4,
    STATE(702), 1,
      sym__er_word,
    STATE(703), 1,
      sym_er_role,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1753), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [17513] = 5,
    ACTIONS(1755), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(351), 1,
      sym_flow_node,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17530] = 3,
    STATE(355), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1757), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17543] = 4,
    ACTIONS(1275), 1,
      ts_builtin_sym_end,
    STATE(460), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1759), 2,
      anon_sym_SEMI,
      sym__newline,
  [17558] = 4,
    ACTIONS(1275), 1,
      ts_builtin_sym_end,
    STATE(462), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1759), 2,
      anon_sym_SEMI,
      sym__newline,
  [17573] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1761), 1,
      sym__sequence_actor_word,
    STATE(498), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1066), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [17590] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1763), 1,
      sym__newline,
    STATE(923), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [17609] = 4,
    ACTIONS(1767), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1769), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1765), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17624] = 3,
    ACTIONS(655), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1771), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [17637] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1773), 1,
      sym__newline,
    STATE(939), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [17656] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1775), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17667] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1777), 1,
      sym__newline,
    STATE(953), 1,
      sym__sequence_rest_text,
    STATE(955), 1,
      sym_sequence_text,
  [17686] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1779), 1,
      sym__sequence_actor_word,
    STATE(498), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(991), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [17703] = 3,
    STATE(354), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1782), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17716] = 3,
    STATE(341), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1784), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17729] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1786), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17740] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1788), 1,
      sym__newline,
    STATE(791), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [17759] = 4,
    ACTIONS(1209), 1,
      anon_sym_RBRACE,
    ACTIONS(1790), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17773] = 4,
    ACTIONS(1792), 1,
      sym__class_name,
    ACTIONS(1794), 1,
      sym__bquote_string,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17787] = 4,
    ACTIONS(1796), 1,
      sym__class_name,
    ACTIONS(1799), 1,
      sym__bquote_string,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17801] = 4,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(1801), 1,
      sym__newline,
    STATE(509), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17815] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(960), 1,
      sym_sequence_actor,
  [17831] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(959), 1,
      sym_sequence_actor,
  [17847] = 4,
    ACTIONS(1803), 1,
      ts_builtin_sym_end,
    ACTIONS(1805), 1,
      sym__newline,
    STATE(509), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17861] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(957), 1,
      sym_sequence_actor,
  [17877] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(708), 1,
      sym_sequence_actor,
  [17893] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(953), 1,
      sym__sequence_rest_text,
    STATE(954), 1,
      sym_sequence_text,
  [17909] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(944), 1,
      sym_sequence_actor,
  [17925] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1808), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17935] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(943), 1,
      sym_sequence_actor,
  [17951] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(941), 1,
      sym_sequence_actor,
  [17967] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(710), 1,
      sym_sequence_actor,
  [17983] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(938), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [17999] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(928), 1,
      sym_sequence_actor,
  [18015] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(927), 1,
      sym_sequence_actor,
  [18031] = 4,
    ACTIONS(1810), 1,
      anon_sym_COLON,
    ACTIONS(1812), 1,
      aux_sym_gantt_task_text_token1,
    STATE(521), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18045] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(925), 1,
      sym_sequence_actor,
  [18061] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(716), 1,
      sym_sequence_actor,
  [18077] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(922), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18093] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1815), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18103] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(902), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18119] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(901), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18135] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(900), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18151] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(888), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18167] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(898), 1,
      sym_sequence_actor,
  [18183] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1817), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [18193] = 4,
    ACTIONS(1819), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1821), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(532), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18207] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(897), 1,
      sym_sequence_actor,
  [18223] = 3,
    ACTIONS(1824), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1725), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18235] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(896), 1,
      sym_sequence_actor,
  [18251] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(895), 1,
      sym_sequence_actor,
  [18267] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(881), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18283] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1353), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18293] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(880), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18309] = 4,
    ACTIONS(1169), 1,
      anon_sym_RBRACE,
    ACTIONS(1826), 1,
      sym__newline,
    STATE(591), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18323] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(879), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18339] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1828), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18349] = 4,
    ACTIONS(1169), 1,
      anon_sym_RBRACE,
    ACTIONS(1826), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18363] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1830), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18373] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1832), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18383] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1834), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18393] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1836), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18403] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1838), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18413] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1840), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18423] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1842), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18433] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1844), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18443] = 3,
    ACTIONS(1846), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1688), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18455] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(877), 1,
      sym_sequence_actor,
  [18471] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(876), 1,
      sym_sequence_actor,
  [18487] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(875), 1,
      sym_sequence_actor,
  [18503] = 4,
    ACTIONS(1848), 1,
      anon_sym_RBRACE,
    ACTIONS(1850), 1,
      sym__newline,
    STATE(543), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18517] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(874), 1,
      sym_sequence_actor,
  [18533] = 4,
    ACTIONS(1852), 1,
      ts_builtin_sym_end,
    ACTIONS(1854), 1,
      sym__newline,
    STATE(648), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18547] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(857), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18563] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(856), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18579] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(855), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18595] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1856), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18605] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(853), 1,
      sym_sequence_actor,
  [18621] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(852), 1,
      sym_sequence_actor,
  [18637] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(851), 1,
      sym_sequence_actor,
  [18653] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(850), 1,
      sym_sequence_actor,
  [18669] = 3,
    ACTIONS(1860), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1858), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18681] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(845), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18697] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(844), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18713] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(843), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18729] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(945), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18745] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(840), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18761] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(788), 1,
      sym_sequence_actor,
  [18777] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(821), 1,
      sym_sequence_actor,
  [18793] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1864), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18807] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(820), 1,
      sym_sequence_actor,
  [18823] = 4,
    ACTIONS(1866), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1868), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18837] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(776), 1,
      sym_sequence_actor,
  [18853] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1873), 1,
      sym__newline,
    ACTIONS(1871), 2,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
  [18867] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(819), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18883] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(818), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18899] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(817), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18915] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(815), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [18931] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(777), 1,
      sym_sequence_actor,
  [18947] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(804), 1,
      sym_sequence_actor,
  [18963] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(803), 1,
      sym_sequence_actor,
  [18979] = 4,
    ACTIONS(1875), 1,
      anon_sym_RBRACE,
    ACTIONS(1877), 1,
      sym__newline,
    STATE(503), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18993] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(690), 1,
      sym_sequence_actor,
  [19009] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(802), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [19025] = 4,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1879), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(532), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19039] = 4,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    ACTIONS(1881), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19053] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(800), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [19069] = 4,
    ACTIONS(1883), 1,
      anon_sym_RBRACE,
    ACTIONS(1885), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19083] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(798), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [19099] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(797), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [19115] = 3,
    STATE(824), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19127] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(761), 1,
      sym_sequence_actor,
  [19143] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(865), 1,
      sym_sequence_actor,
  [19159] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(866), 1,
      sym_sequence_actor,
  [19175] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(758), 1,
      sym_sequence_actor,
  [19191] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1888), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19205] = 4,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1890), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(532), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19219] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(723), 1,
      sym_sequence_actor,
  [19235] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1892), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19249] = 4,
    ACTIONS(1209), 1,
      anon_sym_RBRACE,
    ACTIONS(1790), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19263] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(915), 1,
      sym_sequence_actor,
  [19279] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(918), 1,
      sym_sequence_actor,
  [19295] = 4,
    ACTIONS(1894), 1,
      sym__alpha_num_token,
    STATE(447), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(456), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19309] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(924), 1,
      sym_sequence_actor,
  [19325] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(931), 1,
      sym_sequence_actor,
  [19341] = 4,
    ACTIONS(1896), 1,
      ts_builtin_sym_end,
    ACTIONS(1898), 1,
      sym__newline,
    STATE(611), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19355] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(932), 1,
      sym_sequence_actor,
  [19371] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(934), 1,
      sym_sequence_actor,
  [19387] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1901), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19397] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1903), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(95), 1,
      sym_sequence_text,
    STATE(141), 1,
      sym__sequence_rest_text,
  [19413] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1903), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(94), 1,
      sym_sequence_text,
    STATE(141), 1,
      sym__sequence_rest_text,
  [19429] = 4,
    ACTIONS(1905), 1,
      anon_sym_COMMA,
    ACTIONS(1907), 1,
      sym__newline,
    STATE(625), 1,
      aux_sym_journey_task_actors_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19443] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1903), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(85), 1,
      sym_sequence_text,
    STATE(141), 1,
      sym__sequence_rest_text,
  [19459] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1903), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(86), 1,
      sym_sequence_text,
    STATE(141), 1,
      sym__sequence_rest_text,
  [19475] = 4,
    ACTIONS(1794), 1,
      sym__bquote_string,
    ACTIONS(1909), 1,
      sym__class_name,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19489] = 4,
    ACTIONS(1193), 1,
      anon_sym_RBRACE,
    ACTIONS(1911), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19503] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1913), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19517] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1915), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19527] = 4,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1917), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(532), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19541] = 4,
    ACTIONS(1905), 1,
      anon_sym_COMMA,
    ACTIONS(1919), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_journey_task_actors_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19555] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(940), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [19571] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1921), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19585] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(953), 1,
      sym__sequence_rest_text,
    STATE(956), 1,
      sym_sequence_text,
  [19601] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(953), 1,
      sym__sequence_rest_text,
    STATE(963), 1,
      sym_sequence_text,
  [19617] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(953), 1,
      sym__sequence_rest_text,
    STATE(965), 1,
      sym_sequence_text,
  [19633] = 4,
    ACTIONS(1923), 1,
      anon_sym_COMMA,
    ACTIONS(1926), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_journey_task_actors_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19647] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1928), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(155), 1,
      sym_sequence_text,
    STATE(161), 1,
      sym__sequence_rest_text,
  [19663] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1862), 1,
      sym__sequence_actor_word,
    STATE(491), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(705), 1,
      sym_sequence_actor,
  [19679] = 4,
    ACTIONS(1755), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(320), 1,
      sym_flow_vertex,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19693] = 4,
    ACTIONS(1482), 1,
      ts_builtin_sym_end,
    ACTIONS(1930), 1,
      sym__newline,
    STATE(645), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19707] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1932), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(172), 1,
      sym_sequence_text,
    STATE(197), 1,
      sym__sequence_rest_text,
  [19723] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1932), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(171), 1,
      sym_sequence_text,
    STATE(197), 1,
      sym__sequence_rest_text,
  [19739] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1932), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(170), 1,
      sym_sequence_text,
    STATE(197), 1,
      sym__sequence_rest_text,
  [19755] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1932), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(169), 1,
      sym_sequence_text,
    STATE(197), 1,
      sym__sequence_rest_text,
  [19771] = 4,
    ACTIONS(1490), 1,
      ts_builtin_sym_end,
    ACTIONS(1934), 1,
      sym__newline,
    STATE(645), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19785] = 4,
    ACTIONS(1794), 1,
      sym__bquote_string,
    ACTIONS(1936), 1,
      sym__class_name,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19799] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1938), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19813] = 4,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1940), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(532), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19827] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1942), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19841] = 4,
    ACTIONS(1944), 1,
      ts_builtin_sym_end,
    ACTIONS(1946), 1,
      sym__newline,
    STATE(645), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19855] = 3,
    STATE(227), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1949), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19867] = 4,
    ACTIONS(1490), 1,
      ts_builtin_sym_end,
    ACTIONS(1934), 1,
      sym__newline,
    STATE(635), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19881] = 4,
    ACTIONS(1951), 1,
      ts_builtin_sym_end,
    ACTIONS(1953), 1,
      sym__newline,
    STATE(611), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19895] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1955), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19905] = 3,
    STATE(480), 1,
      sym__gitgraph_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1957), 2,
      aux_sym_pie_label_token1,
      sym__gitgraph_branch_name,
  [19917] = 4,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(1959), 1,
      sym__newline,
    STATE(509), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19931] = 3,
    STATE(477), 1,
      sym__gitgraph_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1961), 2,
      aux_sym_pie_label_token1,
      sym__gitgraph_branch_name,
  [19943] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1963), 3,
      aux_sym_gitgraph_commit_attr_type_token2,
      aux_sym_gitgraph_commit_attr_type_token3,
      aux_sym_gitgraph_commit_attr_type_token4,
  [19953] = 3,
    STATE(833), 1,
      sym__gitgraph_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1965), 2,
      aux_sym_pie_label_token1,
      sym__gitgraph_branch_name,
  [19965] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1967), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(118), 1,
      sym__sequence_rest_text,
    STATE(143), 1,
      sym_sequence_text,
  [19981] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1967), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(118), 1,
      sym__sequence_rest_text,
    STATE(144), 1,
      sym_sequence_text,
  [19997] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1967), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(118), 1,
      sym__sequence_rest_text,
    STATE(145), 1,
      sym_sequence_text,
  [20013] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1967), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(118), 1,
      sym__sequence_rest_text,
    STATE(146), 1,
      sym_sequence_text,
  [20029] = 4,
    ACTIONS(1909), 1,
      sym__class_name,
    ACTIONS(1969), 1,
      sym__bquote_string,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20043] = 4,
    ACTIONS(1971), 1,
      anon_sym_COLON,
    ACTIONS(1973), 1,
      aux_sym_gantt_task_text_token1,
    STATE(521), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20057] = 4,
    ACTIONS(1975), 1,
      ts_builtin_sym_end,
    ACTIONS(1977), 1,
      sym__newline,
    STATE(651), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20071] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(863), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [20087] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(848), 1,
      sym_sequence_actor,
  [20103] = 4,
    ACTIONS(1080), 1,
      ts_builtin_sym_end,
    ACTIONS(1979), 1,
      sym__newline,
    STATE(670), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20117] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(904), 1,
      sym_sequence_actor,
  [20133] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1981), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(577), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20147] = 4,
    ACTIONS(1591), 1,
      sym__alpha_num_token,
    ACTIONS(1662), 1,
      anon_sym_PIPE,
    STATE(389), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20161] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1928), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(156), 1,
      sym_sequence_text,
    STATE(161), 1,
      sym__sequence_rest_text,
  [20177] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(908), 1,
      sym_sequence_text,
    STATE(953), 1,
      sym__sequence_rest_text,
  [20193] = 4,
    ACTIONS(1983), 1,
      ts_builtin_sym_end,
    ACTIONS(1985), 1,
      sym__newline,
    STATE(670), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20207] = 4,
    ACTIONS(1988), 1,
      ts_builtin_sym_end,
    ACTIONS(1990), 1,
      sym__newline,
    STATE(640), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20221] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(983), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [20231] = 3,
    ACTIONS(1994), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1992), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20243] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(779), 1,
      sym_sequence_actor,
  [20259] = 3,
    STATE(227), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20271] = 4,
    ACTIONS(1996), 1,
      ts_builtin_sym_end,
    ACTIONS(1998), 1,
      sym__newline,
    STATE(664), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20285] = 4,
    ACTIONS(2000), 1,
      sym__alpha_num_token,
    STATE(667), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(980), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20299] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1692), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [20309] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2004), 1,
      sym__sequence_actor_word,
    ACTIONS(2002), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [20323] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2006), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [20333] = 4,
    ACTIONS(2008), 1,
      sym__alpha_num_token,
    STATE(413), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(977), 1,
      sym_flow_vertex_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20347] = 4,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(1959), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20361] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2012), 1,
      sym__sequence_actor_word,
    ACTIONS(2010), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [20375] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2016), 1,
      sym__sequence_actor_word,
    ACTIONS(2014), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [20389] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1928), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(157), 1,
      sym_sequence_text,
    STATE(161), 1,
      sym__sequence_rest_text,
  [20405] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1928), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym_sequence_text,
    STATE(161), 1,
      sym__sequence_rest_text,
  [20421] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__sequence_actor_word,
    STATE(258), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(849), 1,
      sym_sequence_actor,
  [20437] = 3,
    STATE(983), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20449] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(795), 1,
      sym__sequence_rest_text,
  [20462] = 3,
    ACTIONS(2018), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2020), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20473] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2022), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20482] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1739), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20491] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_class_label_token1,
    STATE(252), 1,
      sym_state_description,
  [20504] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2024), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20513] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1737), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20522] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1803), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20531] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1731), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20540] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2026), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20549] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2028), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20558] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2030), 2,
      anon_sym_SEMI,
      sym__newline,
  [20567] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_class_label_token1,
    STATE(234), 1,
      sym_state_description,
  [20580] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2032), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20589] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2034), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20598] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(899), 1,
      sym__sequence_rest_text,
  [20611] = 3,
    ACTIONS(2036), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2038), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20622] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2040), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20631] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1676), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20640] = 3,
    ACTIONS(2042), 1,
      anon_sym_COLON,
    ACTIONS(2044), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20651] = 3,
    ACTIONS(2046), 1,
      sym__journey_score,
    STATE(889), 1,
      sym_journey_task_score,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20662] = 3,
    ACTIONS(2048), 1,
      anon_sym_COLON,
    ACTIONS(2050), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20673] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2052), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20682] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2054), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20691] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(976), 1,
      sym__sequence_rest_text,
  [20704] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2056), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20713] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1688), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20722] = 3,
    ACTIONS(2058), 1,
      anon_sym_COLON,
    ACTIONS(2060), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20733] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2062), 2,
      anon_sym_SEMI,
      sym__newline,
  [20742] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2064), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [20751] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2066), 1,
      sym__mindmap_text,
    STATE(213), 1,
      sym_mmap_node_id,
  [20764] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2068), 2,
      anon_sym_SEMI,
      sym__newline,
  [20773] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2070), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20782] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2072), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20791] = 3,
    ACTIONS(2074), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2076), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20802] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2078), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20811] = 3,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    STATE(266), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20822] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2080), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20831] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2082), 1,
      sym__journey_section_title,
    STATE(867), 1,
      sym_journey_section_title,
  [20844] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2084), 1,
      sym__journey_title_text,
    STATE(892), 1,
      sym_journey_title_text,
  [20857] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2086), 2,
      anon_sym_COMMA,
      sym__newline,
  [20866] = 3,
    ACTIONS(2088), 1,
      aux_sym_gitgraph_commit_attr_id_token1,
    STATE(894), 1,
      sym_gitgraph_cherry_pick_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20877] = 3,
    ACTIONS(2090), 1,
      sym__gitgraph_branch_name,
    STATE(952), 1,
      sym_gitgraph_branch_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20888] = 3,
    ACTIONS(2090), 1,
      sym__gitgraph_branch_name,
    STATE(962), 1,
      sym_gitgraph_branch_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20899] = 3,
    ACTIONS(2090), 1,
      sym__gitgraph_branch_name,
    STATE(838), 1,
      sym_gitgraph_branch_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20910] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(272), 1,
      sym_gantt_meta_format,
  [20923] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(839), 1,
      sym__sequence_rest_text,
  [20936] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2094), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20945] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(283), 1,
      sym_gantt_meta_format,
  [20958] = 3,
    ACTIONS(2096), 1,
      anon_sym_PIPE,
    ACTIONS(2098), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20969] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2100), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20978] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(286), 1,
      sym_gantt_meta_format,
  [20991] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1983), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21000] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(832), 1,
      sym__sequence_rest_text,
  [21013] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(827), 1,
      sym__sequence_rest_text,
  [21026] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(299), 1,
      sym_gantt_meta_format,
  [21039] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2102), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21048] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(814), 1,
      sym__sequence_rest_text,
  [21061] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(811), 1,
      sym__sequence_rest_text,
  [21074] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(298), 1,
      sym_gantt_meta_format,
  [21087] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
  [21100] = 3,
    ACTIONS(1484), 1,
      sym__er_alphanum,
    STATE(792), 1,
      sym_er_entity_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21111] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2104), 2,
      anon_sym_RBRACE,
      sym__newline,
  [21120] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2106), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21129] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(296), 1,
      sym_gantt_meta_format,
  [21142] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(293), 1,
      sym_gantt_meta_format,
  [21155] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(289), 1,
      sym_gantt_meta_format,
  [21168] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1883), 2,
      anon_sym_RBRACE,
      sym__newline,
  [21177] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1727), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21186] = 3,
    ACTIONS(2108), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2110), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21197] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(869), 1,
      sym__sequence_rest_text,
  [21210] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(823), 1,
      sym__sequence_rest_text,
  [21223] = 3,
    ACTIONS(2112), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2114), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21234] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(835), 1,
      sym__sequence_rest_text,
  [21247] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2116), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [21256] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2118), 1,
      sym__journey_actor,
    STATE(825), 1,
      sym_journey_task_actors,
  [21269] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2120), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21278] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2092), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(280), 1,
      sym_gantt_meta_format,
  [21291] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2122), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21300] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2124), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21309] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2126), 1,
      ts_builtin_sym_end,
    ACTIONS(2128), 1,
      sym__whitespace,
    STATE(772), 1,
      sym_mmap_node,
  [21322] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2130), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [21331] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2132), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21340] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1896), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21349] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2134), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21358] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2136), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21367] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1951), 1,
      ts_builtin_sym_end,
    ACTIONS(2128), 1,
      sym__whitespace,
    STATE(772), 1,
      sym_mmap_node,
  [21380] = 3,
    ACTIONS(2138), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2140), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21391] = 3,
    ACTIONS(2142), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2144), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21402] = 3,
    ACTIONS(2146), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(2148), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21413] = 3,
    ACTIONS(2150), 1,
      anon_sym_COLON,
    ACTIONS(2152), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21424] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2154), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21433] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2156), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21442] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2158), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21451] = 3,
    ACTIONS(2160), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(2162), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21462] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2164), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21471] = 3,
    ACTIONS(2166), 1,
      sym__er_alphanum,
    STATE(342), 1,
      sym_er_attribute_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21482] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1926), 2,
      anon_sym_COMMA,
      sym__newline,
  [21491] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1944), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21500] = 3,
    ACTIONS(2168), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2170), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21511] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1520), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21520] = 2,
    ACTIONS(2172), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21528] = 2,
    ACTIONS(2174), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21536] = 2,
    ACTIONS(2176), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21544] = 2,
    ACTIONS(2178), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21552] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2180), 1,
      sym_type_directive,
  [21562] = 2,
    ACTIONS(2182), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21570] = 2,
    ACTIONS(2184), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21578] = 2,
    ACTIONS(2186), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21586] = 2,
    ACTIONS(2188), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21594] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2190), 1,
      sym__mindmap_text,
  [21604] = 2,
    ACTIONS(2192), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21612] = 2,
    ACTIONS(2194), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21620] = 2,
    ACTIONS(2196), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21628] = 2,
    ACTIONS(2198), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21636] = 2,
    ACTIONS(2200), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21644] = 2,
    ACTIONS(2202), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21652] = 2,
    ACTIONS(2204), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21660] = 2,
    ACTIONS(2206), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21668] = 2,
    ACTIONS(2208), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21676] = 2,
    ACTIONS(2210), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21684] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2212), 1,
      aux_sym_mmap_class_token2,
  [21694] = 2,
    ACTIONS(2214), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21702] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2216), 1,
      sym__journey_actor,
  [21712] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2218), 1,
      aux_sym_mmap_icon_token2,
  [21722] = 2,
    ACTIONS(2220), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21730] = 2,
    ACTIONS(2222), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21738] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2224), 1,
      sym__whitespace,
    ACTIONS(2226), 1,
      sym__journey_actor,
  [21748] = 2,
    ACTIONS(2228), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21756] = 2,
    ACTIONS(2230), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21764] = 2,
    ACTIONS(2232), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21772] = 2,
    ACTIONS(2234), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21780] = 2,
    ACTIONS(2236), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21788] = 2,
    ACTIONS(2238), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21796] = 2,
    ACTIONS(2240), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21804] = 2,
    ACTIONS(2242), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21812] = 2,
    ACTIONS(2244), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21820] = 2,
    ACTIONS(2246), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21828] = 2,
    ACTIONS(2248), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21836] = 2,
    ACTIONS(2250), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21844] = 2,
    ACTIONS(2252), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21852] = 2,
    ACTIONS(2254), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21860] = 2,
    ACTIONS(2256), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21868] = 2,
    ACTIONS(2258), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21876] = 2,
    ACTIONS(2260), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21884] = 2,
    ACTIONS(2262), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21892] = 2,
    ACTIONS(2264), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21900] = 2,
    ACTIONS(2266), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21908] = 2,
    ACTIONS(2268), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21916] = 2,
    ACTIONS(2270), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21924] = 2,
    ACTIONS(2272), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21932] = 2,
    ACTIONS(2274), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21940] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2276), 1,
      sym_pie_value,
  [21950] = 2,
    ACTIONS(2278), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21958] = 2,
    ACTIONS(2280), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21966] = 2,
    ACTIONS(2282), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21974] = 2,
    ACTIONS(2284), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21982] = 2,
    ACTIONS(2286), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21990] = 2,
    ACTIONS(2288), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21998] = 2,
    ACTIONS(2290), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22006] = 2,
    ACTIONS(2150), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22014] = 2,
    ACTIONS(2292), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22022] = 2,
    ACTIONS(2294), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22030] = 2,
    ACTIONS(2296), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22038] = 2,
    ACTIONS(2298), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22046] = 2,
    ACTIONS(2300), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22054] = 2,
    ACTIONS(2302), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22062] = 2,
    ACTIONS(2304), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22070] = 2,
    ACTIONS(2306), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22078] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2308), 1,
      aux_sym_directive_token1,
  [22088] = 2,
    ACTIONS(2310), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22096] = 2,
    ACTIONS(2312), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22104] = 2,
    ACTIONS(2314), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22112] = 2,
    ACTIONS(2316), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22120] = 2,
    ACTIONS(2318), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22128] = 2,
    ACTIONS(2320), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22136] = 2,
    ACTIONS(2322), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22144] = 2,
    ACTIONS(2324), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22152] = 2,
    ACTIONS(2326), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22160] = 2,
    ACTIONS(2328), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22168] = 2,
    ACTIONS(2330), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22176] = 2,
    ACTIONS(2332), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22184] = 2,
    ACTIONS(2334), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22192] = 2,
    ACTIONS(2336), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22200] = 2,
    ACTIONS(2338), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22208] = 2,
    ACTIONS(2340), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22216] = 2,
    ACTIONS(2342), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22224] = 2,
    ACTIONS(2344), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22232] = 2,
    ACTIONS(2346), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22240] = 2,
    ACTIONS(2348), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22248] = 2,
    ACTIONS(2350), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22256] = 2,
    ACTIONS(2352), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22264] = 2,
    ACTIONS(2354), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22272] = 2,
    ACTIONS(2356), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22280] = 2,
    ACTIONS(2358), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22288] = 2,
    ACTIONS(2360), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22296] = 2,
    ACTIONS(2362), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22304] = 2,
    ACTIONS(2364), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22312] = 2,
    ACTIONS(2366), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22320] = 2,
    ACTIONS(2368), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22328] = 2,
    ACTIONS(2370), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22336] = 2,
    ACTIONS(2372), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22344] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2374), 1,
      sym__sequence_actor_word,
  [22354] = 2,
    ACTIONS(2376), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22362] = 2,
    ACTIONS(2378), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22370] = 2,
    ACTIONS(2380), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22378] = 2,
    ACTIONS(2382), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22386] = 2,
    ACTIONS(2384), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22394] = 2,
    ACTIONS(2386), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22402] = 2,
    ACTIONS(2388), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22410] = 2,
    ACTIONS(2390), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22418] = 2,
    ACTIONS(2392), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22426] = 2,
    ACTIONS(2394), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22434] = 2,
    ACTIONS(2396), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22442] = 2,
    ACTIONS(2398), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22450] = 2,
    ACTIONS(2400), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22458] = 2,
    ACTIONS(2402), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22466] = 2,
    ACTIONS(2404), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22474] = 2,
    ACTIONS(2406), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22482] = 2,
    ACTIONS(2408), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22490] = 2,
    ACTIONS(2410), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22498] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2128), 1,
      sym__whitespace,
    STATE(558), 1,
      sym_mmap_node,
  [22508] = 2,
    ACTIONS(2412), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22516] = 2,
    ACTIONS(1674), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22524] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2414), 1,
      sym__sequence_actor_word,
  [22534] = 2,
    ACTIONS(2416), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22542] = 2,
    ACTIONS(2418), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22550] = 2,
    ACTIONS(2420), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22558] = 2,
    ACTIONS(2422), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22566] = 2,
    ACTIONS(2424), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22574] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2426), 1,
      sym__sequence_actor_word,
  [22584] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2428), 1,
      sym__sequence_actor_word,
  [22594] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2430), 1,
      sym__sequence_actor_word,
  [22604] = 2,
    ACTIONS(2432), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22612] = 2,
    ACTIONS(2434), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22620] = 2,
    ACTIONS(2436), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22628] = 2,
    ACTIONS(2058), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22636] = 2,
    ACTIONS(2438), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22644] = 2,
    ACTIONS(2440), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22652] = 2,
    ACTIONS(2442), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22660] = 2,
    ACTIONS(2444), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22668] = 2,
    ACTIONS(2446), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22676] = 2,
    ACTIONS(2448), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22684] = 2,
    ACTIONS(2450), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22692] = 2,
    ACTIONS(2452), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22700] = 2,
    ACTIONS(2454), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22708] = 2,
    ACTIONS(775), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22716] = 2,
    ACTIONS(2456), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22724] = 2,
    ACTIONS(2458), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22732] = 2,
    ACTIONS(2460), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22740] = 2,
    ACTIONS(2462), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22748] = 2,
    ACTIONS(2464), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22756] = 2,
    ACTIONS(2048), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22764] = 2,
    ACTIONS(2466), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22772] = 2,
    ACTIONS(2468), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22780] = 2,
    ACTIONS(2470), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22788] = 2,
    ACTIONS(2472), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22796] = 2,
    ACTIONS(2474), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22804] = 2,
    ACTIONS(2476), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22812] = 2,
    ACTIONS(2478), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22820] = 2,
    ACTIONS(2480), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22828] = 2,
    ACTIONS(2482), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22836] = 2,
    ACTIONS(2484), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22844] = 2,
    ACTIONS(2486), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22852] = 2,
    ACTIONS(771), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22860] = 2,
    ACTIONS(2488), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22868] = 2,
    ACTIONS(2490), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22876] = 2,
    ACTIONS(2492), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22884] = 2,
    ACTIONS(2042), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22892] = 2,
    ACTIONS(2494), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22900] = 2,
    ACTIONS(2496), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22908] = 2,
    ACTIONS(2498), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22916] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2128), 1,
      sym__whitespace,
    STATE(772), 1,
      sym_mmap_node,
  [22926] = 2,
    ACTIONS(2500), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22934] = 2,
    ACTIONS(2502), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22942] = 2,
    ACTIONS(2504), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22950] = 2,
    ACTIONS(2506), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22958] = 2,
    ACTIONS(2508), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22966] = 2,
    ACTIONS(2510), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22974] = 2,
    ACTIONS(2512), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22982] = 2,
    ACTIONS(2514), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22990] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2516), 1,
      sym_gantt_task_data,
  [23000] = 2,
    ACTIONS(2518), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23008] = 2,
    ACTIONS(2520), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23016] = 2,
    ACTIONS(2522), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23024] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2524), 1,
      sym__mindmap_text,
  [23034] = 2,
    ACTIONS(2526), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23042] = 2,
    ACTIONS(2528), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23050] = 2,
    ACTIONS(2530), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23058] = 2,
    ACTIONS(2532), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23066] = 2,
    ACTIONS(2534), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23074] = 2,
    ACTIONS(2536), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23082] = 2,
    ACTIONS(2538), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23090] = 2,
    ACTIONS(2540), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23098] = 2,
    ACTIONS(2542), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [23106] = 2,
    ACTIONS(2544), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1050,
  [SMALL_STATE(13)] = 1155,
  [SMALL_STATE(14)] = 1260,
  [SMALL_STATE(15)] = 1360,
  [SMALL_STATE(16)] = 1460,
  [SMALL_STATE(17)] = 1560,
  [SMALL_STATE(18)] = 1660,
  [SMALL_STATE(19)] = 1760,
  [SMALL_STATE(20)] = 1859,
  [SMALL_STATE(21)] = 1958,
  [SMALL_STATE(22)] = 2057,
  [SMALL_STATE(23)] = 2156,
  [SMALL_STATE(24)] = 2255,
  [SMALL_STATE(25)] = 2354,
  [SMALL_STATE(26)] = 2451,
  [SMALL_STATE(27)] = 2550,
  [SMALL_STATE(28)] = 2649,
  [SMALL_STATE(29)] = 2748,
  [SMALL_STATE(30)] = 2847,
  [SMALL_STATE(31)] = 2946,
  [SMALL_STATE(32)] = 3045,
  [SMALL_STATE(33)] = 3144,
  [SMALL_STATE(34)] = 3243,
  [SMALL_STATE(35)] = 3342,
  [SMALL_STATE(36)] = 3439,
  [SMALL_STATE(37)] = 3538,
  [SMALL_STATE(38)] = 3635,
  [SMALL_STATE(39)] = 3734,
  [SMALL_STATE(40)] = 3833,
  [SMALL_STATE(41)] = 3932,
  [SMALL_STATE(42)] = 4031,
  [SMALL_STATE(43)] = 4130,
  [SMALL_STATE(44)] = 4229,
  [SMALL_STATE(45)] = 4328,
  [SMALL_STATE(46)] = 4427,
  [SMALL_STATE(47)] = 4526,
  [SMALL_STATE(48)] = 4622,
  [SMALL_STATE(49)] = 4718,
  [SMALL_STATE(50)] = 4814,
  [SMALL_STATE(51)] = 4910,
  [SMALL_STATE(52)] = 5006,
  [SMALL_STATE(53)] = 5102,
  [SMALL_STATE(54)] = 5198,
  [SMALL_STATE(55)] = 5294,
  [SMALL_STATE(56)] = 5390,
  [SMALL_STATE(57)] = 5486,
  [SMALL_STATE(58)] = 5582,
  [SMALL_STATE(59)] = 5678,
  [SMALL_STATE(60)] = 5774,
  [SMALL_STATE(61)] = 5870,
  [SMALL_STATE(62)] = 5966,
  [SMALL_STATE(63)] = 6044,
  [SMALL_STATE(64)] = 6111,
  [SMALL_STATE(65)] = 6178,
  [SMALL_STATE(66)] = 6245,
  [SMALL_STATE(67)] = 6312,
  [SMALL_STATE(68)] = 6379,
  [SMALL_STATE(69)] = 6442,
  [SMALL_STATE(70)] = 6505,
  [SMALL_STATE(71)] = 6568,
  [SMALL_STATE(72)] = 6631,
  [SMALL_STATE(73)] = 6694,
  [SMALL_STATE(74)] = 6757,
  [SMALL_STATE(75)] = 6820,
  [SMALL_STATE(76)] = 6883,
  [SMALL_STATE(77)] = 6946,
  [SMALL_STATE(78)] = 7009,
  [SMALL_STATE(79)] = 7072,
  [SMALL_STATE(80)] = 7135,
  [SMALL_STATE(81)] = 7195,
  [SMALL_STATE(82)] = 7255,
  [SMALL_STATE(83)] = 7315,
  [SMALL_STATE(84)] = 7375,
  [SMALL_STATE(85)] = 7407,
  [SMALL_STATE(86)] = 7439,
  [SMALL_STATE(87)] = 7471,
  [SMALL_STATE(88)] = 7503,
  [SMALL_STATE(89)] = 7535,
  [SMALL_STATE(90)] = 7567,
  [SMALL_STATE(91)] = 7599,
  [SMALL_STATE(92)] = 7631,
  [SMALL_STATE(93)] = 7663,
  [SMALL_STATE(94)] = 7695,
  [SMALL_STATE(95)] = 7727,
  [SMALL_STATE(96)] = 7759,
  [SMALL_STATE(97)] = 7791,
  [SMALL_STATE(98)] = 7823,
  [SMALL_STATE(99)] = 7855,
  [SMALL_STATE(100)] = 7887,
  [SMALL_STATE(101)] = 7919,
  [SMALL_STATE(102)] = 7951,
  [SMALL_STATE(103)] = 7983,
  [SMALL_STATE(104)] = 8015,
  [SMALL_STATE(105)] = 8047,
  [SMALL_STATE(106)] = 8079,
  [SMALL_STATE(107)] = 8111,
  [SMALL_STATE(108)] = 8143,
  [SMALL_STATE(109)] = 8175,
  [SMALL_STATE(110)] = 8207,
  [SMALL_STATE(111)] = 8239,
  [SMALL_STATE(112)] = 8271,
  [SMALL_STATE(113)] = 8303,
  [SMALL_STATE(114)] = 8335,
  [SMALL_STATE(115)] = 8367,
  [SMALL_STATE(116)] = 8399,
  [SMALL_STATE(117)] = 8431,
  [SMALL_STATE(118)] = 8463,
  [SMALL_STATE(119)] = 8495,
  [SMALL_STATE(120)] = 8527,
  [SMALL_STATE(121)] = 8559,
  [SMALL_STATE(122)] = 8591,
  [SMALL_STATE(123)] = 8623,
  [SMALL_STATE(124)] = 8655,
  [SMALL_STATE(125)] = 8687,
  [SMALL_STATE(126)] = 8719,
  [SMALL_STATE(127)] = 8751,
  [SMALL_STATE(128)] = 8783,
  [SMALL_STATE(129)] = 8815,
  [SMALL_STATE(130)] = 8847,
  [SMALL_STATE(131)] = 8879,
  [SMALL_STATE(132)] = 8911,
  [SMALL_STATE(133)] = 8943,
  [SMALL_STATE(134)] = 8975,
  [SMALL_STATE(135)] = 9007,
  [SMALL_STATE(136)] = 9039,
  [SMALL_STATE(137)] = 9071,
  [SMALL_STATE(138)] = 9103,
  [SMALL_STATE(139)] = 9135,
  [SMALL_STATE(140)] = 9167,
  [SMALL_STATE(141)] = 9199,
  [SMALL_STATE(142)] = 9231,
  [SMALL_STATE(143)] = 9263,
  [SMALL_STATE(144)] = 9295,
  [SMALL_STATE(145)] = 9327,
  [SMALL_STATE(146)] = 9359,
  [SMALL_STATE(147)] = 9391,
  [SMALL_STATE(148)] = 9423,
  [SMALL_STATE(149)] = 9455,
  [SMALL_STATE(150)] = 9486,
  [SMALL_STATE(151)] = 9517,
  [SMALL_STATE(152)] = 9548,
  [SMALL_STATE(153)] = 9579,
  [SMALL_STATE(154)] = 9610,
  [SMALL_STATE(155)] = 9641,
  [SMALL_STATE(156)] = 9672,
  [SMALL_STATE(157)] = 9703,
  [SMALL_STATE(158)] = 9734,
  [SMALL_STATE(159)] = 9765,
  [SMALL_STATE(160)] = 9796,
  [SMALL_STATE(161)] = 9827,
  [SMALL_STATE(162)] = 9858,
  [SMALL_STATE(163)] = 9889,
  [SMALL_STATE(164)] = 9920,
  [SMALL_STATE(165)] = 9951,
  [SMALL_STATE(166)] = 9982,
  [SMALL_STATE(167)] = 10013,
  [SMALL_STATE(168)] = 10044,
  [SMALL_STATE(169)] = 10075,
  [SMALL_STATE(170)] = 10106,
  [SMALL_STATE(171)] = 10137,
  [SMALL_STATE(172)] = 10168,
  [SMALL_STATE(173)] = 10199,
  [SMALL_STATE(174)] = 10230,
  [SMALL_STATE(175)] = 10261,
  [SMALL_STATE(176)] = 10292,
  [SMALL_STATE(177)] = 10323,
  [SMALL_STATE(178)] = 10354,
  [SMALL_STATE(179)] = 10385,
  [SMALL_STATE(180)] = 10416,
  [SMALL_STATE(181)] = 10447,
  [SMALL_STATE(182)] = 10478,
  [SMALL_STATE(183)] = 10509,
  [SMALL_STATE(184)] = 10540,
  [SMALL_STATE(185)] = 10571,
  [SMALL_STATE(186)] = 10602,
  [SMALL_STATE(187)] = 10633,
  [SMALL_STATE(188)] = 10664,
  [SMALL_STATE(189)] = 10695,
  [SMALL_STATE(190)] = 10726,
  [SMALL_STATE(191)] = 10757,
  [SMALL_STATE(192)] = 10788,
  [SMALL_STATE(193)] = 10819,
  [SMALL_STATE(194)] = 10850,
  [SMALL_STATE(195)] = 10881,
  [SMALL_STATE(196)] = 10912,
  [SMALL_STATE(197)] = 10943,
  [SMALL_STATE(198)] = 10974,
  [SMALL_STATE(199)] = 11005,
  [SMALL_STATE(200)] = 11036,
  [SMALL_STATE(201)] = 11067,
  [SMALL_STATE(202)] = 11098,
  [SMALL_STATE(203)] = 11129,
  [SMALL_STATE(204)] = 11160,
  [SMALL_STATE(205)] = 11191,
  [SMALL_STATE(206)] = 11222,
  [SMALL_STATE(207)] = 11253,
  [SMALL_STATE(208)] = 11284,
  [SMALL_STATE(209)] = 11315,
  [SMALL_STATE(210)] = 11346,
  [SMALL_STATE(211)] = 11377,
  [SMALL_STATE(212)] = 11408,
  [SMALL_STATE(213)] = 11459,
  [SMALL_STATE(214)] = 11510,
  [SMALL_STATE(215)] = 11555,
  [SMALL_STATE(216)] = 11592,
  [SMALL_STATE(217)] = 11627,
  [SMALL_STATE(218)] = 11658,
  [SMALL_STATE(219)] = 11695,
  [SMALL_STATE(220)] = 11726,
  [SMALL_STATE(221)] = 11763,
  [SMALL_STATE(222)] = 11801,
  [SMALL_STATE(223)] = 11825,
  [SMALL_STATE(224)] = 11855,
  [SMALL_STATE(225)] = 11887,
  [SMALL_STATE(226)] = 11924,
  [SMALL_STATE(227)] = 11961,
  [SMALL_STATE(228)] = 11986,
  [SMALL_STATE(229)] = 12009,
  [SMALL_STATE(230)] = 12036,
  [SMALL_STATE(231)] = 12059,
  [SMALL_STATE(232)] = 12088,
  [SMALL_STATE(233)] = 12125,
  [SMALL_STATE(234)] = 12147,
  [SMALL_STATE(235)] = 12169,
  [SMALL_STATE(236)] = 12191,
  [SMALL_STATE(237)] = 12213,
  [SMALL_STATE(238)] = 12239,
  [SMALL_STATE(239)] = 12261,
  [SMALL_STATE(240)] = 12297,
  [SMALL_STATE(241)] = 12319,
  [SMALL_STATE(242)] = 12347,
  [SMALL_STATE(243)] = 12369,
  [SMALL_STATE(244)] = 12391,
  [SMALL_STATE(245)] = 12413,
  [SMALL_STATE(246)] = 12435,
  [SMALL_STATE(247)] = 12457,
  [SMALL_STATE(248)] = 12479,
  [SMALL_STATE(249)] = 12505,
  [SMALL_STATE(250)] = 12527,
  [SMALL_STATE(251)] = 12549,
  [SMALL_STATE(252)] = 12571,
  [SMALL_STATE(253)] = 12593,
  [SMALL_STATE(254)] = 12615,
  [SMALL_STATE(255)] = 12637,
  [SMALL_STATE(256)] = 12677,
  [SMALL_STATE(257)] = 12699,
  [SMALL_STATE(258)] = 12721,
  [SMALL_STATE(259)] = 12749,
  [SMALL_STATE(260)] = 12771,
  [SMALL_STATE(261)] = 12793,
  [SMALL_STATE(262)] = 12831,
  [SMALL_STATE(263)] = 12853,
  [SMALL_STATE(264)] = 12875,
  [SMALL_STATE(265)] = 12911,
  [SMALL_STATE(266)] = 12945,
  [SMALL_STATE(267)] = 12967,
  [SMALL_STATE(268)] = 13007,
  [SMALL_STATE(269)] = 13047,
  [SMALL_STATE(270)] = 13085,
  [SMALL_STATE(271)] = 13107,
  [SMALL_STATE(272)] = 13129,
  [SMALL_STATE(273)] = 13150,
  [SMALL_STATE(274)] = 13187,
  [SMALL_STATE(275)] = 13208,
  [SMALL_STATE(276)] = 13245,
  [SMALL_STATE(277)] = 13264,
  [SMALL_STATE(278)] = 13285,
  [SMALL_STATE(279)] = 13306,
  [SMALL_STATE(280)] = 13327,
  [SMALL_STATE(281)] = 13348,
  [SMALL_STATE(282)] = 13385,
  [SMALL_STATE(283)] = 13422,
  [SMALL_STATE(284)] = 13443,
  [SMALL_STATE(285)] = 13480,
  [SMALL_STATE(286)] = 13515,
  [SMALL_STATE(287)] = 13536,
  [SMALL_STATE(288)] = 13573,
  [SMALL_STATE(289)] = 13594,
  [SMALL_STATE(290)] = 13615,
  [SMALL_STATE(291)] = 13652,
  [SMALL_STATE(292)] = 13689,
  [SMALL_STATE(293)] = 13726,
  [SMALL_STATE(294)] = 13747,
  [SMALL_STATE(295)] = 13782,
  [SMALL_STATE(296)] = 13803,
  [SMALL_STATE(297)] = 13824,
  [SMALL_STATE(298)] = 13861,
  [SMALL_STATE(299)] = 13882,
  [SMALL_STATE(300)] = 13903,
  [SMALL_STATE(301)] = 13927,
  [SMALL_STATE(302)] = 13961,
  [SMALL_STATE(303)] = 13995,
  [SMALL_STATE(304)] = 14019,
  [SMALL_STATE(305)] = 14047,
  [SMALL_STATE(306)] = 14075,
  [SMALL_STATE(307)] = 14109,
  [SMALL_STATE(308)] = 14137,
  [SMALL_STATE(309)] = 14161,
  [SMALL_STATE(310)] = 14185,
  [SMALL_STATE(311)] = 14219,
  [SMALL_STATE(312)] = 14253,
  [SMALL_STATE(313)] = 14271,
  [SMALL_STATE(314)] = 14305,
  [SMALL_STATE(315)] = 14333,
  [SMALL_STATE(316)] = 14367,
  [SMALL_STATE(317)] = 14391,
  [SMALL_STATE(318)] = 14419,
  [SMALL_STATE(319)] = 14453,
  [SMALL_STATE(320)] = 14472,
  [SMALL_STATE(321)] = 14491,
  [SMALL_STATE(322)] = 14510,
  [SMALL_STATE(323)] = 14529,
  [SMALL_STATE(324)] = 14550,
  [SMALL_STATE(325)] = 14569,
  [SMALL_STATE(326)] = 14588,
  [SMALL_STATE(327)] = 14607,
  [SMALL_STATE(328)] = 14626,
  [SMALL_STATE(329)] = 14645,
  [SMALL_STATE(330)] = 14664,
  [SMALL_STATE(331)] = 14683,
  [SMALL_STATE(332)] = 14702,
  [SMALL_STATE(333)] = 14721,
  [SMALL_STATE(334)] = 14740,
  [SMALL_STATE(335)] = 14759,
  [SMALL_STATE(336)] = 14778,
  [SMALL_STATE(337)] = 14797,
  [SMALL_STATE(338)] = 14816,
  [SMALL_STATE(339)] = 14847,
  [SMALL_STATE(340)] = 14878,
  [SMALL_STATE(341)] = 14896,
  [SMALL_STATE(342)] = 14920,
  [SMALL_STATE(343)] = 14950,
  [SMALL_STATE(344)] = 14978,
  [SMALL_STATE(345)] = 15006,
  [SMALL_STATE(346)] = 15034,
  [SMALL_STATE(347)] = 15060,
  [SMALL_STATE(348)] = 15088,
  [SMALL_STATE(349)] = 15112,
  [SMALL_STATE(350)] = 15138,
  [SMALL_STATE(351)] = 15158,
  [SMALL_STATE(352)] = 15176,
  [SMALL_STATE(353)] = 15206,
  [SMALL_STATE(354)] = 15232,
  [SMALL_STATE(355)] = 15256,
  [SMALL_STATE(356)] = 15280,
  [SMALL_STATE(357)] = 15306,
  [SMALL_STATE(358)] = 15330,
  [SMALL_STATE(359)] = 15348,
  [SMALL_STATE(360)] = 15366,
  [SMALL_STATE(361)] = 15391,
  [SMALL_STATE(362)] = 15416,
  [SMALL_STATE(363)] = 15439,
  [SMALL_STATE(364)] = 15464,
  [SMALL_STATE(365)] = 15487,
  [SMALL_STATE(366)] = 15509,
  [SMALL_STATE(367)] = 15523,
  [SMALL_STATE(368)] = 15539,
  [SMALL_STATE(369)] = 15561,
  [SMALL_STATE(370)] = 15583,
  [SMALL_STATE(371)] = 15609,
  [SMALL_STATE(372)] = 15623,
  [SMALL_STATE(373)] = 15639,
  [SMALL_STATE(374)] = 15665,
  [SMALL_STATE(375)] = 15679,
  [SMALL_STATE(376)] = 15693,
  [SMALL_STATE(377)] = 15719,
  [SMALL_STATE(378)] = 15745,
  [SMALL_STATE(379)] = 15767,
  [SMALL_STATE(380)] = 15781,
  [SMALL_STATE(381)] = 15795,
  [SMALL_STATE(382)] = 15809,
  [SMALL_STATE(383)] = 15829,
  [SMALL_STATE(384)] = 15843,
  [SMALL_STATE(385)] = 15857,
  [SMALL_STATE(386)] = 15871,
  [SMALL_STATE(387)] = 15896,
  [SMALL_STATE(388)] = 15911,
  [SMALL_STATE(389)] = 15930,
  [SMALL_STATE(390)] = 15947,
  [SMALL_STATE(391)] = 15968,
  [SMALL_STATE(392)] = 15989,
  [SMALL_STATE(393)] = 16010,
  [SMALL_STATE(394)] = 16025,
  [SMALL_STATE(395)] = 16040,
  [SMALL_STATE(396)] = 16055,
  [SMALL_STATE(397)] = 16070,
  [SMALL_STATE(398)] = 16091,
  [SMALL_STATE(399)] = 16114,
  [SMALL_STATE(400)] = 16135,
  [SMALL_STATE(401)] = 16150,
  [SMALL_STATE(402)] = 16173,
  [SMALL_STATE(403)] = 16188,
  [SMALL_STATE(404)] = 16205,
  [SMALL_STATE(405)] = 16224,
  [SMALL_STATE(406)] = 16245,
  [SMALL_STATE(407)] = 16263,
  [SMALL_STATE(408)] = 16281,
  [SMALL_STATE(409)] = 16301,
  [SMALL_STATE(410)] = 16313,
  [SMALL_STATE(411)] = 16333,
  [SMALL_STATE(412)] = 16351,
  [SMALL_STATE(413)] = 16369,
  [SMALL_STATE(414)] = 16385,
  [SMALL_STATE(415)] = 16401,
  [SMALL_STATE(416)] = 16419,
  [SMALL_STATE(417)] = 16437,
  [SMALL_STATE(418)] = 16449,
  [SMALL_STATE(419)] = 16469,
  [SMALL_STATE(420)] = 16489,
  [SMALL_STATE(421)] = 16509,
  [SMALL_STATE(422)] = 16529,
  [SMALL_STATE(423)] = 16549,
  [SMALL_STATE(424)] = 16569,
  [SMALL_STATE(425)] = 16587,
  [SMALL_STATE(426)] = 16603,
  [SMALL_STATE(427)] = 16621,
  [SMALL_STATE(428)] = 16639,
  [SMALL_STATE(429)] = 16651,
  [SMALL_STATE(430)] = 16663,
  [SMALL_STATE(431)] = 16675,
  [SMALL_STATE(432)] = 16693,
  [SMALL_STATE(433)] = 16711,
  [SMALL_STATE(434)] = 16729,
  [SMALL_STATE(435)] = 16741,
  [SMALL_STATE(436)] = 16759,
  [SMALL_STATE(437)] = 16771,
  [SMALL_STATE(438)] = 16789,
  [SMALL_STATE(439)] = 16807,
  [SMALL_STATE(440)] = 16825,
  [SMALL_STATE(441)] = 16837,
  [SMALL_STATE(442)] = 16849,
  [SMALL_STATE(443)] = 16861,
  [SMALL_STATE(444)] = 16879,
  [SMALL_STATE(445)] = 16899,
  [SMALL_STATE(446)] = 16919,
  [SMALL_STATE(447)] = 16935,
  [SMALL_STATE(448)] = 16951,
  [SMALL_STATE(449)] = 16969,
  [SMALL_STATE(450)] = 16987,
  [SMALL_STATE(451)] = 17005,
  [SMALL_STATE(452)] = 17023,
  [SMALL_STATE(453)] = 17039,
  [SMALL_STATE(454)] = 17056,
  [SMALL_STATE(455)] = 17075,
  [SMALL_STATE(456)] = 17086,
  [SMALL_STATE(457)] = 17099,
  [SMALL_STATE(458)] = 17114,
  [SMALL_STATE(459)] = 17129,
  [SMALL_STATE(460)] = 17146,
  [SMALL_STATE(461)] = 17161,
  [SMALL_STATE(462)] = 17172,
  [SMALL_STATE(463)] = 17187,
  [SMALL_STATE(464)] = 17202,
  [SMALL_STATE(465)] = 17217,
  [SMALL_STATE(466)] = 17232,
  [SMALL_STATE(467)] = 17247,
  [SMALL_STATE(468)] = 17260,
  [SMALL_STATE(469)] = 17271,
  [SMALL_STATE(470)] = 17286,
  [SMALL_STATE(471)] = 17297,
  [SMALL_STATE(472)] = 17314,
  [SMALL_STATE(473)] = 17331,
  [SMALL_STATE(474)] = 17342,
  [SMALL_STATE(475)] = 17353,
  [SMALL_STATE(476)] = 17370,
  [SMALL_STATE(477)] = 17381,
  [SMALL_STATE(478)] = 17392,
  [SMALL_STATE(479)] = 17403,
  [SMALL_STATE(480)] = 17414,
  [SMALL_STATE(481)] = 17425,
  [SMALL_STATE(482)] = 17438,
  [SMALL_STATE(483)] = 17457,
  [SMALL_STATE(484)] = 17468,
  [SMALL_STATE(485)] = 17487,
  [SMALL_STATE(486)] = 17498,
  [SMALL_STATE(487)] = 17513,
  [SMALL_STATE(488)] = 17530,
  [SMALL_STATE(489)] = 17543,
  [SMALL_STATE(490)] = 17558,
  [SMALL_STATE(491)] = 17573,
  [SMALL_STATE(492)] = 17590,
  [SMALL_STATE(493)] = 17609,
  [SMALL_STATE(494)] = 17624,
  [SMALL_STATE(495)] = 17637,
  [SMALL_STATE(496)] = 17656,
  [SMALL_STATE(497)] = 17667,
  [SMALL_STATE(498)] = 17686,
  [SMALL_STATE(499)] = 17703,
  [SMALL_STATE(500)] = 17716,
  [SMALL_STATE(501)] = 17729,
  [SMALL_STATE(502)] = 17740,
  [SMALL_STATE(503)] = 17759,
  [SMALL_STATE(504)] = 17773,
  [SMALL_STATE(505)] = 17787,
  [SMALL_STATE(506)] = 17801,
  [SMALL_STATE(507)] = 17815,
  [SMALL_STATE(508)] = 17831,
  [SMALL_STATE(509)] = 17847,
  [SMALL_STATE(510)] = 17861,
  [SMALL_STATE(511)] = 17877,
  [SMALL_STATE(512)] = 17893,
  [SMALL_STATE(513)] = 17909,
  [SMALL_STATE(514)] = 17925,
  [SMALL_STATE(515)] = 17935,
  [SMALL_STATE(516)] = 17951,
  [SMALL_STATE(517)] = 17967,
  [SMALL_STATE(518)] = 17983,
  [SMALL_STATE(519)] = 17999,
  [SMALL_STATE(520)] = 18015,
  [SMALL_STATE(521)] = 18031,
  [SMALL_STATE(522)] = 18045,
  [SMALL_STATE(523)] = 18061,
  [SMALL_STATE(524)] = 18077,
  [SMALL_STATE(525)] = 18093,
  [SMALL_STATE(526)] = 18103,
  [SMALL_STATE(527)] = 18119,
  [SMALL_STATE(528)] = 18135,
  [SMALL_STATE(529)] = 18151,
  [SMALL_STATE(530)] = 18167,
  [SMALL_STATE(531)] = 18183,
  [SMALL_STATE(532)] = 18193,
  [SMALL_STATE(533)] = 18207,
  [SMALL_STATE(534)] = 18223,
  [SMALL_STATE(535)] = 18235,
  [SMALL_STATE(536)] = 18251,
  [SMALL_STATE(537)] = 18267,
  [SMALL_STATE(538)] = 18283,
  [SMALL_STATE(539)] = 18293,
  [SMALL_STATE(540)] = 18309,
  [SMALL_STATE(541)] = 18323,
  [SMALL_STATE(542)] = 18339,
  [SMALL_STATE(543)] = 18349,
  [SMALL_STATE(544)] = 18363,
  [SMALL_STATE(545)] = 18373,
  [SMALL_STATE(546)] = 18383,
  [SMALL_STATE(547)] = 18393,
  [SMALL_STATE(548)] = 18403,
  [SMALL_STATE(549)] = 18413,
  [SMALL_STATE(550)] = 18423,
  [SMALL_STATE(551)] = 18433,
  [SMALL_STATE(552)] = 18443,
  [SMALL_STATE(553)] = 18455,
  [SMALL_STATE(554)] = 18471,
  [SMALL_STATE(555)] = 18487,
  [SMALL_STATE(556)] = 18503,
  [SMALL_STATE(557)] = 18517,
  [SMALL_STATE(558)] = 18533,
  [SMALL_STATE(559)] = 18547,
  [SMALL_STATE(560)] = 18563,
  [SMALL_STATE(561)] = 18579,
  [SMALL_STATE(562)] = 18595,
  [SMALL_STATE(563)] = 18605,
  [SMALL_STATE(564)] = 18621,
  [SMALL_STATE(565)] = 18637,
  [SMALL_STATE(566)] = 18653,
  [SMALL_STATE(567)] = 18669,
  [SMALL_STATE(568)] = 18681,
  [SMALL_STATE(569)] = 18697,
  [SMALL_STATE(570)] = 18713,
  [SMALL_STATE(571)] = 18729,
  [SMALL_STATE(572)] = 18745,
  [SMALL_STATE(573)] = 18761,
  [SMALL_STATE(574)] = 18777,
  [SMALL_STATE(575)] = 18793,
  [SMALL_STATE(576)] = 18807,
  [SMALL_STATE(577)] = 18823,
  [SMALL_STATE(578)] = 18837,
  [SMALL_STATE(579)] = 18853,
  [SMALL_STATE(580)] = 18867,
  [SMALL_STATE(581)] = 18883,
  [SMALL_STATE(582)] = 18899,
  [SMALL_STATE(583)] = 18915,
  [SMALL_STATE(584)] = 18931,
  [SMALL_STATE(585)] = 18947,
  [SMALL_STATE(586)] = 18963,
  [SMALL_STATE(587)] = 18979,
  [SMALL_STATE(588)] = 18993,
  [SMALL_STATE(589)] = 19009,
  [SMALL_STATE(590)] = 19025,
  [SMALL_STATE(591)] = 19039,
  [SMALL_STATE(592)] = 19053,
  [SMALL_STATE(593)] = 19069,
  [SMALL_STATE(594)] = 19083,
  [SMALL_STATE(595)] = 19099,
  [SMALL_STATE(596)] = 19115,
  [SMALL_STATE(597)] = 19127,
  [SMALL_STATE(598)] = 19143,
  [SMALL_STATE(599)] = 19159,
  [SMALL_STATE(600)] = 19175,
  [SMALL_STATE(601)] = 19191,
  [SMALL_STATE(602)] = 19205,
  [SMALL_STATE(603)] = 19219,
  [SMALL_STATE(604)] = 19235,
  [SMALL_STATE(605)] = 19249,
  [SMALL_STATE(606)] = 19263,
  [SMALL_STATE(607)] = 19279,
  [SMALL_STATE(608)] = 19295,
  [SMALL_STATE(609)] = 19309,
  [SMALL_STATE(610)] = 19325,
  [SMALL_STATE(611)] = 19341,
  [SMALL_STATE(612)] = 19355,
  [SMALL_STATE(613)] = 19371,
  [SMALL_STATE(614)] = 19387,
  [SMALL_STATE(615)] = 19397,
  [SMALL_STATE(616)] = 19413,
  [SMALL_STATE(617)] = 19429,
  [SMALL_STATE(618)] = 19443,
  [SMALL_STATE(619)] = 19459,
  [SMALL_STATE(620)] = 19475,
  [SMALL_STATE(621)] = 19489,
  [SMALL_STATE(622)] = 19503,
  [SMALL_STATE(623)] = 19517,
  [SMALL_STATE(624)] = 19527,
  [SMALL_STATE(625)] = 19541,
  [SMALL_STATE(626)] = 19555,
  [SMALL_STATE(627)] = 19571,
  [SMALL_STATE(628)] = 19585,
  [SMALL_STATE(629)] = 19601,
  [SMALL_STATE(630)] = 19617,
  [SMALL_STATE(631)] = 19633,
  [SMALL_STATE(632)] = 19647,
  [SMALL_STATE(633)] = 19663,
  [SMALL_STATE(634)] = 19679,
  [SMALL_STATE(635)] = 19693,
  [SMALL_STATE(636)] = 19707,
  [SMALL_STATE(637)] = 19723,
  [SMALL_STATE(638)] = 19739,
  [SMALL_STATE(639)] = 19755,
  [SMALL_STATE(640)] = 19771,
  [SMALL_STATE(641)] = 19785,
  [SMALL_STATE(642)] = 19799,
  [SMALL_STATE(643)] = 19813,
  [SMALL_STATE(644)] = 19827,
  [SMALL_STATE(645)] = 19841,
  [SMALL_STATE(646)] = 19855,
  [SMALL_STATE(647)] = 19867,
  [SMALL_STATE(648)] = 19881,
  [SMALL_STATE(649)] = 19895,
  [SMALL_STATE(650)] = 19905,
  [SMALL_STATE(651)] = 19917,
  [SMALL_STATE(652)] = 19931,
  [SMALL_STATE(653)] = 19943,
  [SMALL_STATE(654)] = 19953,
  [SMALL_STATE(655)] = 19965,
  [SMALL_STATE(656)] = 19981,
  [SMALL_STATE(657)] = 19997,
  [SMALL_STATE(658)] = 20013,
  [SMALL_STATE(659)] = 20029,
  [SMALL_STATE(660)] = 20043,
  [SMALL_STATE(661)] = 20057,
  [SMALL_STATE(662)] = 20071,
  [SMALL_STATE(663)] = 20087,
  [SMALL_STATE(664)] = 20103,
  [SMALL_STATE(665)] = 20117,
  [SMALL_STATE(666)] = 20133,
  [SMALL_STATE(667)] = 20147,
  [SMALL_STATE(668)] = 20161,
  [SMALL_STATE(669)] = 20177,
  [SMALL_STATE(670)] = 20193,
  [SMALL_STATE(671)] = 20207,
  [SMALL_STATE(672)] = 20221,
  [SMALL_STATE(673)] = 20231,
  [SMALL_STATE(674)] = 20243,
  [SMALL_STATE(675)] = 20259,
  [SMALL_STATE(676)] = 20271,
  [SMALL_STATE(677)] = 20285,
  [SMALL_STATE(678)] = 20299,
  [SMALL_STATE(679)] = 20309,
  [SMALL_STATE(680)] = 20323,
  [SMALL_STATE(681)] = 20333,
  [SMALL_STATE(682)] = 20347,
  [SMALL_STATE(683)] = 20361,
  [SMALL_STATE(684)] = 20375,
  [SMALL_STATE(685)] = 20389,
  [SMALL_STATE(686)] = 20405,
  [SMALL_STATE(687)] = 20421,
  [SMALL_STATE(688)] = 20437,
  [SMALL_STATE(689)] = 20449,
  [SMALL_STATE(690)] = 20462,
  [SMALL_STATE(691)] = 20473,
  [SMALL_STATE(692)] = 20482,
  [SMALL_STATE(693)] = 20491,
  [SMALL_STATE(694)] = 20504,
  [SMALL_STATE(695)] = 20513,
  [SMALL_STATE(696)] = 20522,
  [SMALL_STATE(697)] = 20531,
  [SMALL_STATE(698)] = 20540,
  [SMALL_STATE(699)] = 20549,
  [SMALL_STATE(700)] = 20558,
  [SMALL_STATE(701)] = 20567,
  [SMALL_STATE(702)] = 20580,
  [SMALL_STATE(703)] = 20589,
  [SMALL_STATE(704)] = 20598,
  [SMALL_STATE(705)] = 20611,
  [SMALL_STATE(706)] = 20622,
  [SMALL_STATE(707)] = 20631,
  [SMALL_STATE(708)] = 20640,
  [SMALL_STATE(709)] = 20651,
  [SMALL_STATE(710)] = 20662,
  [SMALL_STATE(711)] = 20673,
  [SMALL_STATE(712)] = 20682,
  [SMALL_STATE(713)] = 20691,
  [SMALL_STATE(714)] = 20704,
  [SMALL_STATE(715)] = 20713,
  [SMALL_STATE(716)] = 20722,
  [SMALL_STATE(717)] = 20733,
  [SMALL_STATE(718)] = 20742,
  [SMALL_STATE(719)] = 20751,
  [SMALL_STATE(720)] = 20764,
  [SMALL_STATE(721)] = 20773,
  [SMALL_STATE(722)] = 20782,
  [SMALL_STATE(723)] = 20791,
  [SMALL_STATE(724)] = 20802,
  [SMALL_STATE(725)] = 20811,
  [SMALL_STATE(726)] = 20822,
  [SMALL_STATE(727)] = 20831,
  [SMALL_STATE(728)] = 20844,
  [SMALL_STATE(729)] = 20857,
  [SMALL_STATE(730)] = 20866,
  [SMALL_STATE(731)] = 20877,
  [SMALL_STATE(732)] = 20888,
  [SMALL_STATE(733)] = 20899,
  [SMALL_STATE(734)] = 20910,
  [SMALL_STATE(735)] = 20923,
  [SMALL_STATE(736)] = 20936,
  [SMALL_STATE(737)] = 20945,
  [SMALL_STATE(738)] = 20958,
  [SMALL_STATE(739)] = 20969,
  [SMALL_STATE(740)] = 20978,
  [SMALL_STATE(741)] = 20991,
  [SMALL_STATE(742)] = 21000,
  [SMALL_STATE(743)] = 21013,
  [SMALL_STATE(744)] = 21026,
  [SMALL_STATE(745)] = 21039,
  [SMALL_STATE(746)] = 21048,
  [SMALL_STATE(747)] = 21061,
  [SMALL_STATE(748)] = 21074,
  [SMALL_STATE(749)] = 21087,
  [SMALL_STATE(750)] = 21100,
  [SMALL_STATE(751)] = 21111,
  [SMALL_STATE(752)] = 21120,
  [SMALL_STATE(753)] = 21129,
  [SMALL_STATE(754)] = 21142,
  [SMALL_STATE(755)] = 21155,
  [SMALL_STATE(756)] = 21168,
  [SMALL_STATE(757)] = 21177,
  [SMALL_STATE(758)] = 21186,
  [SMALL_STATE(759)] = 21197,
  [SMALL_STATE(760)] = 21210,
  [SMALL_STATE(761)] = 21223,
  [SMALL_STATE(762)] = 21234,
  [SMALL_STATE(763)] = 21247,
  [SMALL_STATE(764)] = 21256,
  [SMALL_STATE(765)] = 21269,
  [SMALL_STATE(766)] = 21278,
  [SMALL_STATE(767)] = 21291,
  [SMALL_STATE(768)] = 21300,
  [SMALL_STATE(769)] = 21309,
  [SMALL_STATE(770)] = 21322,
  [SMALL_STATE(771)] = 21331,
  [SMALL_STATE(772)] = 21340,
  [SMALL_STATE(773)] = 21349,
  [SMALL_STATE(774)] = 21358,
  [SMALL_STATE(775)] = 21367,
  [SMALL_STATE(776)] = 21380,
  [SMALL_STATE(777)] = 21391,
  [SMALL_STATE(778)] = 21402,
  [SMALL_STATE(779)] = 21413,
  [SMALL_STATE(780)] = 21424,
  [SMALL_STATE(781)] = 21433,
  [SMALL_STATE(782)] = 21442,
  [SMALL_STATE(783)] = 21451,
  [SMALL_STATE(784)] = 21462,
  [SMALL_STATE(785)] = 21471,
  [SMALL_STATE(786)] = 21482,
  [SMALL_STATE(787)] = 21491,
  [SMALL_STATE(788)] = 21500,
  [SMALL_STATE(789)] = 21511,
  [SMALL_STATE(790)] = 21520,
  [SMALL_STATE(791)] = 21528,
  [SMALL_STATE(792)] = 21536,
  [SMALL_STATE(793)] = 21544,
  [SMALL_STATE(794)] = 21552,
  [SMALL_STATE(795)] = 21562,
  [SMALL_STATE(796)] = 21570,
  [SMALL_STATE(797)] = 21578,
  [SMALL_STATE(798)] = 21586,
  [SMALL_STATE(799)] = 21594,
  [SMALL_STATE(800)] = 21604,
  [SMALL_STATE(801)] = 21612,
  [SMALL_STATE(802)] = 21620,
  [SMALL_STATE(803)] = 21628,
  [SMALL_STATE(804)] = 21636,
  [SMALL_STATE(805)] = 21644,
  [SMALL_STATE(806)] = 21652,
  [SMALL_STATE(807)] = 21660,
  [SMALL_STATE(808)] = 21668,
  [SMALL_STATE(809)] = 21676,
  [SMALL_STATE(810)] = 21684,
  [SMALL_STATE(811)] = 21694,
  [SMALL_STATE(812)] = 21702,
  [SMALL_STATE(813)] = 21712,
  [SMALL_STATE(814)] = 21722,
  [SMALL_STATE(815)] = 21730,
  [SMALL_STATE(816)] = 21738,
  [SMALL_STATE(817)] = 21748,
  [SMALL_STATE(818)] = 21756,
  [SMALL_STATE(819)] = 21764,
  [SMALL_STATE(820)] = 21772,
  [SMALL_STATE(821)] = 21780,
  [SMALL_STATE(822)] = 21788,
  [SMALL_STATE(823)] = 21796,
  [SMALL_STATE(824)] = 21804,
  [SMALL_STATE(825)] = 21812,
  [SMALL_STATE(826)] = 21820,
  [SMALL_STATE(827)] = 21828,
  [SMALL_STATE(828)] = 21836,
  [SMALL_STATE(829)] = 21844,
  [SMALL_STATE(830)] = 21852,
  [SMALL_STATE(831)] = 21860,
  [SMALL_STATE(832)] = 21868,
  [SMALL_STATE(833)] = 21876,
  [SMALL_STATE(834)] = 21884,
  [SMALL_STATE(835)] = 21892,
  [SMALL_STATE(836)] = 21900,
  [SMALL_STATE(837)] = 21908,
  [SMALL_STATE(838)] = 21916,
  [SMALL_STATE(839)] = 21924,
  [SMALL_STATE(840)] = 21932,
  [SMALL_STATE(841)] = 21940,
  [SMALL_STATE(842)] = 21950,
  [SMALL_STATE(843)] = 21958,
  [SMALL_STATE(844)] = 21966,
  [SMALL_STATE(845)] = 21974,
  [SMALL_STATE(846)] = 21982,
  [SMALL_STATE(847)] = 21990,
  [SMALL_STATE(848)] = 21998,
  [SMALL_STATE(849)] = 22006,
  [SMALL_STATE(850)] = 22014,
  [SMALL_STATE(851)] = 22022,
  [SMALL_STATE(852)] = 22030,
  [SMALL_STATE(853)] = 22038,
  [SMALL_STATE(854)] = 22046,
  [SMALL_STATE(855)] = 22054,
  [SMALL_STATE(856)] = 22062,
  [SMALL_STATE(857)] = 22070,
  [SMALL_STATE(858)] = 22078,
  [SMALL_STATE(859)] = 22088,
  [SMALL_STATE(860)] = 22096,
  [SMALL_STATE(861)] = 22104,
  [SMALL_STATE(862)] = 22112,
  [SMALL_STATE(863)] = 22120,
  [SMALL_STATE(864)] = 22128,
  [SMALL_STATE(865)] = 22136,
  [SMALL_STATE(866)] = 22144,
  [SMALL_STATE(867)] = 22152,
  [SMALL_STATE(868)] = 22160,
  [SMALL_STATE(869)] = 22168,
  [SMALL_STATE(870)] = 22176,
  [SMALL_STATE(871)] = 22184,
  [SMALL_STATE(872)] = 22192,
  [SMALL_STATE(873)] = 22200,
  [SMALL_STATE(874)] = 22208,
  [SMALL_STATE(875)] = 22216,
  [SMALL_STATE(876)] = 22224,
  [SMALL_STATE(877)] = 22232,
  [SMALL_STATE(878)] = 22240,
  [SMALL_STATE(879)] = 22248,
  [SMALL_STATE(880)] = 22256,
  [SMALL_STATE(881)] = 22264,
  [SMALL_STATE(882)] = 22272,
  [SMALL_STATE(883)] = 22280,
  [SMALL_STATE(884)] = 22288,
  [SMALL_STATE(885)] = 22296,
  [SMALL_STATE(886)] = 22304,
  [SMALL_STATE(887)] = 22312,
  [SMALL_STATE(888)] = 22320,
  [SMALL_STATE(889)] = 22328,
  [SMALL_STATE(890)] = 22336,
  [SMALL_STATE(891)] = 22344,
  [SMALL_STATE(892)] = 22354,
  [SMALL_STATE(893)] = 22362,
  [SMALL_STATE(894)] = 22370,
  [SMALL_STATE(895)] = 22378,
  [SMALL_STATE(896)] = 22386,
  [SMALL_STATE(897)] = 22394,
  [SMALL_STATE(898)] = 22402,
  [SMALL_STATE(899)] = 22410,
  [SMALL_STATE(900)] = 22418,
  [SMALL_STATE(901)] = 22426,
  [SMALL_STATE(902)] = 22434,
  [SMALL_STATE(903)] = 22442,
  [SMALL_STATE(904)] = 22450,
  [SMALL_STATE(905)] = 22458,
  [SMALL_STATE(906)] = 22466,
  [SMALL_STATE(907)] = 22474,
  [SMALL_STATE(908)] = 22482,
  [SMALL_STATE(909)] = 22490,
  [SMALL_STATE(910)] = 22498,
  [SMALL_STATE(911)] = 22508,
  [SMALL_STATE(912)] = 22516,
  [SMALL_STATE(913)] = 22524,
  [SMALL_STATE(914)] = 22534,
  [SMALL_STATE(915)] = 22542,
  [SMALL_STATE(916)] = 22550,
  [SMALL_STATE(917)] = 22558,
  [SMALL_STATE(918)] = 22566,
  [SMALL_STATE(919)] = 22574,
  [SMALL_STATE(920)] = 22584,
  [SMALL_STATE(921)] = 22594,
  [SMALL_STATE(922)] = 22604,
  [SMALL_STATE(923)] = 22612,
  [SMALL_STATE(924)] = 22620,
  [SMALL_STATE(925)] = 22628,
  [SMALL_STATE(926)] = 22636,
  [SMALL_STATE(927)] = 22644,
  [SMALL_STATE(928)] = 22652,
  [SMALL_STATE(929)] = 22660,
  [SMALL_STATE(930)] = 22668,
  [SMALL_STATE(931)] = 22676,
  [SMALL_STATE(932)] = 22684,
  [SMALL_STATE(933)] = 22692,
  [SMALL_STATE(934)] = 22700,
  [SMALL_STATE(935)] = 22708,
  [SMALL_STATE(936)] = 22716,
  [SMALL_STATE(937)] = 22724,
  [SMALL_STATE(938)] = 22732,
  [SMALL_STATE(939)] = 22740,
  [SMALL_STATE(940)] = 22748,
  [SMALL_STATE(941)] = 22756,
  [SMALL_STATE(942)] = 22764,
  [SMALL_STATE(943)] = 22772,
  [SMALL_STATE(944)] = 22780,
  [SMALL_STATE(945)] = 22788,
  [SMALL_STATE(946)] = 22796,
  [SMALL_STATE(947)] = 22804,
  [SMALL_STATE(948)] = 22812,
  [SMALL_STATE(949)] = 22820,
  [SMALL_STATE(950)] = 22828,
  [SMALL_STATE(951)] = 22836,
  [SMALL_STATE(952)] = 22844,
  [SMALL_STATE(953)] = 22852,
  [SMALL_STATE(954)] = 22860,
  [SMALL_STATE(955)] = 22868,
  [SMALL_STATE(956)] = 22876,
  [SMALL_STATE(957)] = 22884,
  [SMALL_STATE(958)] = 22892,
  [SMALL_STATE(959)] = 22900,
  [SMALL_STATE(960)] = 22908,
  [SMALL_STATE(961)] = 22916,
  [SMALL_STATE(962)] = 22926,
  [SMALL_STATE(963)] = 22934,
  [SMALL_STATE(964)] = 22942,
  [SMALL_STATE(965)] = 22950,
  [SMALL_STATE(966)] = 22958,
  [SMALL_STATE(967)] = 22966,
  [SMALL_STATE(968)] = 22974,
  [SMALL_STATE(969)] = 22982,
  [SMALL_STATE(970)] = 22990,
  [SMALL_STATE(971)] = 23000,
  [SMALL_STATE(972)] = 23008,
  [SMALL_STATE(973)] = 23016,
  [SMALL_STATE(974)] = 23024,
  [SMALL_STATE(975)] = 23034,
  [SMALL_STATE(976)] = 23042,
  [SMALL_STATE(977)] = 23050,
  [SMALL_STATE(978)] = 23058,
  [SMALL_STATE(979)] = 23066,
  [SMALL_STATE(980)] = 23074,
  [SMALL_STATE(981)] = 23082,
  [SMALL_STATE(982)] = 23090,
  [SMALL_STATE(983)] = 23098,
  [SMALL_STATE(984)] = 23106,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(597),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(600),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(115),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(599),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(598),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(399),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(566),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(565),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(564),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(563),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(916),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(561),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(560),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(559),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(524),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(492),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(93),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(258),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(573),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(578),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(92),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(576),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(574),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(392),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(536),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(535),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(533),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(530),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(949),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(528),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(527),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(526),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(512),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(497),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(113),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 24),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 3, 0, 10),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 4, 0, 16),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(584),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(588),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(190),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(586),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(585),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(405),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(557),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(555),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(554),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(553),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(933),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(541),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(539),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(537),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(518),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(495),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(154),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(633),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(603),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(606),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(607),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(609),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(610),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(612),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(613),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(828),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(626),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(628),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(629),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(630),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(766),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(734),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(737),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(740),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(744),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(748),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(753),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(754),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(755),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(660),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 12),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 12),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 13),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 13),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 14),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 14),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 15),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 15),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 16),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 16),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 16),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 16),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 12),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 12),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 16),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 16),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, 0, 16),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, 0, 16),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(718),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(903),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(794),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, 0, 11),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, 0, 11),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gitgraph_repeat1, 2, 0, 0),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gitgraph_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gitgraph_repeat1, 2, 0, 0), SHIFT_REPEAT(733),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gitgraph_repeat1, 2, 0, 0), SHIFT_REPEAT(732),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gitgraph_repeat1, 2, 0, 0), SHIFT_REPEAT(731),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gitgraph_repeat1, 2, 0, 0), SHIFT_REPEAT(730),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gitgraph_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gitgraph, 2, 0, 0),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gitgraph, 1, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [993] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1, 0, 0),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1, 0, 0),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1, 0, 0),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1, 0, 0),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1, 0, 0),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1, 0, 0),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1, 0, 0),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__direction, 1, 0, 0),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__direction, 1, 0, 0),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, 0, 23),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, 0, 23),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, 0, 1),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, 0, 1),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [1161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 2),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 3),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 3),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 7),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 7),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 6),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 6),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 5),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 5),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 4),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 4),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0), SHIFT_REPEAT(634),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0),
  [1377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(878),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3, 0, 0),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 19),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_section, 4, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0),
  [1408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_journey_section_repeat1, 2, 0, 0),
  [1415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_journey_section_repeat1, 2, 0, 0), SHIFT_REPEAT(836),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 21),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 20),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_section, 3, 0, 0),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1, 0, 0),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_journey_repeat1, 2, 0, 0),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_journey_repeat1, 2, 0, 0), SHIFT_REPEAT(728),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_journey_repeat1, 2, 0, 0), SHIFT_REPEAT(727),
  [1454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_journey_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_journey, 2, 0, 0),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_commit_attrs, 1, 0, 0),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_journey, 1, 0, 0),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gitgraph_commit_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(930),
  [1474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gitgraph_commit_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(946),
  [1477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gitgraph_commit_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(947),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gitgraph_commit_attrs_repeat1, 2, 0, 0),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4, 0, 0),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_reltype, 1, 0, 0),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3, 0, 0),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gitgraph_stmt, 1, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_stmt_cherry_pick, 3, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_stmt_merge, 3, 0, 0),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_stmt_checkout, 3, 0, 0),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_stmt_commit, 2, 0, 0),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_stmt_branch, 3, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_stmt_commit, 3, 0, 0),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0),
  [1530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1, 0, 0),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1, 0, 0),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(974),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0),
  [1614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(805),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_task, 6, 0, 0),
  [1619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journey_task, 6, 0, 0),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_cardinarity, 1, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1, 0, 0),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3, 0, 0),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5, 0, 0),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0),
  [1694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__journey_stmt, 1, 0, 0),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4, 0, 0),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_title, 3, 0, 0),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_markdown, 3, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_commit_attr_type, 3, 0, 0),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_commit_attr_tag, 3, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_text, 2, 0, 0),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_content, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_commit_attr_id, 3, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1, 0, 0),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1, 0, 0),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2, 0, 0),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3, 0, 0),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1, 0, 0),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0),
  [1805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4, 0, 0),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0),
  [1812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2, 0, 0),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3, 0, 0),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0),
  [1821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 22),
  [1830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 25),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 19),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 26),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 20),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 27),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 21),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 28),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 0),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 3, 0, 0),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5, 0, 0),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, 0, 17),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0),
  [1868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0),
  [1885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0),
  [1898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0), SHIFT_REPEAT(961),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7, 0, 0),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_task_actors, 1, 0, 0),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8, 0, 0),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_task_actors, 2, 0, 0),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_journey_task_actors_repeat1, 2, 0, 0), SHIFT_REPEAT(816),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_journey_task_actors_repeat1, 2, 0, 0),
  [1928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0),
  [1946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 4, 0, 0),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1, 0, 0),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1, 0, 0),
  [1973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2, 0, 0),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0),
  [1985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [1988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2, 0, 0),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3, 0, 0),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3, 0, 0),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1, 0, 0),
  [2004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1, 0, 0),
  [2006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3, 0, 0),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [2012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [2014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1, 0, 0),
  [2016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1, 0, 0),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1, 0, 0),
  [2024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5, 0, 0),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1, 0, 0),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1, 0, 0),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1, 0, 0),
  [2034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5, 0, 0),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_class, 2, 0, 0),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5, 0, 0),
  [2054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, 0, 18),
  [2056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1, 0, 0),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1, 0, 0),
  [2066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3, 0, 0),
  [2072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1, 0, 0),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1, 0, 0),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_attribute_key_type, 1, 0, 0),
  [2082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(872),
  [2084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_journey_task_actors_repeat1, 3, 0, 0),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_stmt, 1, 0, 0),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1, 0, 0),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3, 0, 0),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 5, 0, 0),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, 0, 18),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6, 0, 0),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4, 0, 0),
  [2118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 17),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 0),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7, 0, 0),
  [2126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 5, 0, 0),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5, 0, 0),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 17),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 0),
  [2136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, 0, 17),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, 0, 17),
  [2156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [2158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4, 0, 0),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1, 0, 0),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3, 0, 0),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [2216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [2218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(964),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [2226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_cherry_pick_id, 3, 0, 0),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_task_name, 1, 0, 0),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3, 0, 0),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [2316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_section_title, 1, 0, 0),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1, 0, 0),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1, 0, 0),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_task_score, 1, 0, 0),
  [2374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1, 0, 0),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [2378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journey_title_text, 1, 0, 0),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1, 0, 0),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [2412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1, 0, 0),
  [2414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1, 0, 0),
  [2416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4, 0, 0),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [2428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [2430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1, 0, 0),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gitgraph_branch_name, 1, 0, 0),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [2524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [2540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mermaid(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
