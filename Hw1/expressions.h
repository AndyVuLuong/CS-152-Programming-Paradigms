#ifndef expressions
#define expressions


char* eval();
typedef enum { CONS, FIRST, REST } Operation;

typedef union {
    Operation o;
    char *ptr;
} Data;

typedef struct {
    Data d;
    char *leftArgument;
    char *rightArgument;
} Expression;

#endif

/*
CONS = *leftArgument + *rightArgument;
REST = substr(ptr[1], ptr.length());
FIRST = ptr[0];

if(ptr->FIRST == NULL) return NULL
    else return ptr[0]
if(ptr->REST == NULL || ptr->REST.length() == 1) return NULL
    else return ptr[1,ptr.length()-1]
if(ptr->CONS.leftArgument == NUll) return CONS.rightArgument
    else if(ptr->CONS.rightArgument == NULL) return CONS.leftArgument
        else return *leftArgument + *rightArgument
*/
