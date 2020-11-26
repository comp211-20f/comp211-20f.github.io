#include <stdio.h>

static int plus_one(int n);
static int plus_ten(int *int_ptr);

int main()
{
    int x = 10;
    int y = plus_one(x);
    printf("After plus one:\n\t");
    printf("x: ?, y: ?\n");
    y = plus_ten(&x);
    printf("After plus ten:\n\t");
    printf("x: ?, y: ?\n");
}
static int plus_one(int n)
{
    n += 1;
    return n;
}
static int plus_ten(int *int_ptr)
{
    *int_ptr += 10;
    return *int_ptr;
}
