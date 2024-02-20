/* Program to input n elements in an array and insert a new element at a particular position. */
// index = position - 1
#include<stdio.h>
int main()
 {
  int n, N, p;
  printf("\nSpecify the number of elements to be input in an array.\n");
  scanf("%d",&n);
  int A[n];
  printf("\nInput %d numbers:\n",n);
  for(int i=0; i<n; i++)
    scanf("%d",&A[i]);
  printf("\nEnter the number and specify the position it is to be inserted in.\n");
  scanf("%d\n%d",&N,&p);
  //Inserting a number requires forward shifting the array.
  for(int i=n; i>=p-1; i--)
   {
    A[i] = A[i-1];
    if(i==p-1) A[i] = N;
   }
  printf("\nArray after inserting an element %d at position %d.\n",N,p);
  for(int j=0; j<=n; j++)
    printf("%d\n",A[j]);
  return 0;
 }

/*
	OUTPUT

Specify the number of elements to be input in an array.
5

Input 5 numbers:
3
78

9
34
21

Enter the number and specify the position it is to be inserted in.
12
3

Array after inserting an element 12 at position 3.
3
7
12
9
34
21
*/