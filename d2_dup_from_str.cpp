//print duplicates from string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char st[10];
	printf("enter string :");
	gets(st);
	
	int len = strlen(st);
	int i;
	for(i=0;i<len;i++)
	{
		
		int count=0;
		int j;
		for(j=i+1;j<len;j++)
		{
			if(st[i]==st[j])
			{
				//int k;
				//for(k=i-1;k=0;k--)
				//{
					//if(st[i]==st[k])
					//{ break;
					//}
					//else
					//{ 
					count+=1;
					//}
				
		    }

		}
		if(count>=1)
		{
		 printf("%c , %d \n",st[i],count);
		}
	}
	return 0;
}
