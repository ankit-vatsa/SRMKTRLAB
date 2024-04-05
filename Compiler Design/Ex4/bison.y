%{
#include <math.h>
%}
%{void yyerror(char *ps, ...) {printf("%s\n", ps);}%}
%union {int d;}
%token <d> NUM
%token '(' ')'
%left '+'
%left '-'
%left '*'
%left '/'
%right '^'
%type <d> exp factor pow term
%start cal

%%
cal
: exp
{ printf("The result is %d\n", $1); }
;
exp
: exp '+' factor
{ $$ = $1 + $3; }
| exp '-' factor
{ $$ = $1 - $3; }
| factor
{ $$ = $1; }
;
factor
: factor '*' pow
{ $$ = $1 * $3; }
| factor '/' pow
{ $$ = $1 / $3; }
| pow
{ $$ = $1; }
;
pow
: term '^' pow
{ $$ = pow($1, $3); }
| term
{ $$ = $1; }
;
term
: NUM
{ $$ = $1; }
| '(' exp ')'
{ $$ = $2; }
;

%%
int main() {
	yyparse();
	return 0;
}
