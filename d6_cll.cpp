#include <stdio.h>
#include <stdlib.h>

void begininsert();
void traverse();
void lastinsert(); 

void begindelete(); 
void enddelete();  
void search(); 

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



int main()
{
int ch;

while(ch!=7)
{
	printf("\nchoices are:\n 1.insert_begin\n 2.insert_last\n 3.display/traverse\n 4.delete_begin\n 5.delete_end\n 6.search\n 7.exit");
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
		
		case 6:
			find_max();
			break;
		
		case 4:
		begindelete();
		break;
		
		case 5:
		enddelete();
		break;

		/*case 6: 
		search();
		break;
		
		case 7:
		printf("\nexiing...\n");
		break;*/
		
		default:
	    printf("\nenter valid choice\n");
	    break;
	};
}
}

void begindelete(){
	
	struct node *temp=head;
	if(head==NULL){
		printf("nothing to delete");
	}
	if(head->next=head){
		head->next=NULL;
		printf("first node deleted, no nodes more in list");
	}
	    while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=head->next;
	//head=head->next;
	head=temp->next;
}

