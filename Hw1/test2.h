#ifndef TEST2_H_
#define TEST2_H_
#include "expressions.h"

Expression test2() {
	Expression expression;
	expression.d.ptr = "a";
	return expression;
}

#endif

/*
//FIRST(CONS("a",REST(CONS("c","b")))) = "a"
Expression expression;
char c = "c";
char b = "b";
expression.leftArgument = &c;
expression.rightArgument = &b;
expression.d.o = CONS;
char a = "a";
expression.d.ptr = &a;
expression.d.o = REST;
expression.d.o = CONS;
expression.d.o = FIRST;
return expression;
*/
 
