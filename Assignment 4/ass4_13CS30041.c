#include <stdio.h>

extern int yyparse();
int main()
{
	printf("****************************************************************************\n");
	printf("**************************The reductions are:********************************\n");
	int failure = yyparse();
	if(failure != 0)
		printf("********************Parsing Failure******************\n");
	else
		printf("********************Parsing Successful*******************\n");
	return 0;
}
