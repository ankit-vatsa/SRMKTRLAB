%option noyywrap
%{
	#include<stdio.h>
%}

%%
[A-Z]+ {printf("\n%s : uppercase letter",yytext);}
[a-z]+ {printf("\n%s : lowercase letter",yytext);}
[0-9]+ {printf("\n%s : Number",yytext);}
. {printf("\n%s : Other Characters",yytext);}
\n {return 0;}
%%

int main()
{
        yylex();
	return 0;
}
