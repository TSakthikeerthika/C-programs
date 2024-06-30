#include<stdio.h>
int main()
{
	int n,i,j,count,max;
	printf("enter array length:");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{ printf("enter number :");
	 scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{ 
	  //ar[i]=ar[i]+1;
	  //ar[i+1]=ar[i+1]+1;
	  //count+=1;
	  j=-1*(ar[0]-ar[i]);
	  count+=j;
	  
	}
	printf("%d",count);
	return 0;
	
}
