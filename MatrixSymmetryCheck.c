//Program to check whether the input array is symmetric or not.
#include<stdio.h>
int main()
 {
   int r, c, A[10][10], B[10][10], f=0;
   printf("\nInput the number of rows and columns in the matrix.\n");
   scanf("%d %d",&r,&c);

   if(r!=c) printf("\nMatrix cannot be symmetric as it won't be a square matrix.");
   else 
     {
       printf("\nInput array elements:\n");
       for(int i=0; i<r; i++)
	  for(int j=0; j<c; j++)
	     scanf("%d",&A[i][j]);

       for(int i=0; i<r; i++)
        {
	  for(int j=0; j<c; j++)
           {
	     B[i][j] = A[j][i]; 
	   }
	}
 
       printf("\nInput matrix is: \n");
       for(int i=0; i<r; i++)
        {
	  for(int j=0; j<c; j++)
	     printf("%d  ",A[i][j]);
          printf("\n");
	}

       printf("\nTranspose of the matrix is: \n");
       for(int i=0; i<r; i++)
        {
	     for(int j=0; j<c; j++)
           {
	     printf("%d  ",B[i][j]);

	     if(B[i][j] != A[i][j])  f=1;
	    }
          printf("\n");
	}
	if(f==1) printf("\nThe input matrix is not symmetric.\n");
	else printf("\nThe input matrix is symmetric.");
     }
  return 0;
 }

/*
	OUTPUT

Input the number of rows and columns in the matrix.
3
2

Matrix cannot be symmetric as it won't be a square matrix.

Input the number of rows and columns in the matrix.
3
3

Input array elements:
3
4
7
4
9
2
7
2
6

Input matrix is: 
3  4  7  
4  9  2  
7  2  6  

Transpose of the matrix is: 
3  4  7  
4  9  2  
7  2  6  

The input matrix is symmetric.

*/