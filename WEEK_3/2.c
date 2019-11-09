/*
    Code By Guru
*/
#include <stdio.h>
#include <math.h>
void ArmStrong(int a,int b)
{
    int x , sum = 0, rem =0  ;
    x = a;
    while (x!=0)
    {
        rem = x % 10 ;
        sum = sum + (pow(rem,b));
        x = x/10;
    }
    if (a==sum)
        printf("%d is ArmStrong Number",a);
    else
        printf("%d is Not A Armstrong Number ",a);
}
int main()
{
    int n,c=0,d;
    printf("Enter A Number :");
    scanf("%d",&n);
    d=n;
    //For Finding Number of Digits
    while (n!=0)
    {
        n=n/10;
        c++;
    }
    ArmStrong(d,c);
}
