#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int static_var = 0;
    int local_var = 0;

    void * static_mem = &static_var;
    void * stack_mem = &local_var;
    void * heap_mem = malloc(1); 

    if (static_mem > stack_mem && static_mem > heap_mem){
        printf("static\n");
    }
    else if (stack_mem > static_mem && stack_mem > heap_mem){
        printf("stack\n");
    }
    else {
        printf("heap\n");
    }
}
