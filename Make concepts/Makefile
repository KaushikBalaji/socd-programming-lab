objects = UserInterface.o SimpleMath.o DeepMaths.o add.o sub.o mul.o div.o power.o root.o logarithm.o

UserInterface: $(objects)
	gcc $(objects) -lm -o UserInterface 
UserInterface.o: UserInterface.c headers.h
	gcc -c UserInterface.c
SimpleMath.o: SimpleMath.c headers.h
	gcc -c SimpleMath.c
DeepMaths.o: DeepMaths.c headers.h
	gcc -c DeepMaths.c

add.o: add.c
	gcc -c add.c
sub.o: sub.c
	gcc -c sub.c
mul.o: mul.c
	gcc -c mul.c
div.o: div.c
	gcc -c div.c

power.o: power.c
	gcc -c power.c
square.o: square.c
	gcc -c square.c
logarithm.o: logarithm.c
	gcc -c logarithm.c


clean:
	rm *.o UserInterface
