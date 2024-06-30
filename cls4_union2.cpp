#include <stdio.h>

union student
{
  int rollNo;
  char name[32];
  int marks;
};
union student s;
int main()
{
    printf("Size of the Union = %d bytes\n", sizeof(union student));
    printf("Enter Name:- ");
    scanf("%s",s.name);
    printf("Student name is %s\n",s.name);
     printf("Enter Roll no:- ");
     
    scanf("%d",&s.rollNo);
    printf("Student roll no is %d\n",s.rollNo);
   
    printf("Enter Marks:- ");
    scanf("%d",&s.marks);
    printf("Student Mark is %d\n",s.marks);

   return 0;
}
