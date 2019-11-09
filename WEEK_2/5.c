/*
    Code By Guru
*/
#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter No of Elements in Array :");
    scanf("%d",&n);
    
    int arr[n];
    //Taking Input From User
    for (i=0;i<n;i++)
    {
            printf("Enter Element Arr[%d] :",i+1);
            scanf("%d",&arr[i]);
    }
    //Sorting 
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                k = arr[i];
                arr[i]=arr[j];
                arr[j] = k;
            }
        }
    }
    //Displaying Sorted Data
    for (i=0;i<n;i++)
        printf("%d \t",arr[i]);

    return 0;
}
