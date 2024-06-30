#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node * left;
	struct node * right;
};
//function to create new node
struct node* newNode(int);
struct node* newNode( int val){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = val;
	temp->left == temp->right == NULL;
	return temp;
}
//functio to insert 
struct node* insert(struct node* , int);
struct node* insert(struct node* root, int val)
 {
 	if(root==NULL) //create root;
	 {
 		 return newNode(val);
		}
		
	if(val < root->data){
		root->left = insert(root->left,val);
		}
	else if (val > root->data)
	{
		root->right = insert(root->right,val);
	}
		return root;
}
void preorderTraversal(struct node* );
void preorderTraversal(struct node* root) 
{
  if (root == NULL) return;
  printf("%d ->", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
  
}
void postorderTraversal(struct node* ); 
void postorderTraversal(struct node* root) 
{
  if (root == NULL) return;
  
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->data);
}
void inorderTraversal(struct node*);
void inorderTraversal(struct node* root)
{
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
//main function with menu driven 
int main()
{
struct node* root = NULL;
root = insert(root, 50);
insert(root, 30);
insert(root, 20);
insert(root, 40);
insert(root, 70);
insert(root, 60);
insert(root, 80);
return 0;
}//main block
