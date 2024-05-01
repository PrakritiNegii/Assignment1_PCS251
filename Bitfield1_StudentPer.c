/*Program to input the following data for students in a class using appropriate 
  bitfields to optimise memory.
  Data: Date, Month, Year of admission; gender; percentage marks (int type);
  
  (i)  Compute size of this structure
  (ii) Input data of five students and display the year of joining of the student
       with highest percentage marks.*/
#include<stdio.h>
struct Student
{
 unsigned int dd:5;
 unsigned int mm:4;
 unsigned int yy:11;
 unsigned int gen:2;
 unsigned int per:7;
 };

int main()
 {
  struct Student S[5];
  int i, MaxPer, I;
  printf("\nSize of structure Student is: %d bytes",sizeof(struct Student));
  for(i=0; i<5; i++)
   {
    int d, m, y, g, p;
    printf("\nInput date, month, year of admission, gender and percentage marks of student %d:\n",i+1);
    scanf("%d %d %d %d %d",&d, &m, &y, &g, &p);
    S[i].dd = d;
    S[i].mm = m;
    S[i].yy = y;
    S[i].gen = g, S[i].per = p;
   }
  
  MaxPer = S[0].per, I = 0;
  for(i=1; i<5; i++)
   {
    if(S[i].per>MaxPer) 
     {
      MaxPer = S[i].per; 
      I=i;
     }
   }

   printf("\nThe student with Maximum Percentage, i.e., %d%% joined on %d/%d/%d \n", MaxPer, S[I].dd, S[I].mm, S[I].yy);
   return 0;
 }