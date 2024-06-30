#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct node{
	int val;
	struct node * next;  //itself
};

int val;
struct node *head;

void main()
{
	int choice =0;
	printf("\n...stack operations using linked list...\n");
	while(choice!=4){
		printf("\nchose your operation:..\n");
		printf(" 1 for push | 2 for pop | 3 for show | 4 for exit");
		printf("\n enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				printf("existing..");
				break;
			}
			default:{
				printf("please enter valid choice");
			}
		};
	}
}
void push(){
	int val;
	struct node *ptr=(struct node*)malloc(struct node));
	if(ptr==NULL){
		printf("not able to push the element")
		
	}
}














