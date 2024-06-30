#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("%d -> ", root->key);

    // Traverse right
    inorder(root->right);
  }
}

// preorder Traversal
void preorder(struct node *root) {
  if (root != NULL) {
  	// Traverse root
    printf("%d -> ", root->key);
    // Traverse left
    preorder(root->left);

    // Traverse right
    preorder(root->right);
  }
}

// postorder Traversal
void postorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    postorder(root->left);
	// Traverse right
    postorder(root->right);
    // Traverse root
    printf("%d -> ", root->key);
  }
}










// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

// Find the inorder successor
struct node *successor(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Find the inorder predecessor
struct node * predecessor(struct node *node) {
  struct node *current = node;

  // Find the rightmost leaf
  while (current && current->right != NULL)
    current = current->right;

  return current;
}


// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp =successor(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

struct node * search(struct node * , int );
struct node * search(struct node * root, int key)
{
	if(root==NULL|| root->key == key){
		return root;
	}
	if(key > root->key){
		return search(root->right,key);
	}
	if(key < root->key){
		return search(root->left,key);
	}
}


struct node * pt_search(struct node * , int );
struct node * pt_search(struct node * root, int key)
{
	if(root==NULL){
		return root;
	}
	
	 if(root->key == key){
		printf("\n key found \n ");
		printf("%d",root->key);
		printf("\n elements in tree after given  key:\n");
		inorder(root->left);
		inorder(root->right);
		//postorder(root->right);
		//postorder(root->left);
	}
	 if (key > root->key){
		return pt_search(root->right,key);
	}
	if(key < root->key){
		return pt_search(root->left,key);
	}
}










void child_count( struct node *);
void child_count( struct node * root){
	if(root==NULL) return;
	if(root->right == NULL || root->left == NULL){
		//count++;
		printf("%d \n",root->key);
	}
	child_count(root->right);
	child_count(root->left);
	
}

// Driver code
int main() {
  struct node *root = NULL;
  root = insert(root,11);
  root = insert(root, 6);
  root = insert(root, 19);
  root = insert(root, 4);
  root = insert(root, 8);
  root = insert(root, 5);
  root = insert(root, 10);
  root = insert(root,17 );
  root = insert(root,43);
  root = insert(root,31);
  root = insert(root,49); 
  //root = insert(root,5);
  printf("inorder traversal:\n ");
  inorder(root);
  
//  printf("\n the nodes having less than 2 childs are :\n");
//  child_count(root);

    
  printf("IN order traversal: ");
  inorder(root);
  
  
  getar();
  
  printf("\n printing array \n");
  printarr();
  
  printf("\n converting array to BST...\n \n");
  arr_bst();
  
  printf("\n after converting INorder....\n");
  inorder(root);

//  printf("\nAfter deleting \n");
//  root = deleteNode(root,6);
  
//  printf("postorder traversal: ");
//  postorder(root);
  
//  search(root,31);
//  if(search(root,31)==NULL ){
//  	printf("key not found\n");
//  }
//  if(search(root,31)!=NULL ){
 // 	printf("key  found\n");
//  }


  //printf("\n searching key and printing after key.. \n");
//  pt_search(root,19);
  
  //printf("preorder traversal: ");
  //preorder(root);
  
}

