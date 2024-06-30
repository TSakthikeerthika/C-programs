#include<stdio.h>
int funct(int n);
int main(){
	int n;
	printf("elter no. of elements :");
	scanf("%d",&n);
	
	int res;
	res = funct(n);
	return 0;
}
int funct(int n){
	int ar[n];
	int i;
	for(i=0;i<n;i++){
		printf("\nEnter element[%d]of array : ",i);
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++){
		printf("%d  ",ar[i]);
	}
	
	int ap_val,ins_val,ins_pos;
	printf(" enter ap_val or ins_val  for do oporation");
	char opr[10];
	scanf("enter operation: %s",&opr);
	
	switch (opr){
		case "ap_val":
			printf("enter value to append: ")
			
			break;
			
		case "ins_val":
			printf("enter value to ")
			
			break;
		
		default:
			printf("enter valid input");
	}
			
	}
	
	return 0;
}
