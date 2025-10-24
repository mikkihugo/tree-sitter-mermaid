; ============================================================================
; Mermaid Tree-Sitter Syntax Highlighting
; ============================================================================
; Professional-grade highlights for all 23 Mermaid diagram types
; Compatible with Neovim, Helix, and other tree-sitter editors
; Node types validated against src/node-types.json
;
; Supported diagrams:
; - Flowcharts (graph/flowchart)
; - Sequence Diagrams (sequenceDiagram)
; - Class Diagrams (classDiagram)
; - State Diagrams (stateDiagram-v2)
; - Entity Relationship (erDiagram)
; - Gantt Charts (gantt)
; - Pie Charts (pie)
; - Git Graphs (gitGraph)
; - Mind Maps (mindmap)
; - User Journey (journey)
; - Quadrant Charts (quadrantChart)
; - XY Charts (xychart-beta)
; - Timeline (timeline)
; - ZenUML (zenuml)
; - Sankey (sankey-beta)
; - Block Diagrams (block-beta)
; - Packet Diagrams (packet-beta)
; - Kanban (kanban)
; - Architecture (architecture-beta)
; - Radar Charts (radar-beta)
; - Treemap (treemap)
; - Requirement Diagrams (requirementDiagram)
; - C4 Diagrams (C4Context/C4Container/C4Component/C4Dynamic/C4Deployment)
; ============================================================================

; ============================================================================
; Comments
; ============================================================================

(comment) @comment @spell

; ============================================================================
; Diagram Type Declarations
; ============================================================================

; Diagram type keywords - the main diagram declarations
"flowchart" @keyword
"sequenceDiagram" @keyword
"classDiagram" @keyword
"classDiagram-v2" @keyword
"stateDiagram" @keyword
"stateDiagram-v2" @keyword
"erdiagram" @keyword
"gantt" @keyword
"pie" @keyword
"gitGraph" @keyword
"journey" @keyword
"quadrantChart" @keyword
"xychart-beta" @keyword
"timeline" @keyword
"zenuml" @keyword
"sankey-beta" @keyword
"block-beta" @keyword
"packet-beta" @keyword
"kanban" @keyword
"architecture-beta" @keyword
"radar-beta" @keyword
"treemap" @keyword
"requirementDiagram" @keyword
"C4Context" @keyword
"C4Container" @keyword
"C4Component" @keyword
"C4Dynamic" @keyword
"C4Deployment" @keyword

; ============================================================================
; Keywords and Control Flow
; ============================================================================

; Flowchart/Graph direction keywords
"direction tb" @keyword.directive
"direction bt" @keyword.directive
"direction lr" @keyword.directive
"direction rl" @keyword.directive
"tb" @keyword.directive
"bt" @keyword.directive
"lr" @keyword.directive
"rl" @keyword.directive
"td" @keyword.directive
(direction_tb) @keyword.directive
(direction_bt) @keyword.directive
(direction_lr) @keyword.directive
(direction_rl) @keyword.directive
(flowchart_direction_tb) @keyword.directive
(flowchart_direction_bt) @keyword.directive
(flowchart_direction_lr) @keyword.directive
(flowchart_direction_rl) @keyword.directive

; Flowchart subgraph
"subgraph" @keyword
"end" @keyword

; Sequence diagram keywords
"activate" @keyword
"deactivate" @keyword
"autonumber" @keyword
"loop" @keyword
"alt" @keyword
"else" @keyword
"opt" @keyword
"par" @keyword
"and" @keyword
"rect" @keyword
"note " @keyword
"over" @keyword
"left of" @keyword.directive
"right of" @keyword.directive
(note_placement_left) @keyword.directive
(note_placement_right) @keyword.directive

; Class diagram keywords
"class" @keyword
(class_classifier_abstract) @keyword.modifier
(class_classifier_static) @keyword.modifier

; State diagram keywords
(state_annotation_fork) @keyword
(state_annotation_join) @keyword
(state_annotation_choice) @keyword
"state " @keyword
"hide empty description" @keyword

; Gantt chart keywords
"dateformat" @keyword
"axisformat" @keyword
"title" @keyword
"section" @keyword
"excludes" @keyword
"includes" @keyword
"inclusiveenddates" @keyword
"todaymarker" @keyword
"topaxis" @keyword

; Git graph keywords
"commit" @keyword
"branch" @keyword
"checkout" @keyword
"merge" @keyword
"cherry-pick" @keyword
"tag" @keyword
"HIGHLIGHT" @keyword.modifier
"REVERSE" @keyword.modifier
"NORMAL" @keyword.modifier

; Journey keywords
(journey_title) @keyword

; Pie chart keywords
"showdata" @keyword

; Sequence/ER/Requirement keywords
"as" @keyword
"participant" @keyword
"actor" @keyword
"link" @keyword
"links" @keyword
"properties" @keyword
"details" @keyword

; Requirement diagram keywords
"requirement" @keyword
"functionalRequirement" @keyword
"interfaceRequirement" @keyword
"performanceRequirement" @keyword
"physicalRequirement" @keyword
"designConstraint" @keyword

; C4 keywords
"person" @keyword
"rel" @keyword

; XY Chart keywords
"bar" @keyword
"line" @keyword
"x-axis" @keyword
"y-axis" @keyword

; Quadrant chart keywords
"quadrant-1" @keyword
"quadrant-2" @keyword
"quadrant-3" @keyword
"quadrant-4" @keyword

; Block diagram keywords
"block" @keyword
"columns" @keyword

; Packet diagram keywords
"v" @keyword

; Kanban keywords
"service" @keyword

; ============================================================================
; Directives (%%{init:...}%%)
; ============================================================================

(directive) @keyword.directive
(type_directive) @keyword.directive
(arg_directive) @string

; Special directive markers
"%%{" @punctuation.special
"}%%" @punctuation.special

; ============================================================================
; Identifiers and Names
; ============================================================================

; Flow diagram nodes
(flow_vertex_id) @variable
(flow_node) @variable

; State diagram names
(state_id) @variable
(state_name) @variable
(state_alias) @variable

; Class diagram names
(class_name_body) @type
(class_name) @type

; ER diagram names
(er_entity_name) @type
(er_attribute_name) @property

; Sequence diagram actors
(sequence_actor) @variable.parameter
(sequence_alias) @string

; Gantt sections and tasks
(gantt_section) @namespace
(gantt_task_text) @string

; Gitgraph branch names
(gitgraph_branch_name) @variable

; Journey task names
(journey_task_name) @string
(journey_section_title) @namespace

; Mind map nodes
(mmap_node_id) @variable

; Pie labels
(pie_label) @string

; Timeline events
(timeline_event) @variable

; Quadrant chart
(quadrant_title) @string
(quadrant_x_axis) @string
(quadrant_y_axis) @string

; XY Chart
(xy_title) @string
(xy_x_axis) @string
(xy_y_axis) @string

; Radar chart
(radar_title) @string
(radar_metric) @variable

; Treemap
(treemap_title) @string
(treemap_item) @variable

; Sankey
(sankey_header) @string

; C4 names
(c4_title) @string

; Architecture
(architecture_service) @type

; Requirement diagram
(requirement_block) @type

; ============================================================================
; Strings and Text Content
; ============================================================================

; Flow diagram text
(flow_text_literal) @string
(flow_text_quoted) @string
(flow_vertex_text) @string
(flow_arrow_text) @string

; State diagram text
(state_description) @string

; Class diagram labels
(class_label) @string

; Sequence diagram text
(sequence_text) @string
(note_content) @string

; Pie chart
(pie_title) @string.special

; Gantt chart
(gantt_title) @string.special
(gantt_date_format) @string
(gantt_axis_format) @string
(gantt_task_data) @string

; Journey
(journey_title_text) @string.special

; Mind map text
(mmap_text) @string
(mmap_markdown) @string
(md_text) @string

; ER diagram
(er_role) @string
(er_attribute_type) @type
(er_attribute_comment) @string

; Gitgraph commit attributes
(gitgraph_commit_attr_id) @string
(gitgraph_commit_attr_tag) @string

; ============================================================================
; Numbers and Scores
; ============================================================================

(pie_value) @number
(cardinality) @number
(journey_task_score) @number

; ============================================================================
; Operators and Arrows
; ============================================================================

; Flow diagram arrows
(flow_link_simplelink) @operator
(flow_link_arrowtext) @operator
(flow_link_middletext) @operator
(flow_link_arrow) @operator
(flow_link_arrow_start) @operator

; Explicit flow arrow tokens
"-->" @operator
"--" @operator
"->" @operator
"-." @operator
".-" @operator
".." @operator

; Sequence diagram signal types
(sequence_signal_type) @operator
(sequence_signal_plus_sign) @operator
(sequence_signal_minus_sign) @operator
(solid_arrow) @operator
(dotted_arrow) @operator
(solid_open_arrow) @operator
(dotted_open_arrow) @operator
(solid_cross) @operator
(dotted_cross) @operator
(solid_point) @operator
(dotted_point) @operator

; Explicit sequence arrows
"->" @operator
"-->" @operator
"-)" @operator

; State diagram arrows
(state_arrow) @operator

; ER diagram relationships
(er_relation) @operator
(er_reltype_identifying) @operator
(er_reltype_non_identifying) @operator

; ER cardinality
(er_cardinarity_zero_or_one) @operator
(er_cardinarity_zero_or_more) @operator
(er_cardinarity_one_or_more) @operator
(er_cardinarity_only_one) @operator

; ER relationship symbols (using only valid anonymous nodes)
"|o" @operator
"o|" @operator
"o{" @operator
"}o" @operator
"|{" @operator
"}|" @operator

; Class diagram relationships
(class_relation) @operator
(class_reltype_extension) @operator
(class_reltype_composition) @operator
(class_reltype_aggregation) @operator
(class_reltype_dependency) @operator

; Class line types
(class_linetype_solid) @operator
(class_linetype_dotted) @operator

; Explicit class relationship symbols
"|>" @operator
"<|" @operator

; Generic operators
"&" @operator
"|" @operator

; ============================================================================
; Punctuation and Delimiters
; ============================================================================

; Standard delimiters
":" @punctuation.delimiter
":::" @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter

; Standard brackets
"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"<" @punctuation.bracket
">" @punctuation.bracket
"<<" @punctuation.bracket
">>" @punctuation.bracket

; Flow diagram special node shapes
"{{" @punctuation.special
"}}" @punctuation.special
"((" @punctuation.special
"))" @punctuation.special
"[(" @punctuation.special
")]" @punctuation.special
"[[" @punctuation.special
"]]" @punctuation.special
"[/" @punctuation.special
"/]" @punctuation.special
"[\\" @punctuation.special
"\\]" @punctuation.special
"[|" @punctuation.special
"|]" @punctuation.special

; ============================================================================
; Node Shape Types (Flow/Mind Maps)
; ============================================================================

; Flow diagram vertex shapes
(flow_vertex_rect) @type.builtin
(flow_vertex_round) @type.builtin
(flow_vertex_stadium) @type.builtin
(flow_vertex_subroutine) @type.builtin
(flow_vertex_cylinder) @type.builtin
(flow_vertex_circle) @type.builtin
(flow_vertex_ellipse) @type.builtin
(flow_vertex_diamond) @type.builtin
(flow_vertex_hexagon) @type.builtin
(flow_vertex_odd) @type.builtin
(flow_vertex_trapezoid) @type.builtin
(flow_vertex_inv_trapezoid) @type.builtin
(flow_vertex_square) @type.builtin
(flow_vertex_leanright) @type.builtin
(flow_vertex_leanleft) @type.builtin

; Mind map node shapes
(mmap_node_square) @type.builtin
(mmap_node_rounded) @type.builtin
(mmap_node_circle) @type.builtin
(mmap_node_bang) @type.builtin
(mmap_node_cloud) @type.builtin
(mmap_node_hexagon) @type.builtin
(mmap_class) @attribute
(mmap_icon) @attribute

; ============================================================================
; Visibility Modifiers (Class Diagrams)
; ============================================================================

(class_visibility_public) @attribute
(class_visibility_private) @attribute
(class_visibility_protected) @attribute
(class_visibility_internal) @attribute

; Visibility symbols
"+" @attribute
"-" @attribute
"#" @attribute
"~" @attribute

; ============================================================================
; Annotations and Attributes
; ============================================================================

(annotation) @attribute
(class_annotation_line) @attribute

; ER diagram key types
(er_attribute_key_type_pk) @attribute
(er_attribute_key_type_fk) @attribute
"pk" @attribute
"fk" @attribute

; State placement
(state_note_placement) @attribute

; Gitgraph commit types
(gitgraph_commit_attr_type) @attribute

; ============================================================================
; Special Symbols and Constants
; ============================================================================

; State diagram start/end
"[*]" @constant.builtin

; Quadrant identifiers
(quadrant_1) @constant
(quadrant_2) @constant
(quadrant_3) @constant
(quadrant_4) @constant

; Journey actors
(journey_task_actors) @variable

; Gantt special keywords
(gantt_excludes) @keyword
(gantt_includes) @keyword
(gantt_end_dates) @keyword
(gantt_today_marker) @constant
(gantt_top_axis) @constant

; Pie chart data flag
(pie_showdata) @keyword

; ============================================================================
; Functions and Methods
; ============================================================================

; Class diagram methods
(class_method_line) @function.method

; ============================================================================
; Types and Classes
; ============================================================================

; Style names
(class_style_name) @type

; ============================================================================
; Special Constructs
; ============================================================================

; Sequence diagram blocks
(sequence_stmt_alt_branch) @keyword
(sequence_stmt_loop_inner) @keyword.control
(sequence_stmt_opt_inner) @keyword.control
(sequence_stmt_rect_inner) @keyword

; State diagram composite states
(state_composite_body) @namespace
(state_division) @punctuation.delimiter

; Flow subgraph inner content
(flow_stmt_subgraph_inner) @namespace

; ER entity block
(er_stmt_entity_block_inner) @namespace

; Requirement block body
(requirement_block_body) @namespace

; Architecture service body
(architecture_service_body) @namespace

; ============================================================================
; Errors
; ============================================================================

(ERROR) @error
