/*
    Code By Guru
*/
#include <stdio.h>
void prime(int a)
{
    int i,c=0;
    for (i=1;i<=a;i++)
    {
        if (a%i==0)
            c++;
    }
    if (c==2)
        printf("%d is Prime ",a);
    else
        printf("%d is Not A Prime",a);
}
int main()
{
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);
    prime(n);
}
