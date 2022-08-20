test1: driver.o evaluator.o test1.h
	gcc driver.o evaluator.o -o test1

test2: driver.o evaluator.o test2.h
	gcc driver.o evaluator.o -o test2

test3: driver.o evaluator.o test3.h
	gcc driver.o evaluator.o -o test3
	
all: driver.o evaluator.o test1.h test2.h test3.h
	gcc driver.o evaluator.o -o all

clean:
	rm *.o test1 test2 test3 all