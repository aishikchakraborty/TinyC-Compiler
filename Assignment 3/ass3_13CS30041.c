#include "y.tab.h"
#include <stdio.h>
extern int yylex();
extern char* yytext;
int main() {
    int token ;
	while((token = yylex())!=0)
    {
		switch (token) 
        {
	       case AUTO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case ENUM_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case RESTRICT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case UNSIGNED_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case BREAK_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case EXTERN_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case RETURN_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case VOID_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case CASE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case FLOAT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case SHORT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case VOLATILE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case CHAR_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case FOR_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case SIGNED_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case WHILE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case CONST_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case GOTO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case SIZEOF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case BOOL_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case CONTINUE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case IF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case STATIC_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case COMPLEX_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case DEFAULT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case INLINE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case STRUCT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case IMAGINARY_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case DO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case INT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case SWITCH_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case DOUBLE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case LONG_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case TYPEDEF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case ELSE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case REGISTER_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case UNION_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
	         break;
	       case IDENTIFIER : printf("<IDENTIFIER, %d, %s>\n",token,yytext);
	         break;
	       case INT_CONSTANT : printf("<INT_CONSTANT, %d, %s>\n",token,yytext);
	         break;
  	       case FLOAT_CONSTANT : printf("<FLOAT_CONSTANT, %d, %s>\n",token,yytext);
  	         break;
  	       case ENUMERATION : printf("<ENUMERATION, %d, %s>\n",token,yytext);
  	         break;
  	       case CHAR_CONSTANT : printf("<CHAR_CONSTANT, %d, %s>\n",token,yytext);
  	         break;
		   case STRING_LITERAL : printf("<STRING LITERAL, %d, %s>\n",token,yytext);
	         break;
	       case LEFT_ASSIGN : printf("<LEFT_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case ELLIPSIS : printf("<ELLIPSIS, %d, %s>\n",token,yytext);
	         break;
	       case RIGHT_ASSIGN : printf("<RIGHT_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case PTR_OP : printf("<PTR_OP, %d, %s>\n",token,yytext);
	         break;
	       case INC_OP : printf("<INC_OP, %d, %s>\n",token,yytext);
	         break;
	       case DEC_OP : printf("<DEC_OP, %d, %s>\n",token,yytext);
	         break;
	       case LEFT_SHIFT : printf("<LEFT_SHIFT, %d, %s>\n",token,yytext);
	         break;
	       case RIGHT_SHIFT : printf("<RIGHT_SHIFT, %d, %s>\n",token,yytext);
	         break;
	       case LE_OP : printf("<LE_OP, %d, %s>\n",token,yytext);
	         break;
	       case GE_OP : printf("<GE_OP, %d, %s>\n",token,yytext);
	         break;
	       case EQ_OP : printf("<EQ_OP, %d, %s>\n",token,yytext);
	         break;
	       case NE_OP : printf("<NE_OP, %d, %s>\n",token,yytext);
	         break;
	       case AND_OP : printf("<AND_OP, %d, %s>\n",token,yytext);
	         break;
	       case OR_OP : printf("<OR_OP, %d, %s>\n",token,yytext);
	         break;
	       case MUL_ASSIGN : printf("<MUL_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case DIV_ASSIGN : printf("<DIV_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case MOD_ASSIGN : printf("<MOD_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case ADD_ASSIGN : printf("<ADD_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case SUB_ASSIGN : printf("<MINUS_EQUAL, %d, %s>\n",token,yytext);
	         break;
	       case AND_ASSIGN : printf("<AND_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case XOR_ASSIGN : printf("<XOR_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case OR_ASSIGN : printf("<OR_ASSIGN, %d, %s>\n",token,yytext);
	         break;
	       case '[' : printf("<SQUARE_BRAC OPEN, %d, %s>\n",token,yytext);
	         break;
	       case ']' : printf("<SQUARE_BRAC CLOSED, %d, %s>\n",token,yytext);
	         break;
	       case '(' : printf("<PARANTHESIS OPEN, %d, %s>\n",token,yytext);
	         break;
	       case ')': printf("<PARANTHESIS CLOSED, %d, %s>\n",token,yytext);
	         break;
	       case '{' : printf("<CURLY_BRAC OPEN, %d, %s>\n",token,yytext);
	         break;
	       case '}' : printf("<CURLY_BRAC CLOSED, %d, %s>\n",token,yytext);
	         break;
	       case '.' : printf("<DOT, %d, %s>\n",token,yytext);
	         break;
	       case '&' : printf("<BITWISE AND, %d, %s>\n",token,yytext);
	         break;
	       case '*' : printf("<MULT, %d, %s>\n",token,yytext);
	         break;
	       case '+' : printf("<ADD, %d, %s>\n",token,yytext);
	         break;
	       case '-' : printf("<SUBTRACT, %d, %s>\n",token,yytext);
	         break;
	       case '~' : printf("<BITWISE NOT, %d, %s>\n",token,yytext);
	         break;
	       case '!' : printf("<LOGICAL NOT, %d, %s>\n",token,yytext);
	         break;
	       case '/' : printf("<DIVIDE, %d, %s>\n",token,yytext);
	         break;
	       case '%' : printf("<MODULO, %d, %s>\n",token,yytext);
	         break;
	       case '<' : printf("<LESS THAN, %d, %s>\n",token,yytext);
	         break;
	       case '>' : printf("<GREATER THAN, %d, %s>\n",token,yytext);
	         break;
	       case '^' : printf("<NOT, %d, %s>\n",token,yytext);
	         break;
	       case '|' : printf("<BITIWSE OR, %d, %s>\n", token,yytext);
	         break;
	       case '?' : printf("<TERNARY, %d, %s>\n",token,yytext);
	         break;
	       case ':' : printf("<COLON, %d, %s>\n",token,yytext);
	         break;
	       case ';' : printf("<TERMINATOR, %d, %s>\n",token,yytext);
	         break;
	       case '=' : printf("<EQUALS, %d, %s>\n",token,yytext);
	         break;
	       case ',' : printf("<COMMA, %d, %s>\n",token,yytext);
	         break;
	       case '#' : printf("<HASHTAG, %d, %s>\n",token,yytext);
	         break;
	       	
       }

    }
	return 0;
}
