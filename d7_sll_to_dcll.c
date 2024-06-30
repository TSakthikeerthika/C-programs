#include <stdio.h>
#include <stdlib.h>

void traverse_sll();
void lastinsert_sll();
void traverse_dcll();
void lastinsert_dcll();
void begin_delete_dcll();

void sll_to_dcll();
void findmid_dcll();

struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};
struct node *head;
 
void traverse_sll()  
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
	  
void lastinsert_sll()  
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
    
void traverse_dcll() 
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

void lastinsert_dcll()
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
    for(i=0;i<mid;i++){
    	ptr=ptr->next;
	}
	printf("mid position is: %d \n mid element is: %d \n",mid,ptr->data);
                 
}

void sll_to_dcll(){
	//convert sll to dll
	//convert dll to dcll
	
	if(head==NULL){
		printf("\n nothing to convert.. head is empty..\n");
		return;
	}
	//sll to dll
	struct node *temp,*ptr;
	temp=NULL;
	ptr=head;
	while(ptr->next != NULL){
		ptr->prev = temp;
		temp=ptr;
		ptr=ptr->next;	
	}
	//ptr->prev=temp;
	//temp=ptr;
	//dll to dcll
	ptr->next= head;
	head->prev=ptr;
	printf("DCLL conversion done....!");
}

void begin_delete_dcll()
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

int main(){
int ch;

while(ch!=10)
{
	printf("\nchoices are:\n 1.insert_last_sll\n 2.insert_last_dcll\n 3.traverse_sll \n 4.traverse_dcll\n 5.sll_to_cll\n 6. begin_delete_dcll \n 7.find mid value \n 10.exit\n");
	printf("\nenter your choice :");
	scanf("%d",&ch);
		switch (ch)
		{
		case 1:
	    lastinsert_sll();
		break;
		
		case 2:
		lastinsert_dcll(); 
		break;
		
		case 3:
		traverse_sll();
		break;
		
		case 4:
		traverse_dcll();
		break;
		
		case 5:
		sll_to_dcll();
		break;
		
		case 6:
		begin_delete_dcll();
		break;
		
		case 7:
		findmid_dcll();
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
