%{ /* C Declarations and Definitions */
#include <string>
#include <iostream>
	
#define YYDEBUG 1
	
extern int yydebug;

using namespace std;
extern int yylex();
extern int yyparse();
void yyerror(string s);
%}
%expect 1
%union {
  int intval;
  float floatval;
  char *charval;
}

%token RESTRICT_KEYWORD;
%token UNSIGNED_KEYWORD;
%token AUTO_KEYWORD;
%token ENUM_KEYWORD;
%token BREAK_KEYWORD;
%token EXTERN_KEYWORD;
%token RETURN_KEYWORD;
%token VOID_KEYWORD;
%token CASE_KEYWORD;
%token FLOAT_KEYWORD;
%token SHORT_KEYWORD;
%token VOLATILE_KEYWORD;
%token CHAR_KEYWORD;
%token FOR_KEYWORD;
%token SIGNED_KEYWORD;
%token WHILE_KEYWORD;
%token CONST_KEYWORD;
%token GOTO_KEYWORD;
%token SIZEOF_KEYWORD;
%token BOOL_KEYWORD;
%token CONTINUE_KEYWORD;
%token IF_KEYWORD;
%token STATIC_KEYWORD;
%token COMPLEX_KEYWORD;
%token DEFAULT_KEYWORD;
%token INLINE_KEYWORD;
%token STRUCT_KEYWORD;
%token IMAGINARY_KEYWORD;
%token DO_KEYWORD;
%token INT_KEYWORD;
%token SWITCH_KEYWORD;
%token DOUBLE_KEYWORD;
%token LONG_KEYWORD;
%token TYPEDEF_KEYWORD;
%token ELSE_KEYWORD;
%token REGISTER_KEYWORD;
%token UNION_KEYWORD;

%token <intval> IDENTIFIER;

%token  <intval> CONSTANT;

%token <charval> STRING_LITERAL;

%token POINTER_OP;
%token INCREMENT_OP;
%token DECREMENT_OP;
%token LEFT_SHIFT;
%token RIGHT_SHIFT;
%token LESS_EQ_OP;
%token GREATER_EQ_OP;
%token EQ_OP;
%token NOT_EQ_OP;
%token AND_OP;
%token OR_OP;
%token ELLIPSIS;
%token MUL_ASSIGNMENT;
%token DIV_ASSIGNMENT;
%token MOD_ASSIGNMENT;
%token ADD_ASSIGNMENT;
%token SUB_ASSIGNMENT;
%token LEFT_ASSIGNMENT;
%token RIGHT_ASSIGNMENT;
%token AND_ASSIGNMENT;
%token XOR_ASSIGNMENT;
%token OR_ASSIGNMENT;


%start translation_unit

%%
//Expressions

primary_expression
    : IDENTIFIER	{printf("primary_expression -> IDENTIFIER\n");}
    | CONSTANT		{printf("primary_expression -> CONSTANT\n");}
    | STRING_LITERAL	{printf("primary_expression -> STRING_LITERAL\n");}
    | '(' expression ')'	{printf("primary_expression -> (expression)\n");}
    ;
postfix_expression
    : primary_expression	{printf("postfix_expression -> primary_expression\n");}
    | postfix_expression '[' expression ']'	{printf("postfix_expression -> postfix_expression [expression]\n");}
    | postfix_expression '(' ')'	{printf("postfix_expression -> postfix_expression ()\n");}
    | postfix_expression '(' argument_expression_list ')'	{printf("postfix_expression -> postfix_expression (argument_expression_list)\n");}
    | postfix_expression '.' IDENTIFIER	{printf("postfix_expression -> postfix_expression . IDENTIFIER\n");}
    | postfix_expression POINTER_OP IDENTIFIER	{printf("postfix_expression -> postfix_expression -> IDENTIFIER\n");}
    | postfix_expression INCREMENT_OP	{printf("postfix_expression -> ++\n");}
    | postfix_expression DECREMENT_OP	{printf("postfix_expression -> --\n");}
    | '(' type_name ')' '{' initializer_list '}'	{printf("postfix_expression -> (type_name){initializer_list}\n");}
    | '(' type_name ')' '{' initializer_list ',' '}'	{printf("postfix_expression -> (type_name){initializer_list ,}\n");}
    ;


argument_expression_list
    : assignment_expression	{printf("argument_expression_list -> assignment_expression");}
    | argument_expression_list ',' assignment_expression	{printf("argument_expression_list -> argument_expression_list , assignment_expression\n");}
    ;

unary_expression
    : postfix_expression	{printf("unary_expression -> postfix_expression\n");}
    | INCREMENT_OP unary_expression	{printf("unary_expression -> INCREMENT_OP unary_expression\n");}
    | DECREMENT_OP unary_expression	{printf("unary_expression -> DECREMENT_OP unary_expression\n");}
    | unary_operator cast_expression	{printf("unary_expression -> unary_operator cast_expression\n");}
    | SIZEOF_KEYWORD unary_expression	{printf("unary_expression -> SIZEOF_KEYWORD unary_expression\n");}
    | SIZEOF_KEYWORD '(' type_name ')'	{printf("unary_expression -> SIZEOF_KEYWORD (type_name)\n");}
    ;

unary_operator
    : '&'	{printf("unary_operator -> '&'\n");}
    | '*'	{printf("unary_operator -> '*'\n");}
    | '+'	{printf("unary_operator -> '+'\n");}
    | '-'	{printf("unary_operator -> '-'\n");}
    | '~'	{printf("unary_operator -> '~'\n");}
    | '!'	{printf("unary_operator -> '!'\n");}
    ;

cast_expression
    : unary_expression	{printf("cast_expression -> unary_expression\n");}
    | '(' type_name ')' cast_expression	{printf("cast_expression -> (type_name) cast_expression\n");}
    ;

multiplicative_expression	
    : cast_expression	{printf("multiplicative_expression -> cast_expression\n");}
    | multiplicative_expression '*' cast_expression	{printf("multiplicative_expression -> multiplicative_expression * cast_expression\n");}
    | multiplicative_expression '/' cast_expression	{printf("multiplicative_expression -> multiplicative_expression / cast_expression\n");}
    | multiplicative_expression '%' cast_expression	{printf("multiplicative_expression -> multiplicative_expression % cast_expression\n");}
    ;

additive_expression
    : multiplicative_expression	{printf("additive_expression -> multiplicative_expression\n");}
    | additive_expression '+' multiplicative_expression	{printf("additive_expression -> additive_expression + multiplicative_expression\n");}
    | additive_expression '-' multiplicative_expression	{printf("additive_expression -> additive_expression - multiplicative_expression\n");}
    ;

shift_expression
    : additive_expression	{printf("shift_expression -> additive_expression\n");}
    | shift_expression LEFT_SHIFT additive_expression	{printf("shift_expression -> shift_expression << additive_expression\n");}
    | shift_expression RIGHT_SHIFT additive_expression	{printf("shift_expression -> shift_expression >> additive_expression\n");}
    ;
relational_expression
    : shift_expression	{printf("relational_expression -> shift_expression\n");}
    | relational_expression '<' shift_expression	{printf("relational_expression -> relational_expression < shift_expression\n");}
    | relational_expression '>' shift_expression	{printf("relational_expression -> relational_expression > shift_expression\n");}
    | relational_expression LESS_EQ_OP shift_expression	{printf("relational_expression -> relational_expression <= shift_expression\n");}
    | relational_expression GREATER_EQ_OP shift_expression	{printf("relational_expression -> relational_expression >= shift_expression\n");}
    ;
equality_expression
    : relational_expression	{printf("equality_expression -> relational_expression\n");}
    | equality_expression EQ_OP relational_expression	{printf("equality_expression -> equality_expression == relational_expression\n");}
    | equality_expression NOT_EQ_OP relational_expression	{printf("equality_expression -> equality_expression != relational_expression\n");}
    ;

and_expression
    : equality_expression	{printf("and_expression -> equality_expression\n");}
    | and_expression '&' equality_expression	{printf("and_expression -> and_expression & equality_expression\n");}
    ;

exclusive_or_expression
    : and_expression	{printf("exclusive_or_expression -> and_expression\n");}
    | exclusive_or_expression '^' and_expression	{printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n");}
    ;
inclusive_or_expression
    : exclusive_or_expression	{printf("inclusive_or_expression -> exclusive_or_expression\n");}
    | inclusive_or_expression '|' exclusive_or_expression	{printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n");}
    ;
logical_and_expression
    : inclusive_or_expression	{printf("logical_and_expression -> inclusive_or_expression\n");}
    | logical_and_expression AND_OP inclusive_or_expression	{printf("logical_or_expression -> logical_or_expression && inclusive_or_expression\n");}
    ;
logical_or_expression
    : logical_and_expression	{printf("logical_or_expression -> logical_and_expression\n");}
    | logical_or_expression OR_OP logical_and_expression	{printf("logical_or_expression -> logical_or_expression || logical_and_expression\n");}
    ;
conditional_expression
    : logical_or_expression	{printf("conditional_expression -> logical_or_expression\n");}
    | logical_or_expression '?' expression ':' conditional_expression	{printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n");}
    ;
assignment_expression
    : conditional_expression	{printf("assignment_expression -> conditional_expression\n");}
    | unary_expression assignment_operator assignment_expression	{printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n");}
    ;

assignment_operator
    : '='	{printf("assignment_operator -> '='\n");}
    | MUL_ASSIGNMENT	{printf("assignment_operator -> '*='\n");}
    | DIV_ASSIGNMENT	{printf("assignment_operator -> '/='\n");}
    | MOD_ASSIGNMENT	{printf("assignment_operator -> '%='\n");}
    | ADD_ASSIGNMENT	{printf("assignment_operator -> '+='\n");}
    | SUB_ASSIGNMENT	{printf("assignment_operator -> '-='\n");}
    | LEFT_ASSIGNMENT	{printf("assignment_operator -> <<=\n");}
    | RIGHT_ASSIGNMENT	{printf("assignment_operator -> >>=\n");}
    | AND_ASSIGNMENT	{printf("assignment_operator -> &=\n");}
    | XOR_ASSIGNMENT	{printf("assignment_operator -> ^=\n");}
    | OR_ASSIGNMENT	{printf("assignment_expression -> '|='\n");}
    ;
expression
    : assignment_expression	{printf("expression -> assignment_expression\n");}
    | expression ',' assignment_expression	{printf("expression -> expression , assignment_expression\n");}
    ;
constant_expression
    : conditional_expression	{printf("constant_expression -> conditional_expression\n");}
    ;


// Declarations

declaration
    : declaration_specifiers ';'	{printf("declaration -> declaration_specifiers\n");}
    | declaration_specifiers init_declarator_list ';'	{printf("declaration -> declaration_specifiers init_declarator_list\n");}
    ;

declaration_specifiers
    : storage_class_specifier	{printf("declaration_specifiers -> storage_class_specifier\n");}
    | storage_class_specifier declaration_specifiers	{printf("declaration_specifiers -> storage_class_specifier declaration_specifiers\n");}
    | type_specifier	{printf("declaration_specifiers -> type_specifier\n");}
    | type_specifier declaration_specifiers	{printf("declaration_specifiers -> type_specifier declaration_specifiers\n");}
    | type_qualifier	{printf("declaration_specifiers -> type_qualifier\n");}
    | type_qualifier declaration_specifiers	{printf("declaration_specifiers -> type_qualifier declaration_specifiers\n");}
    | function_specifier	{printf("declaration_specifiers -> function_specifier\n");}
    | function_specifier declaration_specifiers	{printf("declaration_specifiers -> function_specifier declaration_specifiers\n");}
    ;


init_declarator_list
    : init_declarator	{printf("init_declarator_list -> init_declarator\n");}
    | init_declarator_list ',' init_declarator	{printf("init_declarator_list -> init_declarator_list , init_declarator\n");}
    ;


init_declarator
    : declarator	{printf("init_declarator -> declarator\n");}
    | declarator '=' initializer	{printf("init_declarator -> declarator = initializer\n");}
    ;
storage_class_specifier
    : EXTERN_KEYWORD	{printf("storage_class_specifier -> extern\n");}
    | STATIC_KEYWORD	{printf("storage_class_specifier -> static\n");}
    | AUTO_KEYWORD	{printf("storage_class_specifier -> auto\n");}
    | REGISTER_KEYWORD	{printf("storage_class_specifier -> register\n");}
    ;

type_specifier
    : VOID_KEYWORD	{printf("type_specifier -> void\n");}
    | CHAR_KEYWORD	{printf("type_specifier -> char\n");}
    | SHORT_KEYWORD	{printf("type_specifier -> short\n");}
    | INT_KEYWORD	{printf("type_specifier -> int\n");}
    | LONG_KEYWORD	{printf("type_specifier -> long\n");}
    | FLOAT_KEYWORD	{printf("type_specifier -> float\n");}
    | DOUBLE_KEYWORD	{printf("type_specifier -> double\n");}
    | SIGNED_KEYWORD	{printf("type_specifier -> signed\n");}
    | UNSIGNED_KEYWORD	{printf("type_specifier -> unsigned\n");}
    | BOOL_KEYWORD	{printf("type_specifier -> _Bool\n");}
    | COMPLEX_KEYWORD	{printf("type_specifier -> _Complex\n");}
    | IMAGINARY_KEYWORD	{printf("type_specifier -> _Imaginary\n");}
    | enum_specifier
    ;

specifier_qualifier_list
    : type_specifier 	{printf("specifier_qualifier_list -> type_specifier\n");}
    | type_specifier specifier_qualifier_list	{printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list\n");}
    | type_qualifier	{printf("specifier_qualifier_list -> type_qualifier\n");}
    | type_qualifier specifier_qualifier_list	{printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n");}
    ;
enum_specifier
    : ENUM_KEYWORD '{' enumerator_list '}'	{printf("enum_specifier -> enum {enumerator_list}\n");}
    | ENUM_KEYWORD IDENTIFIER '{' enumerator_list '}'	{printf("enum_specifier -> enum IDENTIFIER {enumerator_list} \n");}
    | ENUM_KEYWORD '{' enumerator_list ',' '}'	{printf("enum_specifier -> enum {enumerator_list, }\n");}
    | ENUM_KEYWORD IDENTIFIER '{' enumerator_list ',' '}'	{printf("enum_specifier -> enum IDENTIFIER {enumerator_list ,}\n");}
    | ENUM_KEYWORD IDENTIFIER	{printf("enum_specifier->enum IDENTIFIER\n");}
    ;
enumerator_list
    : enumerator	{printf("enumerator_list -> enumerator\n");}
    | enumerator_list ',' enumerator	{printf("enumerator_list -> enumerator_list , enumerator\n");}
    ;
enumerator
    : enumeration_constant	{printf("enumerator -> enumeration_constant\n");}
    | enumeration_constant '=' constant_expression	{printf("enumerator -> enumeration_constant = constant_expression\n");}
    ;
enumeration_constant
    : IDENTIFIER	{printf("enumeration_constant -> IDENTIFIER\n");}
    ;
type_qualifier
    : CONST_KEYWORD	{printf("type_qualifier -> const\n");}
    | RESTRICT_KEYWORD	{printf("type_qualifier -> restrict\n");}
    | VOLATILE_KEYWORD	{printf("type_qualifier -> volatile\n");}
    ;
function_specifier
    : INLINE_KEYWORD	{printf("function_specifier -> inline\n");}
declarator
    : pointer direct_declarator	{printf("declarator -> pointer direct_declarator\n");}
    | direct_declarator	{printf("declarator -> direct_declarator\n");}
    ;


direct_declarator 
    : IDENTIFIER	{printf("direct_declarator -> IDENTIFIER\n");}
    | '(' declarator ')'	{printf("direct_declarator -> (declarator)\n");}
    | direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'	{printf("direct_declarator -> direct_declarator[type_qualifier_list_opt assignment_expression_opt]\n");}
    | direct_declarator '[' STATIC_KEYWORD type_qualifier_list_opt assignment_expression ']'	{printf("direct_declarator ->direct_declarator [static type_qualifier_list assignment_expression]\n");}
    | direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'	{printf("direct_declarator -> direct_declarator[type_qualifier_list static assignment_expression]\n");}
    | direct_declarator '[' type_qualifier_list_opt '*' ']'	{printf("direct_declarator -> direct_declarator[type_qualifier_list_opt *]\n");}
    | direct_declarator '(' parameter_type_list ')'	{printf("direct_declarator -> direct_declarator (parameter_type_list)\n");}
    | direct_declarator '(' identifier_list_opt ')'	{printf("direct_declarator -> direct_declarator (identifier_list_opt)\n");}
    ;
identifier_list_opt
    : identifier_list	{printf("identifier_list_opt -> identifier_list\n");}
    |
    ;
assignment_expression_opt
   : assignment_expression	{printf("assignment_expression_opt -> assignment_expression\n");}
   |
   ;

type_qualifier_list_opt
    : type_qualifier_list	{printf("type_qualifier_list_opt -> type_qualifier_list\n");}
    |
    ;

pointer
    : '*'	{printf("pointer -> '*'\n");}
    | '*' type_qualifier_list	{printf("pointer -> *type_qualifier_list\n");}
    | '*' pointer	{printf("pointer -> *pointer\n");}
    | '*' type_qualifier_list pointer	{printf("pointer -> *type_qualifier_list pointer\n");}
    ;
type_qualifier_list
    : type_qualifier	{printf("type_qualifier_list -> type_qualifier\n");}
    | type_qualifier_list type_qualifier	{printf("type_qualifier_list -> type_qualifier_list type_qualifier\n");}
    ;
parameter_type_list
    : parameter_list	{printf("parameter_type_list -> parameter_list\n");}
    | parameter_list ',' ELLIPSIS	{printf("parameter_type_list -> parameter_list, ELLIPSIS\n");}
    ;
parameter_list
    : parameter_declaration	{printf("parameter_list -> parameter_declaration\n");}
    | parameter_list ',' parameter_declaration	{printf("parameter_list -> parameter_list, parameter_declaration\n");}
    ;
parameter_declaration
    : declaration_specifiers declarator	{printf("parameter_declaration -> declaration_specifiers declarator\n");}
    | declaration_specifiers	{printf("parameter_declaration -> declaration_specifiers\n");}
    ;

identifier_list
    : IDENTIFIER	{printf("identifier_list -> IDENTIFIER\n");}
    | identifier_list ',' IDENTIFIER	{printf("identifier_list -> identifier_list, IDENTIFIER\n");}
    ;

type_name
    : specifier_qualifier_list	{printf("type_name -> specifier_qualifier_list\n");}
    ;

initializer
    : assignment_expression	{printf("initializer -> assignment_expression\n");}
    | '{' initializer_list '}'	{printf("initializer -> {initializer_list}\n");}
    | '{' initializer_list ',' '}'	{printf("initializer -> {initializer_list, }\n");}
    ;

initializer_list
    : initializer	{printf("initializer_list -> initializer\n");}
    | designation initializer	{printf("initializer_list -> designation initializer\n");}
    | initializer_list ',' initializer	{printf("initializer_list -> initializer_list, initializer\n");}
    | initializer_list ',' designation initializer	{printf("initializer_list -> initializer_list, designation initializer\n");}
    ;

designation
    : designator_list '='	{printf("designation -> designator_list -\n");}
    ;

designator_list
    : designator	{printf("designator_list -> designator\n");}
    | designator_list designator	{printf("designator_list -> designator_list designator\n");}
    ;
designator
    : '[' constant_expression ']'	{printf("designator -> [constant_expression]\n");}
    | '.' IDENTIFIER	{printf("designator -> IDENTIFIER\n");}
    ;


// Statements

statement
    : labeled_statement	{printf("statement -> labeled_statement\n");}
    | compound_statement	{printf("statement -> compound_statement\n");}
    | expression_statement	{printf("statement -> expression_statement\n");}
    | selection_statement	{printf("statement -> selection_statement\n");}
    | iteration_statement	{printf("statement -> iteration_statement\n");}
    | jump_statement	{printf("statement -> jump_statement\n");}
    ;
labeled_statement
    : IDENTIFIER ':' statement	{printf("labeled_statement -> IDENTIFIER : statement\n");}
    | CASE_KEYWORD constant_expression ':' statement	{printf("labeled_statement -> case constant_expression : statement\n");}
    | DEFAULT_KEYWORD ':' statement	{printf("labeled_statement -> default : statement\n");}
    ;

compound_statement
	:'{' '}'	{printf("compound_statement -> {}\n");}
	|'{' block_item_list '}'	{printf("compound_statement -> {block_item_list}\n");}
    ;

block_item_list
    : block_item	{printf("block_item_list -> block_item\n");}
    | block_item_list block_item	{printf("block_item_list -> block_item_list block_item\n");}
    ;
block_item
    : declaration	{printf("block_item -> declaration\n");}
    | statement	{printf("block_item -> statement\n");}
    ;
expression_statement
    : ';'	{printf("expression_statement -> ;\n");}
    | expression ';'	{printf("expression_statement -> expression ;\n");}
    ;
selection_statement
    : IF_KEYWORD '(' expression ')' statement	{printf("selection_statement -> if (expression) statement\n");}
    | IF_KEYWORD '(' expression ')' statement ELSE_KEYWORD statement	{printf("selection_statement -> if(expression) statement else statement\n");}
    | SWITCH_KEYWORD '(' expression ')' statement	{printf("selection_statement -> switch(expression) statement\n");}
    ;
iteration_statement
    : WHILE_KEYWORD '(' expression ')' statement	{printf("iteration_statement -> while(expression) statement\n");}
    | DO_KEYWORD statement WHILE_KEYWORD '(' expression ')' ';'	{printf("iteration_statement -> do statement while(expression);\n");}
    | FOR_KEYWORD '(' expression_opt ';' expression_opt ';' expression_opt ')' statement	{printf("iteration_statement -> for(expression_opt expression_opt expression_opt) statement\n");}
    | FOR_KEYWORD '(' declaration expression_opt ';' expression_opt ')' statement	{printf("iteration_statement -> for (declaration expression_opt expression_opt) statement\n");}
    ;
expression_opt
	:expression	{printf("expression_opt -> expression\n");}
	|
	;
jump_statement
    : GOTO_KEYWORD IDENTIFIER ';'	{printf("jump_statement -> goto IDENTIFIER :\n");}
    | CONTINUE_KEYWORD ';'	{printf("jump_statement -> continue ;\n");}
    | BREAK_KEYWORD ';'	{printf("jump_statement -> break;\n");}
    | RETURN_KEYWORD ';'	{printf("jump_statement -> return;\n");}
    | RETURN_KEYWORD expression ';'	{printf("jump_statement -> return expression;\n");}
    ;


// External Definitions

translation_unit
    : external_declaration	{printf("translation_unit -> external_declaration\n");}
    | translation_unit external_declaration	{printf("translation_unit -> translation_unit external_declaration\n");}
    ;

external_declaration
    : function_definition	{printf("external_declaration -> function_definition\n");}
    | declaration	{printf("external_declaration -> declaration\n");}
    ;

function_definition
    : declaration_specifiers declarator declaration_list compound_statement	{printf("function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");}
    | declaration_specifiers declarator compound_statement	{printf("function_definition -> declaration_specifiers declarator compound_statement\n");}
    ;
declaration_list
    :declaration	{printf("declaration_list -> declaration\n");}
    |declaration_list declaration	{printf("declaration_list -> declaration_list declaration\n");}
    ;



%%
void yyerror(string s) {
	cout << s << endl;
}


