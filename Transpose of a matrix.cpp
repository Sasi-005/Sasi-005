#include<stdio.h>
int main()
{
    int m,n;                 
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   
    int transpose[10][10],arr[10][10];        
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)    
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)    
    {
        for(int j=0;j<n;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
       printf("\nThe elements in the matrix after transpose are: \n");
    for(int i=0;i<n;i++)     
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}

