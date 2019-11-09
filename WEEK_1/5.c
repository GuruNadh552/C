#include <stdio.h>
/**
    Code By Guru
**/
void main()
{
    int n,i,count=0;
    printf("Enter a NuMber :");
    scanf("%d",&n);31
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
            count++;
    }
    if (count==2)
        printf("%d is Prime Number",n);
    else
        printf("%d is not a prime Number",n);
}
