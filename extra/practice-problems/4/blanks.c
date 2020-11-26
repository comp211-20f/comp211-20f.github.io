#include <stdio.h>
#include <stdint.h>
int main()
{
    uint32_t integer = 0x1A2B3C4D;
    char * char_ptr = (char*) &integer;
    printf("char_ptr[0]: %X\n", char_ptr[0]); 
    printf("char_ptr[1]: ?\n"); 
    printf("char_ptr[2]: ?\n"); 
    printf("char_ptr[3]: ?\n"); 
}
