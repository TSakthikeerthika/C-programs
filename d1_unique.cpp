#include<stdio.h>
int main()
{	
int n;
printf("enter size of  array: ");
scanf("%d",&n);
int ar[n];  //array declaration

int i,j,count_j;
for(i=0;i<n;i++)
{
	printf("Enter array element: ");
	scanf("%d",&ar[i]); //get inpus for array
}
for (i=0;i<n;i++)
{
	count_j=0;
	for(j=0;j<=n;j++)
	{
	  if(i != j)
	  {
	  	if(ar[i]==ar[j])
		{
		 count_j= count_j+1;
		}
	  }
	}
	if(count_j==0)
	{ 
		printf("\n%d%d",ar[i],i);
	} 	 
}
return 0;
}
