#include <stdio.h>
/**
        Code By Guru
**/
void main()
{
    int n,i,fact=1;
    printf("Enter a Number : ");
    scanf("%d",&n); // For Reading Input From User
    for (i=1;i<=n;i++)
        fact = fact *  i;
    printf("Factorial of  %d is %d",n,fact);
}
