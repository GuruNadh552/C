#include <stdio.h>
/**
        Code By GuruNadh(S160552)
**/
void main()
{
    int n,i,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n); // For Reading Input From User
    for (i=0;i<n;i++)
        sum = sum + i;
    printf("Sum of Natural Numbers Upto %d is %d",n,sum);
}
