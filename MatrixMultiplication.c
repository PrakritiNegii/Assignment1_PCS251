//Program to multiply two input matrices and print the acquired matrix.
#include<stdio.h>
int main()
{
    int m1, n1, m2, n2, A[10][10], B[10][10], R[10][10]={0};
    printf("\nEnter number of rows and columns of first matrix:\n");
    scanf("%d %d",&m1,&n1);
    printf("\nEnter number of rows and columns of second matrix:\n");
    scanf("%d %d",&m2,&n2);
    
    if(n1!=m2)
      printf("\nMultiplication not possible\n");
    else
    {
      printf("\nEnter first array elements: \n");
      for(int i=0;i<m1;i++)
       {
         for(int j=0;j<n1;j++)
          {
            scanf("%d",&A[i][j]);
          }
    }
    printf("\nEnter second array elements:\n ");
    for(int i=0;i<m2;i++)
     {
        for(int j=0;j<n2;j++)
         {
            scanf("%d",&B[i][j]);
         }
     }
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
          for(int k=0;k<n1;k++)
          {
                R[i][j]=R[i][j]+A[i][k]*B[k][j];
          }
        }
    }
    printf("\nMultiplied matrix is\n");
  for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }  
    }
    return 0;
}



/*
	OUTPUT
Enter first array elements: 
5
7
9
6
3
8

Enter second array elements:
 5
7
9

Multiplied matrix is
155 
123 

*/