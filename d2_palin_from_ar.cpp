//find palindrome number in right array
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter array length:");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{ printf("enter number :");
	 scanf("%d",&ar[i]);
	}
	int lb=0;
	int ub= n-1;
	int mid= (lb+ub)/2;
	//int num,rem,rev=0;
	for(i=mid+1;i<n;i++)
	{ int num,rem,rev=0;
	  num=ar[i];
	  while(num)
	  {
	  rem=num%10;
	  rev=(rev*10)+rem;
	  num=num/10;
      }
      if(ar[i]==rev)
      {
      	printf("%d is palindrom  \n ",ar[i]);
	  }
	}	
	return 0;
}
