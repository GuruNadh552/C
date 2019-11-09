#include <stdio.h>
/**
    Code By Guru
**/
void main()
{
    int choice,a,b;
    printf("Please Enter \n1.Addition \n2.Subtraction \n3.Division \n4.Multiplication \n");
    printf("Enter Ur Choice ");
    scanf("%d",&choice);
    printf("Enter Two Numbers ");
    scanf("%d %d",&a,&b);
    switch(choice)
    {
        case 1 :
            printf("Addition Of %d and %d is %d",a,b,a+b);
            break;
        case 2:
            printf("Subtraction Of %d and %d is %d",a,b,a-b);
            break;
        case 3:
            printf("Division Of %d and %d is %d",a,b,a/b);
            break;
        case 4:
            printf("Multiplication Of %d and %d is %d",a,b,a*b);
            break;
        default: printf("Enter A Valid option");
    }
}
