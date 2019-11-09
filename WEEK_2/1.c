/**
 Code By GUru
**/
#include <stdio.h>

void main()
{
    int n,i,m1,m2;
    printf("Enter No of Elements : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d Element :",i);
        scanf("%d",&arr[i]);
    }
    m1 = m2 = arr[0];
    for (i=0;i<n;i++)
    {
        if (m1<arr[i])
            m1 = arr[i];
    }
    for (i=0;i<n;i++)
    {
        if (m2<arr[i] && m1!= arr[i])
            m2 = arr[i];
    }
    printf("Largest Element in Array is : %d",m1);
    printf("Second Largest Element in Array is : %d",m2);
   
}
