#include <stdio.h>
#include "expressions.h"
#include <string.h>
#include <stdlib.h> //for malloc and free

char* eval(Expression E)  {
	char* answer;
	char* a = "a";
	char* b = "b";
	char* c = "c";
	
	//malloc
	int *p;
	p =(int *)malloc(10*sizeof(int));
	if(p == NULL) {
		return 0;
	}
	free(p);
	
    if (strcmp(E.d.ptr, "a") == 0) {
    	printf("a");
    }
    else if (strcmp(E.d.ptr, "b") == 0) {
     	printf("b");
    } else {
    	printf("c");
    }
    
    answer = E.d.ptr;
    return answer;
    //eval(E); recursive
}
