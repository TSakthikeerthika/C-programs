#include <stdio.h>
#include <stdlib.h>

#define SIZE 40

struct queue {
  int items[SIZE];
  int front;
  int rear;
};


int no_vertices,i,j;
struct node {
  int data;
  struct node* next;
};
struct node* creategraph(struct node *adj[])
 {
  struct node* newnode;
  int k,data;
  struct node* last=NULL;

for (i = 0; i<no_vertices; i++)
{
    printf("\n How many vertices adjacent to %d ",i);
    scanf("%d",&k);
for (j=1;j<=k;j++)
{
newnode = (struct node* )malloc(sizeof(struct node *));
printf("Enter the %d neighbour of %d : ",j,i);
scanf("%d",&data);
newnode->data=data;
newnode->next=NULL;
if(adj[i]==NULL)
{

adj[i]=newnode;
}
else
{
last->next=newnode;
}
last=newnode;
}
}
}

void printgraph(struct node *adj[])
 {
    struct node* temp;
    for (i = 0; i < no_vertices; i++)
{
temp=adj[i];
printf("\n vertices adjacent to %d are :",i);
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
}
//void find_neighbour(struct node *);
void find_neighbour(struct node *adj[])
 {
    struct node* temp;
    int key;
    printf("\n enter the list node:\n");
    scanf("%d",&key);
    temp=adj[key];
    while(temp!=NULL){
    	printf("%d\t",temp->data);
    	temp=temp->next;
	}  
}


int main() 
{
printf("\n Enter No of vertices in graph ");
scanf("%d",&no_vertices);
struct node *adj[no_vertices];
for (i = 0; i < no_vertices; i++)
{
adj[i]=NULL;
}
creategraph(adj);
printgraph(adj);
find_neighbour(adj);

  return 0;
}



