#include<stdio.h>
#include<stdlib.h>
#include<typeinfo.h>
int main()
{
	int * ptr;
	int i,n;
	//printf("enter n:");
	//scanf("%d",&n);
	n=5;
	for(i=0;i<n;i++)
	{
	  printf("\n enter number[%d] :",i);
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
	for(i=0;i<n;i++)
	{
	  printf("%d ",ptr[i]);
	  n--;
	}
	//printf("%s",typeid(ptr));
	return 0;
	
	
}
