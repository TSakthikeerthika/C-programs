#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node *next;  
};
struct node *head;
void main ()
{
int choice=0;
printf("\n*********Stack operations using linked list*********\n");
printf("\n----------------------------------------------\n");
while(choice != 4)
{
printf("\n\nChose one from the below options...\n");
printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
printf("\n Enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("Exiting....");
break;
}
default:
{
printf("Please Enter valid choice");
}
}
}
}
