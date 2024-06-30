//to apply A-I-D in array
#include<stdio.h>
struct s{
	int ar[50];
	//int ap_val;
	//int ins_val;
	//int ins_pos;
	int n;
}k;
int* funct();

int* funct () 
{
	printf("elter no. of elements :");
	scanf("%d",&k->n);
	int i;
	for(i=0;i<k->n;i++){
		printf("\nEnter element[%d]of array : ",i);
		scanf("%d",&k->ap_val[i]);
	}
	return *ar;
}
int main()
{//n=array element's size but, total size of array is 100
	int result;
	result = funct();
	printf("%d",k->ar);// printf(result);
	return 0;
}
