//Program to obtain the HCF of n numbers by checking numbers for factors.
#include<stdio.h>
int GCD(int N[], int n)
 {
  int c, HCF;
   for(int i=1; i<=N[0]; i++)
    {
     c=0;
     for(int j=0; j<n; j++)
      {
       if(N[j]%i==0) c++;
      }
     if(c==n) HCF = i;
    }
  return HCF;
 }

int main()
 {
  int n;
  printf("\nSpecify the amount of numbers whose HCF is to be calculated.\n");
  scanf("%d",&n);
  int N[n];

  printf("\nEnter %d numbers whose HCF is to be calculated.\n",n);
  for(int i=0; i<n; i++)
    scanf("%d",&N[i]);
  
  int HCF = GCD(N,n);
  printf("\nThe Highest Common Factor of the input numbers is %d.\n",HCF);

  return 0;
 }

/*
   OUTPUT
Specify the amount of numbers whose HCF is to be calculated.
4

Enter 4 numbers whose HCF is to be calculated.
832
2836
1248
428

The Highest Common Factor of the input numbers is 4.
*/
