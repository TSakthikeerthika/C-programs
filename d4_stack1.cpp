#include<stdio.h>
#include<stdbool.h>

void display(int t);
int count(int t);
bool isEmpty(int t);
bool isFull(int t);
void peek(int t);
void push(int t);
void pop(int t);
int stack[100];
int top=-1;
int main(){
	
	printf("choices are:\n 1 for push|| 2 for pop|| \n3 for display||4 for count\n||5 for isEmpty|| 6 for isFull||7 for print peek||8 for exit");
	printf("\nenter your choice :");
	int ch;
	scanf("%d",&ch);
	
	while("exit"){
		switch (ch){
		case 1:
		{ 
		push(top);
		break;
		}
		case 2:
		{ 
		pop(top);
		break;
		}
		case 3:
		{ 
		display(top);
		break;
		}
		case 4:
		{ 
		count(top);
		break;
		}
		case 5:
		{ 
		isEmpty(top);
		break;
		}
		case 6:
		{ 
		isFull(top);
		break;
		}
		case 7:
		{ 
		peek(top);
		break;
		}
		case 8:
		{
			printf("exit");
			break;
		}
	
				

	default:{ 
	printf("\nenter valid choice");
	break;
		}
			
	}
}
	

	
	
	
	return 0;
}

void display(int)
{
	int i;
	if(top== -1)
	{
	printf("\nstack empty");
	return;}
	
	else{
		for(i=top;i>=0;i++){
			printf("%d ",stack[i]);
		}
		
	}
}

void peek(int)
{
	int i;
	if(top==-1){
	printf("\nstack empty");
	return;}
	else{
		printf("peek is : %d",stack[top]);
	}	
}

int count(int)
{ 
 printf("\ncount is: %d",top+1);
 return 0;
}

bool isEmpty(int)
{
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

bool isFull(int)
{
	
	if(top>=100){
		return 1;
	}
	else{
		return 0;
	}
}
void push(int)
{
 if(top==100)
 {
 	printf("\nstack is full");
 	return;
 }	
 else{
 	int a;
 	printf("\nenter element to be push");
 	scanf("%d",&a);
 	stack[top+1]=a;
 	top+-1;
 }
}
void pop(int)
{
	if(top==-1)
	{ printf("\nstack is empty");
	return;
	}
	else{
		top-=1;
	}
}







