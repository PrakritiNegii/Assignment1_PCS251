//Program to print the sum of principal diagonal elements of a matrix array using functions.
//Passing 2D array as a parameter to the function.
#include<stdio.h>
int sum(int [][10], int, int);
int main()
 {
   int r, c, A[10][10];
   printf("\nSpecify the no. of rows and columns.\n");
   scanf("%d %d",&r, &c);

   printf("\nInput array elements:\n");
   for(int i=0; i<r; i++)
     for(int j=0; j<c; j++)
        scanf("%d",&A[i][j]);

   int res = sum(A,r,c);
   printf("\nSum of the principal diagonal elements of the input array is: %d",res);
   return 0;
 }

int sum(int A[][10], int r, int c)
 {
  int sum = 0;
  for(int i=0; i<r; i++)
   {
    for(int j=0; j<c; j++)
     {
      if(i==j) sum = sum + A[i][j];
     }
   }
  return sum;
 } 

/*
	OUTPUT
Specify the no. of rows and columns.
3
3

Input array elements:
8
3
5
4
11
16
9
13
7

Sum of the principal diagonal elements of the input array is: 26
*/