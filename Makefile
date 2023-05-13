build:
	bison -vd --graph --verbose --debug L.y
	flex L.l
	gcc -o L lex.yy.c L.tab.c -ll -Ly
	./L<debug

build_clean:
	bison -vd L.y
	flex L.l
	gcc -o L lex.yy.c L.tab.c -ll -Ly
	./L<debug

build_ce:
	bison -vd -Wcounterexamples --graph --verbose --debug L.y
	flex L.l
	cc -o L lex.yy.c L.tab.c -ll -Ly
	./L<debug

flex_debug:
	flex -d L-debug.l
	cc lex.yy.c -o test -ll
	./test<debug

bison_debug:
	flex L.l
	bison -v -d --debug --verbose L-debug.y
	cc -o L-debug lex.yy.c L.tab.c -ll -Ly
	./L-debug<debug

gdb_debug:
	bison -vd --graph --verbose --debug L.y
	flex L.l
	gcc -g -o L lex.yy.c L.tab.c -ll -Ly
	gdb ./L