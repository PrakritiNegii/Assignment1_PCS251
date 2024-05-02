
// Program to input student data and print marks of students whose name start with a character input by the user.
#include <stdio.h>
#include <string.h>
 
typedef struct Student {
    int roll_no;
    char name[30];
    float TM;
 }stu;
 
int main()
{
 
    stu s[12], *p;
    int i, n;
    char c;
    p = s;
    
    printf("\nInput number of students.\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
     {
      printf("\nInput name, roll no and marks of student %d.\n ",i+1);
      scanf(" %[^\n] %d %f",(p+i)->name, &(p+i)->roll_no, &(p+i)->TM);
     }
    
    printf("\nInput a character:\n");
    scanf(" %c",&c);
    
    printf("\nStudents with names starting with letter %c.\n ",c);
    for(i=0; i<n; i++)
     {
      if((p+i)->name[0] == c)
         {
          printf("Name: %s\n", (p+i)->name);
          printf("Roll Number: %d\n", (p+i)->roll_no);  
          printf("Total Marks: %f\n\n", (p+i)->TM);
         }
     }
     
    return 0;
}

/*
Input number of students.
4

Input name, roll no and marks of student 1.
 CRL
7
99

Input name, roll no and marks of student 2.
 PWG
13
67

Input name, roll no and marks of student 3.
 CKM
23
74

Input name, roll no and marks of student 4.
 DEB
45
82

Input a character:
C

Students with names starting with letter C.
 Name: CRL
Roll Number: 7
Total Marks: 99.000000

Name: CKM
Roll Number: 23
Total Marks: 74.000000
*/