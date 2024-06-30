//Single Linked List Coding
#include <stdio.h>
#include <stdlib.h>

void begininsert();
void traverse();
void lastinsert(); 
void randominsert(); 
void begindelete(); 
void enddelete();  
void search(); 
void swap();

struct node
{
	int data;
	struct node *next;
};
struct node *head;
 
void begininsert()
{
   int val;
printf("\nEnter the value which you want to insert? : ");  
 scanf("%d",&val);  
struct node *ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
printf("\n Underflow");
else
{
	ptr->data=val;
	ptr->next=head;
	head=ptr;
	printf("\nNode inserted\n");  
}
}

void traverse()  
    {  
        struct node *ptr;     
        ptr = head;   
        if(ptr == NULL)  
        {  
            printf("Empty list..");  
        }  
        else  
        {  
            printf("printing values . . . . .\n");   
            while (ptr!=NULL)  
            {  
                printf("\n%d",ptr->data);  
                ptr = ptr -> next;  
            }  
        }  
     } 
	  
void lastinsert()  
    {  
        struct node *ptr = (struct node*)malloc(sizeof(struct node));     
        struct node *temp; 	 
        int val;
        printf("\nEnter the value which you want to insert? : ");  
       scanf("%d",&val);       	
        if(ptr == NULL)  
        {  
            printf("\nUnderflow");     
        }  
        else  
        {  
            ptr->data = val;  
            if(head == NULL)  
            {  
                ptr -> next = head;  
                head = ptr;  
                printf("\nNode inserted");  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = ptr;  
                ptr->next = NULL;  
                printf("\nNode inserted");  
              
            }  
        }  
    }  
    
void randominsert()
{
        struct node *ptr,*temp;
        int i,pos,val;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n memory not allocated for temp");
                return;
        }
        printf("\n Enter the position for the new node to be inserted: ");
        scanf("%d",&pos);
        printf("\n Enter the data value of the node: ");
        scanf("%d",&val) ;
  		temp->data=val;
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=head;
                head=temp;
        }
        else
        {
                for(i=0,ptr=head;i<pos-1;i++)
		{ 
		

		ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\n  Position not found \n ");
                                return;
                        }
                }
                temp->next =ptr->next;
                ptr->next=temp;
        }
        printf("\nNode inserted"); 
}

void randomdelete()
{
        struct node *ptr,*prev;
        int i,pos;
        ptr=head;
        printf("\n Enter the position of node to be deleted: ");
        scanf("%d",&pos);        
		if(head==NULL)
		{
		printf("nothing to delete");
		}
		
        if(pos==0)
        {
            head=ptr->next;
            free(ptr);
            printf("node deleted");
        }
        else
		{
			ptr=head;
        	for(i=0;i<pos;i++)
			{
				prev=ptr;
        		ptr=ptr->next;
        		if(ptr==NULL)
                        {
                                printf("\n  Position not found \n ");
                                return;
                        }              
			}
			prev->next=ptr->next;
			free(ptr);
		}
		 printf("\nNode deleted"); 
}

void begindelete()
{
	if(head==NULL){
		printf("nothing to delete");
	}
	else{
		struct node *ptr;
		ptr=head;
		head=ptr->next;
		printf("node deleted");
	}
}

void enddelete()
{
	if(head==NULL){
		printf("nothing to delete");
	}
	else{
		
		struct node *ptr, *prev;
		ptr=head;
		while(ptr->next!=NULL){
			prev = ptr;
			ptr=ptr->next;
		}
		prev->next=NULL;
		free(ptr);
		printf("node deleted");
		
	}
}

void search()
{
   struct node *ptr;
   int k;
   printf("enter key element to  be search:\n");
   scanf("%d",&k);
   if(head==NULL){
   	printf("\n nothing to search, head==null:");
   	}
    if(head->next==NULL){
    	if(head->data==k){
    		printf("key found at %d",head->data);
		}
		else{
			printf("key not found");
		}
	}
	
	ptr=head;
	int count=0;
	while(ptr->next!=NULL){
		if(count%2==0){
			if(ptr->data==k){
				printf("key found at %d",ptr->data);
			}
		}
		count++;
	}	   	
}

void swap()
{
   int k;
   struct node *left;
   struct node *right;
   struct node *ptr;
   left=head;
   right=head;
   ptr=head;
   int counter = 1;
   printf("enter key possion to  be search:\n");
   scanf("%d",&k);
   while(ptr!=NULL)
   {
     if (counter<k)
	 {
	 left = left->next;
	 }
	 
	 if (counter>k)
	 {
	  right = right->next;
	  }
	  
	  ptr = ptr->next;
	  counter++;
	}
//swap values
    int temp = left->data;
	left->data = right->data;
	right->data = temp;
	printf("after swapping:\n");
	traverse();
}


int main(){
int ch;

while(ch!=10)
{
	printf("\nchoices are:\n 1.insert_begin\n 2.insert_last\n 3.display/traverse\n 4.random_insert\n 5.delete_begin\n 6.delete_end\n 7.search\n 8.random delete\n 9. swap\n 10.exit\n");
	printf("\nenter your choice :");
	scanf("%d",&ch);
		switch (ch)
		{
		case 1:
	    begininsert();
		break;
		
		case 2:
		lastinsert(); 
		break;
		
		case 3:
		traverse();
		break;
		
		case 4:
		randominsert();
		break;
		
		case 8:
		randomdelete();
		break;
		
		case 5:
		begindelete();
		break;
		
		case 6:
		enddelete();
		break;

		case 7: 
		search();
		break;
		
		case 9:
		swap();
		break;
		
		case 10:
		printf("\nexiing...\n");
		break;
		
		default:
	    printf("\nenter valid choice\n");
	    break;
	};
}
}
	

















