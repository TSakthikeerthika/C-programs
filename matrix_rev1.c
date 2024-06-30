//to print diogonal of matrix, max in diogonal
#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	int ar[i][j];
	int row,col;
	for (row=0;row<i;row++){
		for(col=0;col<j;col++){
			printf("enter element[%d][%d] :",row,col);
			scanf("%d",&ar[row][col]);
		}
	}
	
	// max,min element in matrix
	int max,min,temp_max,temp_min;
	max,min=ar[0][0];
	for (row=0;row<i;row++){
		for(col=0;col<j;col++){
			//max,min=ar[0][0];
			temp_max=ar[row][col];
			temp_min=ar[row][col];
			if(temp_max>max){
				max=temp_max;}
			if(temp_min<min){
				min=temp_min;}
		} 
	}
	printf("\nmax is:%d \n min is:%d",max,min);
	
			
	
	
	
	
	
	
	
	
	/*if(i!=j){
		printf("\n diogonal not possible");
		exit(0);
	}
	int max,temp;//to find max of diogonal
	for (row=0;row<i;row++){
		for(col=0;col<j;col++){
			if(col==row){
			printf("\n%d",ar[row][col]); //print  diogonal
			//to find max of diogonal
			max=ar[0][0];
			temp=ar[row][col];
			if(temp>max){
				max=temp;
			}
		}
	   }
   }
   printf("\n max diogonal value is:%d",max);*/
	
	return 0;
}
