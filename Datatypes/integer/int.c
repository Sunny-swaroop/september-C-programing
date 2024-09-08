#include<stdio.h>
int main()
{
	int a = 10;          // signed integer
    unsigned int b = 20; // unsigned integer
    short c = 5;         // short integer
    long d = 1000;       // long integer
    long long e = 1000000000; // long long integer

    printf("a: %d\n", a);
    printf("b: %u\n", b);
    printf("c: %d\n", c);
    printf("d: %ld\n", d);
    printf("e: %lld\n", e);

    return 0;
}
