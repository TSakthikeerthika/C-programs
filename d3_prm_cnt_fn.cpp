//prime count in array
#include<stdio.h>
int prm_count(int[],int);
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
    
    prm_count(ar,n);
    return 0;
}

int prm_count(int ar[],int n)
{
	int prime_count=0;
	int i;
    for(i=0;i<n;i++)
    {
    	int count=0;
		int j;
    	for(j=2;j<=ar[i];j++) //j<=ar[i] means until that number (ex. if 7, 1 to 7 came)
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
