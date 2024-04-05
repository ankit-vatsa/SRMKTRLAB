%{
#include <stdio.h>
#define NUMBER 258
typedef union {
int d;
} YYSTYPE;
YYSTYPE yylval;
%}
%%
[ \t]+ {}
"(" { return '('; }
")" { return ')'; }
"+" { return '+'; }
"-" { return '-'; }
"*" { return '*'; }
"/" { return '/'; }
"^" { return '^'; }
[0-9]+ {
  yylval.d = atoi(yytext);
  return NUMBER;
}
%%
int yywrap() { return 1; }
