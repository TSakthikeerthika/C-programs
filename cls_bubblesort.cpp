#include<stdio.h>
int main()
{
	//int n=7;
	int i,j,temp;
	int ar[6];
	
	//get array values
	for(i=0;i<7;i++)
	{
		scanf("%d",&ar[i]);
		printf("%d",ar[i]);
	}
	
	/*
	//sort the array
	for(i=0;i<7;i++)
	{
		for(j= i+1; j<7; j++)
		{
			if(ar[i]> ar[j]) //bubble sort
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	printf("%d",ar[5]);//second max
	printf("%d",ar[1]);// second min
	*/
	return 0;
}
