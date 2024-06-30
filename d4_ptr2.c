#include<stdio.h>
#include<stdlib.h>
int main()
{
	int * ptr;
	int i,n;
	n=5;
	for(i=0;i<n;i++)
	{
	  printf("\nenter number:");
	  scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
	  printf("%d ",ptr[i]);
	}
	for(i=n;i>=0;i--)
	{
	  printf("%d ",ptr[i]);
	}
	return 0;
	
	
}
