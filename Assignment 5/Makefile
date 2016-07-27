a.out: lex.yy.c y.tab.c y.tab.h ass5_13CS30041_translator.h ass5_13CS30041_translator.cxx 
	g++ lex.yy.c y.tab.c ass5_13CS30041_translator.cxx -lfl
	echo "Type \"make run to output all test files\" "

y.tab.h: ass5_13CS30041.y
	yacc -dtv ass5_13CS30041.y 
y.tab.c: ass5_13CS30041.y
	yacc -dtv ass5_13CS30041.y 
lex.yy.c: ass5_13CS30041.l y.tab.h
	flex ass5_13CS30041.l

clean: 
	rm a.out y.tab.h y.tab.c lex.yy.c y.output
run:
	./a.out < ass5_13CS30041_test1.c > ass5_13CS30041_quad1.txt
	./a.out < ass5_13CS30041_test2.c > ass5_13CS30041_quad2.txt
	./a.out < ass5_13CS30041_test3.c > ass5_13CS30041_quad3.txt
	./a.out < ass5_13CS30041_test4.c > ass5_13CS30041_quad4.txt
	./a.out < ass5_13CS30041_test5.c > ass5_13CS30041_quad5.txt
	