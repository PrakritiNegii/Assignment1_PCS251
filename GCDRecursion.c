//Program to calculate the GCD/HCF of a number using Recursion.
//(using the long division method of finding HCF) Also known as Euclid's Division method of HCF
#include<stdio.h>
int gcd(int,int); //function declaration;
int main()
 {
  int n1, n2;
  printf("\nEnter the numbers for which the Hightest Common Factor is to be calculated.\n");
  scanf("%d %d",&n1,&n2);

  int res = gcd(n1,n2);  printf("\nThe Greatest Common Divisor of %d and %d is %d.\n",n1,n2,res);
  return 0;
 }
int gcd(int n1, int n2) 
 {
  int dir, dd, rem; 
  dir=n1, dd=n2; 
  rem = dd % dir; //n2 % n1
  if(rem==0) return dir;
  else return gcd(rem,dir); 
 }

/*
 	OUTPUT

Enter the numbers for which the Hightest Common Factor is to be calculated.
5208
6630

The Greatest Common Divisor of 5208 and 6630 is 6.
*/