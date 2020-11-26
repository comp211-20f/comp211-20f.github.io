#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t integer = 0x1A2B3C4D;
    char * char_ptr = (char*) &integer;
    printf("char_ptr[0]: %X\n", char_ptr[0]); 
    printf("char_ptr[1]: %X\n", char_ptr[1]); 
    printf("char_ptr[2]: %X\n", char_ptr[2]); 
    printf("char_ptr[3]: %X\n", char_ptr[3]); 
}
