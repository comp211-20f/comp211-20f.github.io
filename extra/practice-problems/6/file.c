#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t message = 0x00434E55;
    printf("message: %s\n", (char*) &message); 
}
