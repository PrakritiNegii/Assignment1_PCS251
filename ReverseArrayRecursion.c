//Reverse array using recursion.
/* Given an array of integers and an integer sum, find pairs in the array that add
   to a an input value. */
#include<stdlib.h>
#include<stdio.h>
void reverse(int*, int, int);
int main()
 {
  int n, i, *a;
  a = (int*) malloc(5*sizeof(int));
  printf("\nSpecify size of array.\n");
  scanf("%d",&n);
  
  if(n>5)
   {
    a = (int*) realloc(a, n*(sizeof(int)));
   }

  printf("\nInput %d array elements:\n",n);
  for(i=0; i<n; i++)
    scanf("%d",(a+i));

  reverse(a, 0, n-1);

  printf("\nArray after reversing its elements is:\n");
  for(i=0; i<n; i++)
   {
     printf("%d\n",*(a+i));
   }
  free(a);
  return 0;
 }

 void reverse(int* A, int s, int e)
  {
    if(s<e)
     {
      int temp = *(A+s);
      *(A+s) = *(A+e);
      *(A+e) = temp;

      reverse(A, s+1, e-1);
     }
    else return;
  }

/*
Specify size of array.
4

Input 4 array elements:
2
3
5
7

Array after reversing its elements is:
7
5
3
2



Specify size of array.
7

Input 7 array elements:
1
2
3
4
5
6
7

Array after reversing its elements is:
7
6
5
4
3
2
1
*/