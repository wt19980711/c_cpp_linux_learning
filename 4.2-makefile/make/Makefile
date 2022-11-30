main: calc.o output.o main.o
	cc -o main calc.o output.o main.o
calc.o: calc.c calc.h
	cc -c calc.c
output.o: output.c output.h
	cc -c output.c
main.o: main.c output.h calc.h
	cc -c main.c
clean:
	rm -f main calc.o output.o main.o
