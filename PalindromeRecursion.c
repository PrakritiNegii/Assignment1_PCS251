//Program to find the palindrome of a function using recursion.
#include<stdio.h>

int reverse(int, int);
int power(int, int);

int main()
 {
  int n, res, c=0;
  printf("\nInput a number:\n");
  scanf("%d",&n);
  for(int i=n; i>0; i/=10)
    c++;

  res = reverse(n,c-1);
  if(res==n) printf("\nThis is a Palindrome Number.\n");
  else printf("\nThis is NOT a Palindrome Number.\n");
  return 0;
 }

int reverse(int N, int C)
 {
  if(N==0) return 0;
  else return (N%10)*power(10,C) + reverse(N/10,C-1); 
 }

int power(int X, int Y)
 {
  if(Y==0) return 1;
  else return X * power(X,Y-1);
 }

/*
	OUTPUT

Input a number:
123343321

This is a Palindrome Number.


Input a number:
456862

This is NOT a Palindrome Number.
*/