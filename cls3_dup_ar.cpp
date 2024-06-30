#include<stdio.h>

int dup_array(int[]);  //funct declaration

int main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	int k;
	
	for(k=0;k<n;k++)
	{ printf("enter number :");
	 scanf("%d",&ar[k]);
	}
	printf("%d",dup_array(ar));
	return 0;
}

int dup_array(int ar[])   //funct implementation
{
	int i,j;
   	int count;
	int len=sizeof(ar)/sizeof(ar[0]);
	for(i=0;i<len;i++)
	{ count=0;
		for(j=i+1;j<len;j++)
		{
			if(ar[i]==ar[j])
			{
				//count=1;
				return 1;
				break;
			}
		}
	
	}
	return -1;
    /*if(count==0)
	{return -1; //unique array
	}
	else
	{return 1; //duplicate array
	}*/
}



