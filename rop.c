//gcc -o rop rop.c -m32 -fno-stack-protector -mpreferred-stack-boundary=2 -no-pie
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char buf[10];
    puts("Input : ");
    if (!read(0, buf, 256))
        exit(0);

    return 0;
}