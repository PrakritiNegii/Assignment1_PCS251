//Progra, to find the factors of a number using recursion.
#include<stdio.h>
int Factors(int, int);
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    factors(n,1);
    return 0;
}
int factors(int N, int i)
{
    if(N%i==0)
    {
     printf("%d\n",i);
    }
    factors(N,i+1);
}


/* 
      INPUT
Enter a number: 18

      OUTPUT  
1
2
3
6
9
18

*/