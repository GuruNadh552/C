#include <stdio.h>
/**
    Code By Guru
**/
int main()
{
    int n, a = 0, rem, b;
    printf("Enter an integer: ");
    scanf("%d", &n);
    b = n;
    while( n!=0 )
    {
        rem = n%10;
        a= a*10 + rem;
        n = n/10;
    }
    if (b == a)
        printf("%d is a palindrome.", b);
    else
        printf("%d is not a palindrome.",b);

    return 0;
}
