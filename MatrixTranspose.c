//For a given matrix of N x M, print its transpose.
#include<stdio.h>
int main()
 {
      int N, M, A[10][10];
      printf("\nSpecify the number of rows and columns of a matrix:\n");
      scanf("%d %d",&N,&M);
 						  				//N = no. of rows    //M = no. of columns

        for(int i=0; i<N; i++)  	 //Controls row number
          {
            printf("\nInput %d elements for each column of row number %d.\n",M,i);
            for(int j=0; j<M; j++)  //Controls column number
		scanf("%d",&A[i][j]);
          }

        printf("\n\nThe input matrix is: \n");
        for(int i=0; i<N; i++)
         {
          for(int j=0; j<M; j++)
           {
            printf("%d   ",A[i][j]);
           }
	  printf("\n");
         }

        printf("\n\nThe transpose of the matrix is: \n");
        for(int i=0; i<M; i++)
         {
           for(int j=0; j<N; j++)
            {
               printf("%d   ",A[j][i]);
            }
           printf("\n");
         }

       return 0;
 }