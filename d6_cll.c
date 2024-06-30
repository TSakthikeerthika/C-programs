#include <stdio.h>
#include <stdlib.h>

void begininsert();
void traverse();
void lastinsert(); 
void find_min();
void begindelete(); 
void enddelete();  
void search(); 
void randomdelete();

struct node   
{  
    int data;  
    struct node *next;   
}; 
 
struct node *head; 
 

 void begininsert()
{
   struct node *ptr,*temp;   
    int val;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\n UnderFLOW");  
    }  
    else   
    {  
        printf("\nEnter the node data : ");  
        scanf("%d",&val);  
        ptr->data = val;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr->next = head; 
			
        }  
        else   
        {                       
           temp = head;
           while(temp->next != head) 
           {
            temp = temp->next;  
            }
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   //else close

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
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nUnderFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter Data : ");  
        scanf("%d",&val);  
        ptr->data = val;  
        
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
}
}

void find_max()
{
	struct node *ptr;  
    ptr=head; 
	int len;
	int count=0;
    if(head == NULL)  
    {  
        printf("\n empty list, no nodes have");  
    }     
    else  
    {  
        //printf("\n Printing left max value. ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next; 
			count++; 
        } 
        //printf("%d\n", ptr -> data);  
        len = (count+1)/2;
    }
    ptr=head;
    int i;
    int max=head->data;
    for(i=0;i<len;i++){  
			if(max<ptr->data){
				max=ptr->data;
				ptr=ptr->next;
			} 
        }
        printf("max in left is %d",max);
	}
	
void begindelete()
{
	
	struct node *temp=head;
	if(head==NULL){
		printf("nothing to delete");
	}
	if(head->next=head){
		head->next=NULL;
		printf("first node deleted:..");
	}
	    while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=head->next;
	//head=head->next;
	head=temp->next;
}

void randomdelete()
{
	struct node *ptr,*temp;
	ptr=head;
	int i,pos;
	printf("enter pos to random delete:");
	scanf("%d",&pos);
	
	if(head==NULL){
		printf("nothing to delete\n");
	}
	
	if(pos==0)
	{
		temp=head;
		while(ptr->next !=head){
     	ptr=ptr->next;}
     	head=temp->next;
		ptr->next=head;
		free(temp);
		printf("pos 0 deleted sucessfully...\n");
    }
	else
	{
		ptr=head;
		temp=head;
		for(i=0;i<pos;i++){
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		free(ptr);
		printf("possision deleted successfully..");
	}
}

void find_min()
{
	struct node *ptr;  
    ptr=head; 
	int mid,i;
	int count=0;
    if(head == NULL)  
    {  
        printf("\n empty list, no nodes have");  
    }     
    else  
    {  
    while(ptr -> next != head)  
        {  
          
            printf("%d \n", ptr -> data);  
            ptr = ptr -> next; 
			count++; 
        }
        printf("the count is %d:",count); 
        mid = (count)/2;
        printf("the mid is %d:\n",mid);
    }
    ptr=head;
    for(i=0;i<mid;i++){
    	ptr=ptr->next;
	}
	//printf("ptr data now %d",ptr->data);
	int min=ptr->data;
    for(i=mid;i<count+1;i++){  
        if(ptr->data < min){
				min=ptr->data;
				//ptr=ptr->next;
			} 
			ptr=ptr->next;
        }
    printf("min in right is %d",min);
	}
	 


int main()
{
int ch;

while(ch!=8)
{
	printf("\nchoices are:\n 1.insert_begin\n 2.insert_last\n 3.display/traverse\n 4.delete_begin\n 5.delete_random\n 6.search\n 7.find_min \n 8.exit \n");
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
		begindelete();
		break;
	
		
		case 5:
		randomdelete();
		break;

        case 6:
		find_max();
	    break; 

        case 7:
        find_min();
        break;
		
		case 8:
		printf("\n exiing...\n");
		break;
		
		default:
	    printf("\nenter valid choice\n");
	    break;
	};
}
}

