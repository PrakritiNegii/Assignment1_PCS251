//Given an array, the task is to cyclically rotate the array clockwise by one time. 
/* Input: arr[] = {1, 2, 3, 4, 5}
   Output: arr[] = {5, 1, 2, 3, 4}

   Input: arr[] = {2, 3, 4, 5, 1}
   Output: {1, 2, 3, 4, 5}   */
#include<stdlib.h>
#include<stdio.h>
int main()
 {
  int n, *a, i, temp;
  printf("\nSpecify size of array.\n");
  scanf("%d",&n);
  a = (int*) malloc(n*sizeof(int));
  printf("\nInput %d array elements:\n",n);
  for(i=0; i<n; i++)
    scanf("%d",(a+i));

  for(i=n-1; i>0; i--)
   {
    temp = *(a+i);
    *(a+i) = *(a+i-1);
    *(a+i-1) = temp;
   }
  printf("\nInput array after rotating values clockwise:\n");
  for(i=0; i<n; i++)
    printf("%d\n",*(a+i));

  free(a);
  return 0;
 }

/*
Specify size of array.
5

Input 5 array elements:
2
3
4
5
1

Input array after rotating values clockwise:
1
2
3
4
5
*/