/**
 Code By GUru
**/
#include <stdio.h>

void main()
{
    int m,n,i,j;
    printf("Enter No of Colums  :");
    scanf("%d",&m);
    printf("Enter No of Rows :");
    scanf("%d",&n);
    int fm[m][n],sm[m][n],sum[m][n];
    printf("Enter 1st Matrix Values \n");
    for(i=0;i<m;i++)
        for (j=0;j<n;j++)
        {
            printf("Enter FM[%d][%d] Value :",i,j);
            scanf("%d",&fm[i][j]);
        }
    printf("Enter 2nd Matrix Values \n");
    for(i=0;i<m;i++)
        for (j=0;j<n;j++)
        {
            printf("Enter SM[%d][%d] Value :",i,j);
            scanf("%d",&sm[i][j]);
            sum[i][j] = fm[i][j]+sm[i][j];
        }
    printf("Sum of Matrices : \n");
     for(i=0;i<m;i++)
     {
        for (j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
     }
}
