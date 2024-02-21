// Program to input a decimal number and convert it into binary using functions.
#include<stdio.h>
int toBinary(int);
int main()
 {
  int N;
  printf("\nEnter a decimal number:\n");
  scanf("%d",&N);
  int binary = toBinary(N);
  printf("\nThe input decimal number in binary number system is %d.\n",binary);
  return 0;
 }

int toBinary(int n)
 {
  int b = 1, binary = 0;
  while(n!=0)
   {
    if(n%2==0) b = b * 10 + 0;
    else b = b * 10 + 1;
    n/=2;
   }
  while(b!=0)
   {
    binary = binary*10 + b%10;
    b/=10;
   }
   binary = binary/10;
   
   return binary;
 }

/*
 	OUTPUT
Enter a decimal number:
77

The input decimal number in binary number system is 1001101.
*/