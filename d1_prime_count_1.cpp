#include<stdio.h>
int main()
{
	int n; //array size
    printf("enter size of  array: ");
    scanf("%d",&n);
    int ar[n];  //array declaration
    int i;
    for(i=0;i<n;i++)
	{
		printf("Enter array element: ");
    	scanf("%d",&ar[i]); //get inpus for array
    }
    int prime_count;
    prime_count=0;
    for(i=0;i<n;i++)
    {
    	int count;
		count=0;
		int j;
    	for(j=2;j<=ar[i];j++)
    	{
    		if(ar[i] % j ==0)
    		{
    			count+=1;
			}
		}
		if(count==1)
		{
			prime_count+=1;
		}
	}
	
	printf("%d",prime_count);
	return 0;
}
