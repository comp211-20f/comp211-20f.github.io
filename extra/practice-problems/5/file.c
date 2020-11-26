#include <stdio.h>
#include <stdint.h>

int main()
{
    char array[] = {0x11, 0x22, 0x33, 0x44};
    int32_t integer = *(int32_t*)array;
    printf("integer: %X\n", integer);
}
