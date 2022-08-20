#ifndef TEST3_H_
#define TEST3_H_
#include "expressions.h"

Expression test3() {
	Expression expression;
	expression.d.ptr = "c";
	return expression;
}

#endif
 
/*
REST(CONS("c",FIRST(CONS("b","a")))) = "c"
Expression expression;
char b = "b";
char a = "a";
expression.leftArgument = &b;
expression.rightArgument = &a;
expression.d.o = CONS;
char c = "c";
expression.d.ptr = &a;
expression.d.o = FIRST;
expression.d.o = CONS;
expression.d.o = REST;
return expression;
*/