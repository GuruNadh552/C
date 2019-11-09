/*
    Code By Guru
*/
#include <stdio.h>
#include <math.h>
int NFact(int a)
{
    if (a==0)
        return 1;
    else
        return a *(NFact(a-1));
        
}
int main()
{
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);
    printf("Factorial  of  %d is %d",n,NFact(n));
}
