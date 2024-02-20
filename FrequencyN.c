//Program to input a sentence and count the number of times a character comes in the sentence..
#include<stdio.h>
int main()
 {
  char A[100], N;
  int s, c=0;
  printf("\nSpecify size of the string.\n");
  scanf("%d",&s);
  printf("\nInput a character.\n");
  scanf(" %c",&N);
  if(N>=65 && N<=90) N=N+32;
  
  printf("\nEnter a string.\n");
  for(int i=0; i<s; i++)
   {
    scanf(" %c",&A[i]);
    if(A[i]>=65 && A[i]<=90) A[i]=A[i]+32;
   }
  for(int i=0; i<s; i++)
   {
    if(A[i]==N)
      c = c + 1;
   }
  printf("\nThe character %c is present %d times in the string.",N,c);
  return 0;
 }