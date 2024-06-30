//implement all the operations on circular doubly linked list
#include <stdio.h>
#include <stdlib.h>

void begininsert();
void traverse();
void lastinsert(); 
void randominsert(); 
void begindelete(); 
void enddelete();  
void search(); 


struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
}; 
 
struct node *head;

  
void begininsert()
{
   struct node *ptr,*temp;   
   int val;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nUnderFLOW");  
   }  
   else  
   {  
    printf("\nEnter  value : ");  
    scanf("%d",&val);  
    ptr->data=val;  
   if(head==NULL)  
   {  
      head = ptr;  
      ptr -> next = head;   
      ptr -> prev = head;   
   }  
   else   
   {  
    temp = head;   
    while(temp->next != head)  
    {  
        temp = temp -> next;   
    }  
    temp -> next = ptr;  
    ptr -> prev = temp;  
    head -> prev = ptr;  
    ptr -> next = head;  
    head = ptr;  
   }  
   printf("\n Node inserted\n");  
}  
     
}  

void traverse() 
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\n Nothing to print");  
    }     
    else  
    {  
        printf("\n Printing values ... \n");  
          while(ptr -> next != head)  
        {  
           printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
       printf("%d\n", ptr -> data);  
    }              
} 

 
void lastinsert()
  {
   struct node *newnode,*ptr;
   int val;  
   newnode = (struct node *) malloc(sizeof(struct node));  
   if(newnode == NULL)  
   {  
       printf("\n UnderFLOW");  
   }  
   else  
   {  
       printf("\n Enter value : ");  
       scanf("%d",&val);  
        newnode->data=val;  
       if(head == NULL)  
       {  
           head = newnode;  
           newnode -> next = head;   
           newnode -> prev = head;   
       }  
       else  
       {  
          ptr = head;  
          while(ptr->next !=head)  
          {  
              ptr = ptr->next;  
          }  
          ptr->next = newnode;  
          newnode ->prev=ptr;  
          head -> prev = newnode;  
      	  newnode -> next = head;  
        }  
   }  
     printf("\n Node inserted \n");  
}  

  
void enddelete()
{
	struct node *ptr
}
    
    








int main()
{
	
	int choice;
	while(choice!=6){
		
		printf("\n 1.begin insert \n 2.last insert \n 3. traverse/display \n 4. rev_display \n 5.count_lower \n 6.exit \n 7.begin_delete\n 8.end_delete \n 9.search \n 10.Random_Insert");
	    printf("\n Enter your choice:");
		scanf("%d",&choice);
	    
	    switch(choice){
	    	case 1:
	    		begininsert();
	    		break;
	    		
	    	case 2:
	    		lastinsert();
	    		break;
	    		
	    	case 3:
	    		traverse();
	    		break;
	    		
	    	
	    		
	    	case 6:
	    		printf("\n exiting.....\n");
	    		break;
	    		
	    	
	    		
	    	default:
	    		printf("\n enter valid choice..!");
	    		break;
	    	
		};
	
	}
	
}


