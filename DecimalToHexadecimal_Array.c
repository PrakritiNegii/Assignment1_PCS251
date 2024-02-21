// Program to input a decimal number and convert it into hexadecimal. (Arrays)
#include<stdio.h>
int main()
 {
  int n, A[10], c=0;
  printf("\nEnter a decimal number:\n");
  scanf("%d",&n);
  for(int i=0; n!=0; i++, n/=16)
   {
    if(n%16==0 || n%16<10) A[i]=n%16;
    else if(n%16>9) A[i] = 55 + n%16;
    c++;
   }
   printf("\nThe input decimal number in hexadecimal number system is: ");
   for(int i=c-1; i>=0; i--)
    {
     if(A[i]>9) printf("%c",A[i]);
     else printf("%d",A[i]);
    }

   return 0;
 }

/*
	OUTPUT
Enter a decimal number:
997

The input decimal number in hexadecimal number system is: 3E5
*/