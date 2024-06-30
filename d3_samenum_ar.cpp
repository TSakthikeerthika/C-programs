//to print steps to change all elements same in array
#include<stdio.h>
int main()
{
	int i,j,n,count;
	int ar[n];
	printf("enter number of elements in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the %d element in array:",i+1);
		scanf("%d",&ar[i]);
	}
	count=0;
	for(i=0;i<n;i++){
		int max=ar[i];
		if(max<ar[i]){
			max=ar[i];
		}
		//max=ar[i];
		for(i=0;i<n;i++){
			if(ar[i]!=max){
			int temp=max-ar[i];
			ar[i]+=temp;
			count++;
			}
		}
		
	}
	for(i=0;i<n;i++){
	printf("%d",ar[i]);
     }
     
    printf("\n no.of steps : %d",count);
    return 0;
}
