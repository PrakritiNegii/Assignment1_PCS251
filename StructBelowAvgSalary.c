//Program to store employee addresses and salaries.
//Print name, id, city and phone number of employees with below average salaries.

#include<stdio.h>
struct employee 
 {
  char Nm[30];
  unsigned int id;
  float s;  //salary

  struct address
   {
    char city[15];
    unsigned int pc; //pincode
    char ph[13]; //phone number
   } add;
 };

void belowAvgSalary(struct employee[], int, float);

int main()
 {
  struct employee E[10];
  int n, i;
  float sum=0, avg;
  printf("\nInput the number of employees.\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
   {
    printf("\nEnter details of employee %d:\n",i+1);
    scanf(" %[^\n] %u %f %[^\n] %u %[^\n]",E[i].Nm, &E[i].id, &E[i].s, E[i].add.city, &E[i].add.pc, E[i].add.ph);
    sum = sum + E[i].s;
   }
  avg = sum/n;
  printf("\nEmployees with salaries below average, i.e, below %f are:\n",avg);
  belowAvgSalary(E,n,avg);
  return 0;
 }

void belowAvgSalary(struct employee Emp[], int l, float avg)
 {
  for(int i=0; i<l; i++)
   {
    if(Emp[i].s < avg)
      printf("%s %d %s %s\n",Emp[i].Nm, Emp[i].id, Emp[i].add.city, Emp[i].add.ph);
   }
 }

/*
Input the number of employees.
4

Enter details of employee 1:
abc
230221368
45000
Delhi
299100
8763844460

Enter details of employee 2:
def
24011873
30000
Dehradun
248001
9748532956

Enter details of employee 3:
ghi
221111569
80000
Nainital
263001
7893256820

Enter details of employee 4:
uvw
200001343
100000
Dehradun
248010
6787790342

Employees with salaries below average, i.e, below 63750.000000 are:
abc 230221368 Delhi 8763844460
def 24011873 Dehradun 9748532956
*/
