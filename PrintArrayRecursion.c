//Program in C to print array elements using recursion.
#include<stdio.h>
void print(int[], int);
int main()
 {
  int n, i;
  printf("\nSpecify the number of elements in the array.\n");
  scanf("%d",&n);
  int A[n];
  printf("\nInput the array elements.\n");
  for(i=0; i<n; i++)
    scanf("%d",&A[i]);
  i=0;
  print(A,n);
  return 0;
 }
void print(int A[], int n)
 {
  static int i=0;
  printf("%d\n",A[i]);
  i=i+1;
  if(i<n) print(A,n);
 }