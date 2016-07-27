%{ /* C Declarations and Definitions */
#include <string>
#include <iostream>
using namespace std;
extern int yylex();
void yyerror(string s);
%}

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

%token <intval>  INT_CONSTANT;
%token <floatval> FLOAT_CONSTANT
%token <intval>	ENUMERATION
%token <charval> CHAR_CONSTANT

%token <charval> STRING_LITERAL;

%token PTR_OP;
%token INC_OP;
%token DEC_OP;
%token LEFT_SHIFT;
%token RIGHT_SHIFT;
%token LE_OP;
%token GE_OP;
%token EQ_OP;
%token NE_OP;
%token AND_OP;
%token OR_OP;
%token ELLIPSIS;
%token MUL_ASSIGN;
%token DIV_ASSIGN;
%token MOD_ASSIGN;
%token ADD_ASSIGN;
%token SUB_ASSIGN;
%token LEFT_ASSIGN;
%token RIGHT_ASSIGN;
%token AND_ASSIGN;
%token XOR_ASSIGN;
%token OR_ASSIGN;
%%


statement : ;


%%
void yyerror(string s) {
	cout << s << endl;
}

