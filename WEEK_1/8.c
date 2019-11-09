#include <stdio.h>
/**
    Code By Guru
**/
void main()
{
    int n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Factors of %d is ",n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
            printf("\n%d",i);
    }
}
