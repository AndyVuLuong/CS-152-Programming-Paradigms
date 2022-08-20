#ifndef TEST1_H_
#define TEST1_H_
#include "expressions.h"

Expression test() {
	Expression expression;
	expression.d.ptr = "b";
	return expression;
}

#endif

/*
//FIRST(REST(CONS("a", CONS( "b", "c")))) = "b"
Expression expression;
char b = "b";
char c = "c";
expression.leftArgument = &b;
expression.rightArgument = &c;
expression.d.o = CONS;
char a = "a";
expression.d.ptr = &a;
expression.d.o = CONS;
expression.d.o = REST;
expression.d.o = FIRST;
return expression;
 */