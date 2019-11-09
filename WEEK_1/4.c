#include <stdio.h>
/**
    Code By Guru
**/
int main()
{
    int t1 = 0, t2 = 1, a = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    a = t1 + t2;
    while(a <= n)
    {
        printf("%d, ",a);
        t1 = t2;
        t2 = a;
        a = t1 + t2;
    }

    return 0;
}
