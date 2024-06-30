#include <stdio.h>  
#include <stdlib.h>  
#include<ctype.h>

struct node{  
    char data;  
    struct node *left;  
    struct node *right;  
};
struct node *root = NULL;
struct node *head = NULL;

struct node* createNode(char data)
{  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    //Assign data to newNode, set left and right children to NULL  
    newNode->data = data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
    return newNode;  
} 

void postorderTraversal(struct node*);

void postorderTraversal(struct node* root) 
{
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf(" %c ->", root->data);
  
}

void lastinsert(struct node * ptr)  
{  
   struct node *temp;
     
       if(head == NULL)  
       {  
           ptr->right = NULL;  

           ptr->left = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->right!=NULL)  
          {  
              temp = temp->right;  
          }  
          temp->right = ptr;  
          ptr ->left=temp;  
          ptr->right = NULL;  
          }  
}

void traverse()  
{  
    struct node *ptr;  
   
    ptr = head;  
    if(head==NULL){
    printf("\n Nothing to Print");
	 return; 
	 }
     else
     {
	  printf("\n Printing values...\n");  
      while(ptr != NULL)  
    {  
        printf("%c\n",ptr->data);  
        ptr=ptr->right;  
    }  
}
}

void bt_to_dll(struct node * root)
{
	if(root==NULL){
	return; 
	}
	else{
		
		bt_to_dll(root->left);
		bt_to_dll(root->right);
		struct node *ptr = createNode(root->data);
		lastinsert(ptr);
	}
	
}

int main()
{
	root = createNode('a'); 
	 
    root->left = createNode('s');  
    root->right = createNode('e');  
    
    root->left->left = createNode('o');  
    root->left->right = createNode('k');
    
    root->right->left = createNode('h');  
    root->right->right = createNode('s');
    //sakthi
    root->left->left->left = createNode('i');
    root->left->left->right = createNode('d');
    
    root->right->left->left = createNode('u');
    root->right->left->right = createNode('g');
    
    root->right->left->left->left = createNode('r');
    root->right->left->left->right = createNode('c');
    
    
    
    printf("\n post order of BT \n");
    postorderTraversal(root);
    printf("\n converting BT to DLL....\n ");
    bt_to_dll(root);
    printf("\n printing DLL\n");
    traverse();
    
	
}

















