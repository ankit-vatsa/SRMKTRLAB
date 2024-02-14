%option noyywrap
%{
	#include<stdio.h>
%}

letter [a-zA-Z]
digit [0-9]
relop <|<=|>|>=|=|#

%%
if|then|while {printf("\n%s : Keyword",yytext);}
{letter}({letter}|{digit})* {printf("\n%s : Variable",yytext);}
{relop} {printf("\n%s : Relational operator",yytext);}
. {printf("\n%s : Other Characters",yytext);}
\n {return 0;}
%%

int main()
{
        yylex();
	return 0;
}

