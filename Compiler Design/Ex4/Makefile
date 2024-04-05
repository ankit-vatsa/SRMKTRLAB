a.out: flex.o bison.tab.o
	gcc flex.o bison.tab.o -lm
lex.o: flex.l
	flex flex.l
	gcc -c lex.yy.c
bison.tab.o: bison.y
	bison bison.y
	sed -i 's/^YYSTYPE yylval;//g' bison.tab.c
	gcc -c bison.tab.c
clean:
	rm *.o *.c a.out
