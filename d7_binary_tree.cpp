#include <stdio.h>  
#include <stdlib.h>  
#include<ctype.h>
 void preorderTraversal(struct node*);
 void postorderTraversal(struct node*);
 void inorderTraversal(struct node*);
 void left_sub_tree(struct node*);
 
 int sum_output(struct node * );
 int sumNumbers(struct node * );
 
 void min_max(struct node*);
 int max_depth( struct node *);
 
 void print_vowles(struct node *);
 

//Represent a node of binary tree  
struct node{  
    char data;  
    struct node *left;  
    struct node *right;  
}; 
 
//Represent the root of binary tree  
struct node *root = NULL;  
   
//createNode() will create a new node  
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

void preorderTraversal(struct node* root) 
{
  if (root == NULL) return;
  printf(" %c ->", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
  
}

 void postorderTraversal(struct node* root) 
{
  if (root == NULL) return;
  
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf(" %c ->", root->data);
}

 void inorderTraversal(struct node* root) 
{
  if (root == NULL) return;
  
  inorderTraversal(root->left);
  printf(" %c ->", root->data);
  inorderTraversal(root->right);
}

   void left_sub_tree(struct node* root) 
{
  if (root == NULL) return;
  preorderTraversal(root->left);
}

//int ar[] = (int)mallac(sizeof(int));
char ar[100],k=0;

void right_sub_tree(struct node* root) 
{
  if (root == NULL) return;
  ar[k]=root->data;
  k++;
  preorderTraversal(root->right);
  
}

/*void min_max(struct node* root){
	
    	
	int len = sizeof(ar)/sizeof(ar[0]);
	int sec_min=ar[1];
	int max =ar[len];
	printf("\n max in rigth sub tree is : %d  ",max);
    printf("\n sec_min in right sub tree is : %d ", sec_min);
		
}*/

int max_depth( struct node *node)
{
	if (node==NULL){
		return 0;	} 
	else
	{
		int ldep=max_depth(node->left);
		int rdep=max_depth(node->right);
		if(ldep>rdep){
			return (ldep+1); }
		else {
			return (rdep+1);  }
	}
}

 /*void preorder_right_Traversal(struct node* root) 
{
	void rightSubtreeToArray(TreeNode* root, int* arr, int* index) {
    if (root && root->right) {
        inOrder(root->right, arr, index);
    }
}

{
  if (root == NULL) return;
  preorderTraversal(root->right);
}

  int max;
  int min_s;
  max,min_s = root->data;
  if(root->data > max){
  	max=root->data;
  }
  if(root->data < min_s){
  	min_s = root->data;
  }  
  printf("\n max in rigth sub tree is : %d  ",max);
  printf("\n sec_min in right sub tree is : %d ", min_s);
  
}*/

int sumNumbers(struct node * root, int sum)
{
	if(!root) return 0;
	
	sum = (sum * 10) + root->data;
	
	if(!root -> left && !root-> right){
			return sum;
	}
    return sumNumbers(root -> left,sum) + sumNumbers(root -> right, sum);
}


 int sum_output(struct node * root)
{
	return sumNumbers(root,0);
}

//SLL

void begininsert(int);
void lastinsert(int);
void RT(struct node *);
void LT(struct node *);

struct node1
{
	int data1;
	struct node1 *next;
};

struct node1 *head;

void begininsert(int val)
{
  struct node1 *ptr=(struct node1*)malloc(sizeof(struct node1*));
if(ptr==NULL)
printf("\n Underflow");
else
{
	ptr->data1=val;
	ptr->next=head;
	head=ptr;  
}
}

void lastinsert(int val)  
    {  
        struct node1 *ptr = (struct node1*)malloc(sizeof(struct node1));     
        struct node1 *temp; 	 
       	
        if(ptr == NULL)  
        {  
            printf("\nUnderflow");     
        }  
        else  
        {  
            ptr->data1 = val;  
            if(head == NULL)  
            {  
                ptr -> next = head;  
                head = ptr;  
                 
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
                  
              
            }  
        }  
    }  









void traverse()  
    {  
        struct node1 *ptr;     
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
                printf("\n%d",ptr->data1);  
                ptr = ptr -> next;  
            }  
        }  
    } 
	
void tree_to_sll();

 void RT(struct node* root) 
{
  if (root == NULL) return;
  preorderTraversal(root->right);
  lastinsert(root->data);
  RT(root->left);
  RT(root->right);
  //preorderTraversal(root->right);
}
  void LT(struct node* root)
  {
  	if(root==NULL) return;
  	preorderTraversal(root->left);
  	begininsert(root->data);
  	  LT(root->left);
      LT(root->right);
  	//preorderTraversal(root->left);
  	
  }
  
void print_vowels(struct node* root) 
{
  if (root == NULL) return;
  if( root->data == 'a'||root->data == 'e'||root->data == 'i'||root->data == 'o'||root->data == 'u'||root->data == 'A'||root->data == 'E'||root->data == 'I'||root->data == 'O'||root->data == 'U')
 {
 	printf("%c \n", root->data);
 }
  print_vowels(root->left);
  print_vowels(root->right);
}

int count_internal(struct node * );

int count=0;

int count_internal(struct node * root)
{
  if (root == NULL) return 0;
  
  if( root->right != NULL && root->left != NULL)
 {
 	count++;
 }
  count_internal(root->left);
  count_internal(root->right);
  
  return count;
	
}












int main()  
{  
    //Add nodes to the binary tree  
    /*root = createNode(1);  
    root->left = createNode(2);  
    root->right = createNode(3);  
    root->left->left = createNode(4);  
    root->right->left = createNode(5);  
    root->right->right = createNode(6);  
    root->right->right->right= createNode(7);  
    root->right->right->right->right = createNode(8); */
	
	root = createNode('a'); 
	 
    root->left = createNode('s');  
    root->right = createNode('e');  
    
    root->left->left = createNode('o');  
    root->left->right = createNode('k');
    
    root->right->left = createNode('h');  
    root->right->right = createNode('s');
    
    root->left->left->left = createNode('i');
    root->left->left->right = createNode('d');
    
    root->right->left->left = createNode('u');
    root->right->left->right = createNode('g');
    
    root->right->left->left->left = createNode('r');
    root->right->left->left->right = createNode('c'); 
    
    int choice;
	while(choice!=6){
		
		printf("\n 1. Pre order Traverse \n 2.Post order Traverse \n 3. In Order Traverse \n 4. print left sub tree \n 5.Sum_Output  7.print_sll 8. tree_to_sll\n 9.print_vowels\n 10. count_internal\n 11. max_depth       \n 6.exit \n");
	    printf("\n Enter your choice:");
		scanf("%d",&choice);
	    
	    switch(choice){
	    	case 1:
	    		preorderTraversal(root);
	    		printf("\n preorder done..");
	    		break;
	    		
	    	case 2:
	    		postorderTraversal(root);
	    		printf("\n post_order done..");
	    		break;
	    		
	    	case 3:
	    		inorderTraversal(root);
	    		printf("\n in_order done..");
	    		break;
	    		
	    	case 4:
	    		printf("\n left sub tree: ");
	    		left_sub_tree(root);
	    		break;
	    		
	    	case 5:
	    		sum_output(root);
	    		break;
	    		
	    	case 7:
	    		traverse();
	    		break;
	    		
	    	case 8:
	    		
	    		RT(root);
	    		LT(root);
	    		break;
	    		
	    	case 9:
	    		printf("the vowels in given tree are:\n");
	    		print_vowels(root);
	    		break;
	    		
	    	case 10:
	    		printf( " number of internal nodes are: %d \n",count_internal(root) );
	    		break;
	    		
	    	case 11:
	    		printf(" max depth of given tree is: %d \n", max_depth(root) );
	    		break;
	    	
	    	
	    		
	    	case 6:
	    		printf("\n exiting.....");
	    		break;
	    		
	    	
	    		
	    	default:
	    		printf("\n enter valid choice..!");
	    		break;
	    	
		};//switch block
	}//while block
 }//main block

