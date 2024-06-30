#include <stdio.h>
#include <stdlib.h>
 struct node {
    int key;
    struct node *left, *right;
};

struct node* newNode(int item)
{
    struct node* temp
        = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

 // A function to do inorder traversal of BST
void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void preorder(struct node* root)
{
    if (root != NULL) {
    	printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
}
}
void postorder(struct node* root)
{
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}


 // A function to insert
struct node* insert(struct node* node, int key)
{
    // If the tree is empty, return a new node
    if (node == NULL)
        return newNode(key);
 
    // Otherwise, recur down the tree
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    // Return the (unchanged) node pointer
    return node;
}

 struct node* search(struct node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
        //printf("%d",root->key);
        return root;
 
    // Key is greater than root's key
    if (root->key < key)
        //printf("%d ", root->key);
        return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}

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
 void deletenode(struct node * , int);
 void deletenode(struct node * root, int key)
 {
 	if (root==NULL) {
 		printf("nothing to delete");
	 }
 	else if (key==root->key)
	 {
 		//printf("%d",root);
 		free(root);
 		//printf("%d",root);
	 }
 }
 


// Driver Code
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

    struct node * root = NULL;
    root = insert(root, 8);
 /*   insert(root, 3);
    insert(root, 1);
    insert(root,6 );
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root,4);
    
    // Print inorder traversal of the BST
  /*  inorder(root);
    printf("\n.......\n");
    preorder(root);
    printf("\n.......\n");
    postorder(root);
    printf("\n.......\n");
    if ( search (root,100)!= NULL){
    	printf(" element found \n");
	}
	else{
    	printf("element not found \n");
	}
	printf("\n.......\n");
	printf(" max depth of given tree is: %d \n", max_depth(root) );
    printf("\n.......\n"); */
    
preorder(root);
deletenode(root,8);
preorder(root);
printf("\n.......\n");

    return 0;
}

