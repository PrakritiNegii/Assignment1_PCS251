/* Develop a program to merge the elements of two sorted arrays so that 
   the resulting array is also sorted. (Without using sorting technique) */
#include<stdio.h>
int main()
 {
  int n1, n2, i, j, k;
  printf("\nSpecify the length of two arrays:\n");
  scanf("%d%d",&n1,&n2);
  int A[n1], B[n2];
  printf("\nInput %d elements for first array.\n",n1);
  for(i=0; i<n1; i++)
    scanf("%d",&A[i]);
  printf("\nInput %d elements for second array.\n",n2);
  for(i=0; i<n2; i++)
    scanf("%d",&B[i]);
  int n = n1 + n2;
  int F[n];
  for(i=0, j=0, k=0; i<n1 && j<n2;)
   {
    if(A[i]<B[j]) 
     {
      F[k] = A[i];
      i++;
      k++;
     }
    else 
     {
      F[k] = B[j];
      j++;
      k++;
     }
   }
  while(i<n1)
   {
    F[k] = A[i];
    i++;
    k++;
   }
  while(j<n2)
   {
    F[k] = B[j];
    j++;
    k++;
   }

  printf("\nThe two input arrays on merging and then sorting is: \n");
  for(int i=0; i<n; i++)
    printf("%d\n",F[i]);
 }

