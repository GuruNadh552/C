#include <stdio.h>
/**
        Code By Guru
**/
void main()
{
    int n,i;
    printf("Enter a Number : ");
    scanf("%d",&n); // For Reading Input From User
    for (i=1;i<=10;i++)
        printf("%d * %d = %d \n",n,i,n*i);
}
