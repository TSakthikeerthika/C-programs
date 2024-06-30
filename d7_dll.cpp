#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

void begininsert();
void traverse();
void lastinsert(); 
void rev_display();
void count_lc();
void randominsert(); 
void randomdelete();
void begindelete(); 
void enddelete(); 
void search(); 

struct node
{
	char data;
	struct node *prev;
	struct node *next;
	
};
struct node *head;
 
void begininsert()
{
 struct node *ptr;  
 char val;
     
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n UnderFLOW");  
   }  

else
{
  printf("\nEnter the value which you want to insert? : ");  
  scanf(" %c",&val);
    
  if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=val;  
       head=ptr;  
   }  
else   
   {  
       ptr->data=val;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   printf("\nNode inserted\n");  
}  

}

void traverse()  
{  
    struct node *ptr;  
   
    ptr = head;  
    if(head==NULL){
    printf("\n Nothing to Print"); }
     else
     {
	  printf("\n Printing values...\n");  
      while(ptr != NULL)  
    {  
        printf("%c\n",ptr->data);  
        ptr=ptr->next;  
    }  
}
}   

void lastinsert()  
{  
   struct node *ptr,*temp;  
   char item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n UnderFLOW");  
   }  
   else  
   {  
       printf("\n Enter value : ");  
       scanf(" %c",&item);  
       ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  

           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
                    }  
     printf("\n Node inserted at Last \n");  
    
}  

void rev_display()
{
	struct node *ptr;  
   
    ptr = head;  
    if(head==NULL)
    printf("\n Nothing to Print"); 
     else
     {
	  printf("\n Printing values...\n");  
    while(ptr->next != NULL)  
    {  
        //printf("%d\n",ptr->data);  
        ptr=ptr->next;  
    }
        while(ptr->prev != NULL)  
    {  
        printf("%c \n",ptr->data);  
        ptr=ptr->prev;  
    }
    printf("%c \n",ptr->data);
    
}
}

void begindelete()
{
	struct node *ptr;
	if(head==NULL){
		printf("no nodes to have to delete");
	}
	else if(head->next==NULL){
		head=NULL;
		free(head);
		printf("node deleted,now list is empty\n");
	}
	else{
		ptr=head;
		head=head->next;
		head->prev=NULL;
		free(ptr);
		printf("node deleted successfully..\n");
		
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


void count_lc()
{
	struct node *ptr;  
   
    ptr = head;  
    int count;
    if(head==NULL)
    printf("\n Nothing to Print");
	 
    else
    {
	  printf("\n counting lc  values...\n");  
      while(ptr->next != NULL)  
       {  
        
          if( islower(ptr->data))
		  {
        	count++;
		  }
          ptr=ptr->next;  
        }
       printf("count of lower case is %d ", count+1);
    }
}

void search()
{
   struct node *ptr;
   char k;
   printf("enter key element to  be search:\n");
   scanf(" %c",&k);
   if(head==NULL)
   {
   	printf("\n nothing to search, because head==null:");
   	return;
   	}
   	
    else if(head->next==NULL)
	{
    	if(head->data==k){
    		printf("key found at %c",head->data);
		}
		else{
			printf("key not found");
		}
	}
	
	else 
	{
	  ptr=head;
	//int count=0;
	while(ptr->next!=NULL){
			if(ptr->data==k){
				printf("key found at %c",ptr->data);
				break;
			}
			ptr=ptr->next;
		}
	}	   	
}

void randominsert()
{
	struct node *ptr,*temp;
        int i,pos;
        char val;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n memory not allocated for temp");
                return;
        }
        
        printf("\n Enter the position for the new node to be inserted: ");
        scanf("%d",&pos);
        printf("\n Enter the data value of the node: ");
        scanf(" %c",&val) ;
  		temp->data=val;
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=head;
                head->next=temp;
                head=temp;
                //temp->next->prev =temp;
                temp->prev=NULL;
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
	struct node *ptr,*temp;
	ptr=head;
	int i,pos;
	if(head==NULL){
		printf("nothing to delete\n");
	}
	
	printf("enter pos to random delete:");
	scanf("%d",&pos);
	
	if(pos==0)
	{
		temp=head;
		ptr=head->next;
		ptr->prev=NULL;
		head=temp->next;
		free(temp);
		printf("pos 0 deleted sucessfully...\n");
    }
	else
	{
		ptr=head;
		for(i=0;i<pos;i++){
			temp=ptr;
			ptr=ptr->next;
			if(ptr==NULL){
				printf("pos not found..");
				return;
			}
		}
		temp->next=ptr->next;
		ptr->next->prev=temp;
		free(ptr);
		printf("possision deleted successfully..");
	}
}


int main()
{
	
	int choice;
	while(choice!=6){
		
		printf("\n 1.begin insert \n 2.last insert \n 3. traverse/display \n 4. rev_display \n 5.count_lower \n 6.exit \n 7.begin_delete\n 8.end_delete \n 9.search \n 10.Random_Insert\n 11.random_delete\n");
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
	    		rev_display();
	    		break;
	    		
	    	case 5:
	    		count_lc();
	    		break;
	    		
	    	case 6:
	    		printf("\n exiting.....\n");
	    		break;
	    		
	    	case 7:
	    		begindelete();
	    		break;
	    		
	    	case 8:
	    		enddelete();
	    		break;
	    		
	    	case 9:
	    		search();
	    		break;
	    	
	    	case 10:
	    		randominsert();
	    		break;
	    		
	    	case 11:
	    		randomdelete();
	    		break;
	    		
	    	default:
	    		printf("\n enter valid choice..!");
	    		break;
	    	
		};
	
	}
	
}

