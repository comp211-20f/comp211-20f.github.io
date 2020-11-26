#include <stdio.h>
#include <stdint.h>

int main()
{
    char a = 'a';
    char y = 'y';

    char* char_ptr = &a;

    printf("*char_ptr: %c\n", *char_ptr);
    printf("*(char_ptr + 1): %c\n", *(char_ptr + 1));
    printf("*char_ptr + 1: %c\n", *char_ptr + 1);
}
