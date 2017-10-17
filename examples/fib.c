#include <stdlib.h>
#include <stdio.h>

int fib(n)
{
    if (n <= 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main(int argc, char **argv)
{
    int n;
    if (argc < 2) {
        printf("使用方法: fib n\n"
               		"计算第Fibo数列中第n个数\n");
        return 1;
    }

    n = atoi(argv[1]);
    printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}
