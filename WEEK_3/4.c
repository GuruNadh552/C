/*
    Code By Guru
*/
#include <stdio.h>
#include <math.h>
int NSum(int a)
{
    if (a==0)
        return a;
    else
        return a+ (NSum(a-1));
        
}
int main()
{
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);
    printf("SUm of Natural Numbers Upto %d is %d",n,NSum(n));
}
