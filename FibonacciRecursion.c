//Program to print n digits of the Fibonacci Series by Recursion.
#include<stdio.h>
void fibonacci(int,int,int);
int main()
 {
  int n;
  printf("\nSpecify the number of digits to be printed in the Fibonacci Series.\n");
  scanf("%d",&n);

  printf("\nThe Fibonacci Series upto %d terms is: \n",n);
  if(n==1) printf(" 0\n");
  else if(n==2) printf(" 0 \n1\n");
       else 
        {
         printf(" 0 \n 1 \n");
         fibonacci(n-2, 0, 1);
        }

  return 0;  
 }
void fibonacci(int n, int a, int b)
 {
  int c = a + b;
  printf(" %d \n",c);
  if(n>1) fibonacci(n-1,b,c);
 }


/*
	OUTPUT

Specify the number of terms to be printed in the Fibonacci Series.
12

The Fibonacci Series upto 12 terms is: 
 0 
 1 
 1 
 2 
 3 
 5 
 8 
 13 
 21 
 34 
 55 
 89 
*/