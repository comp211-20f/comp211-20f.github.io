#include <stdio.h>
#include <stdint.h>
int main()
{
    char c = 0;
    int64_t x = 0;

    char* char_ptr = &c;
    int64_t* int_ptr = &x;

    printf("char_ptr: \t%p\n", char_ptr);
    printf("char_ptr + 1: \t?\n");

    printf("int_ptr: \t%p\n", int_ptr);
    printf("int_ptr + 1: \t?\n");
}
