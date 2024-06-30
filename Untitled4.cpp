#include <stdio.h>
#include <stdlib.h>
void difference(int);
int arr[10];
 struct node {
    int key;
    struct node *left, *right;
};
struct node* newNode(int item)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void postorder(struct node* root)
{
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ->", root->key);
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
    if (root == NULL || root->key == key)
        return root;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}
int maxdepth(struct node*node){
    if (node == NULL) return 0;
    else{
	    int ldepth = maxdepth(node->left);
        int rdepth = maxdepth(node->right);
        if(ldepth > rdepth){
        	return "Left subtree";
		}
        else{
        	return "Right subtree";
		}
    }
}
int main()
{
	int i,arr[10];
	struct node* root = NULL;
	for(i=0;i<10;i++){
		printf("Enter element %d:",i+1);
		scanf("%d",&arr[i]);
		root = insert(root, arr[i]);
		insert(root, arr[i]);
	}
	int choice=0;   
    while(choice != 8)  
    {  
        printf("\n\nChose any one\n");  
        printf("\n1.postorder\n2.search\n3.search and printposition\n4.maximum size subtree\n5.Exit");  
        printf("\n Enter your choice:");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                postorder(root); 
                break;  
            }  
            case 2:  
            {  
				int key;
				printf("Enter key:");
				scanf("%d",&key);
    			if (search(root, key) == NULL)
        			printf("%d not found\n", key);
    			else
        			printf("%d found\n", key);
 
                break;  
            }  
            case 3:  
    		{ 
                int key1,key2;
				printf("Enter key1:");
				scanf("%d",&key1);
				printf("Enter key2:");
				scanf("%d",&key2);
    			if (search(root, key1) == NULL)
        			printf("%d not found\n", key1);
    			else
        			printf("%d found\n", key1);   
        		if (search(root, key2) == NULL)
        			printf("%d not found\n", key2);
    			else
        			printf("%d found\n", key2); 	
                break;   
            }  
			case 4:  
    		{ 
    			printf("%s",maxdepth(root)); 
                break;   
            }  
			case 5:  
    		{ 
                printf("Exiting....");  
                break;   
            }   
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
    return 0;
}
}
