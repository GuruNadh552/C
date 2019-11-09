/*
    Code By Guru
*/
#include <stdio.h>
#include <math.h>
void Swap(int a,int b)
{
    printf("\nBefore Swapping Number : %d %d",a,b);
    int t = a;
    a = b;
    b = t;
    printf("\nÄfter Swapping Two Values By Call By Value : %d %d ",a,b);
}
void Swap1(int *x,int *y)
{
    printf("\nBefore Swapping Number : %d %d",*x,*y);
    int t = *x;
    *x = *y;
    *y = t;
    printf("\nÄfter Swapping Two Values By Call By Refernce : %d %d ",*x,*y);
}
int main()
{
    int n,m;
    printf("Enter A Number :");
    scanf("%d %d",&n,&m);
    Swap(n,m);
    printf("\n[Main] Äfter Swapping Two Values By Call By Value : %d %d ",n,m);
    Swap1(&n,&m);
    printf("\n[Main] Äfter Swapping Two Values By Call By Reference : %d %d ",n,m);
}
