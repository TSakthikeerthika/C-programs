#include <stdio.h>
struct student {
	char name[20]; 
	int age;
	float marks;
};
struct student get_student_data() 
{
struct student s;
printf("enter name:");
scanf("%s",s.name);
printf("enter age:");
scanf("%d",&s.age);
printf("Enter marks: ");
scanf("%f",&s.marks);
return s;
}

int main()
{

//structure variable s1 which has been assigned the returned value of get_student_data


    struct student s1 = get_student_data();

    printf("Name:%s\n", s1.name);   // displaying the information
    printf("Age:%d\n", s1.age);
    printf("Marks:%.1f\n", s1.marks);
    return 0;
}
