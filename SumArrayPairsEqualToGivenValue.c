/* Given an array of integers and an integer sum, find pairs in the array that add
   to a an input value. */
#include<stdlib.h>
#include<stdio.h>
int main()
 {
  int n, *a, i, j, sum;
  printf("\nSpecify size of array.\n");
  scanf("%d",&n);
  a = (int*) calloc(n,sizeof(int));
  printf("\nInput %d array elements:\n",n);
  for(i=0; i<n; i++)
    scanf("%d",(a+i));

  printf("\nInput a value:\n");
    scanf("%d",&sum);

  for(i=0; i<n; i++)
   {
    for(j=i+1; j<n; j++)
     {
      if(*(a+i)+*(a+j) == sum) 
       {
        printf("\nSum of (%d, %d) at positions (%d, %d) is equal to %d.\n",*(a+i),*(a+j),i+1,j+1,sum);
       }
     }
   }
  free(a);
  return 0;
 }

/*
Specify size of array.
6

Input 6 array elements:
2
3
4
12
-7
1

Input a value:
5

Sum of (2, 3) at positions (1, 2) is equal to 5.

Sum of (4, 1) at positions (3, 6) is equal to 5.

Sum of (12, -7) at positions (4, 5) is equal to 5.
*/