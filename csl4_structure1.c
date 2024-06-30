#include <stdio.h>
struct student
    {
     char name[50];
     int roll;
     float marks;
    };

void display(struct student *);  //funct declar

int main()
{
struct student st1 = { "Aman", 19, 8.5 };
display(&st1);
return 0;
}

void display(struct student *student_obj)  //funct implementation
{
printf("Name:%s\n", student_obj->name);
printf("Roll:%d\n", student_obj->roll);
printf("Marks:%f\n", student_obj->marks);
}
