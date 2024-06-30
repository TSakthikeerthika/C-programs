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
void findmid_dcll();


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
   struct node *ptr,*temp;  
   int val;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n UnderFLOW");  
   }  
   else  
   {  
       printf("\n Enter value : ");  
       scanf("%d",&val);  
        ptr->data=val;  
       if(head == NULL)  
       {  
           head = ptr;  
           ptr -> next = head;   
           ptr -> prev = head;   
       }  
       else  
       {  
          temp = head;  
          while(temp->next !=head)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          head -> prev = ptr;  
      	  ptr -> next = head;  
        }  
   }  
     printf("\n Node inserted \n");  
} 

void randominsert(){
	struct node *newnode,*ptr,*temp;
	ptr=head;
	temp=head;
	int i,pos,val;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter position to insert:");
	scanf("%d",&pos);
	printf("enter data to new_node:");
	scanf("%d",&val);
	newnode->data=val;
	if(head==NULL){
		if(pos!=0){
			printf("position not found\n");
			return;
		}
	/*	else{
		
		head=newnode;
		newnode->prev=head;
		newnode->next=head;
		printf("node inserted sucessfully..\n");
	   }*/
	}
	if(pos==0){
		//ptr=head;
		if(head == NULL){
		head=newnode;
		newnode->prev=head;
		newnode->next=head;
		printf("node inserted sucessfully..\n");	
		}
		else{
		newnode->prev=head->prev;
		newnode->prev->next=newnode;
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
		printf("node inserted sucessfully..\n");	
		}
		
	}
	else{
		ptr=head;
		for(i=0;i<pos-1;i++){
			temp=ptr;
			ptr=ptr->next;
			if(ptr==head){
				printf("Position not found");
				return;
			}
		}
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		ptr->prev=newnode;
		printf("node inserted sucessfully..\n");
	}
}
 void begindelete()
 {
 	struct node *temp;
 	temp = head;
 	if(head==NULL){
 		printf("\n nothing to delete because head is null \n");
 		return;
	 }
	 
	if(head->next==head){
		head = NULL;
		free(head);
		printf("\n node deleted, no more nodes  \n");
		return;
	}
	
	else{
		temp->prev->next = temp->next;
		head = temp->next;
		head->prev = temp->prev;
		free(temp);
		printf("\n node deleted..\n");
	}
 }
 
 void findmid_dcll() 
{  
    int count=1;
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\n No nodes have in list.so no mid value \n");  
    }     
    else  
    {  
         
          while(ptr -> next != head)  
        {    
            count++;
            ptr = ptr -> next;  
        } 
    }
    int mid=count/2;
    int i;
    ptr=head;
    for(i=0;i<mid;i++)
	{
    	ptr=ptr->next;
	}
	printf("mid position is: %d \n mid element is: %d \n",mid,ptr->data);
                 
}

int main()
{
	
	int choice;
	while(choice!=6){
		
		printf("\n 1.begin insert \n 2.last insert \n 3. traverse/display \n 4. Random_insert\n 5.begin_delete\n 6.exit \n 7. find_mid_dcll\n");
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
	    		
	    	case 4:
	    		randominsert();
	    		break;
	    		
	    	case 5:
	    		begindelete();
	    		break;
	    	
	    		
	    	case 6:
	    		printf("\n exiting.....\n");
	    		break;
	    		
	    	case 7:
	    		findmid_dcll();
	    		break;
	    		
	    	
	    		
	    	default:
	    		printf("\n enter valid choice..!");
	    		break;
	    	
		};
	
	}
	
}


