#include <stdio.h>  
#define V 5 /* number of vertices in the graph */  
  
/* function to initialize the matrix to zero */  
void init(int arr[][V]) {  
  int i, j;  
  for (i = 1; i <= V; i++)  
    for (j = 1; j <= V; j++)  
      arr[i][j] = 0;  
}  
  
/* function to add edges to the graph */  
void insertEdge(int arr[][V], int i, int j,int v) {  
  arr[i][j] = v;   
}  
  
/* function to print the matrix elements */  
void printAdjMatrix(int arr[][V]) {  
  int i, j;  
  for (i = 1; i <= V; i++) {  
    printf("%d: ", i);  
    for (j = 1; j <= V; j++) {  
      printf("%d   ", arr[i][j]);  
    }  
    printf("\n");  
  }  
}

void cycle(int arr[][V]) {  
  int i, j;  
  for (i = 1; i <= V; i++) {    
    for (j = 1; j <= V; j++) { 
	  if(i==j && arr[i][j]!=0){
	  	printf("\n Given Graph is Cyclic Graph..!\n");
	  	break;
		}
	  } 
  
    }  
  }  







  
  
int main() {  
  int adjMatrix[V][V];  
  
  init(adjMatrix);  
  insertEdge(adjMatrix, 1,4,2);  
  insertEdge(adjMatrix,2,5,8);  
  insertEdge(adjMatrix,3,1,10);  
  insertEdge(adjMatrix,3,4,5);  
  insertEdge(adjMatrix, 3,5,6);
  insertEdge(adjMatrix, 4,2,15);
  insertEdge(adjMatrix, 4,4,15);
  

  //insertEdge(adjMatrix, 6,8); not print in matrix since size 1 to 6.
  
  printAdjMatrix(adjMatrix);  
  cycle(adjMatrix);
  
  return 0;  
}  

