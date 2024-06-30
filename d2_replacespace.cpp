//convert space as "," in string
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{	
	char st[10];
	printf("Enter input string : ");
	gets(st);
	printf("the string is :");
	puts(st);
	
	int i=0;
	int len= strlen(st);
	for(i=0;i<=len;i++)
	{
		//printf( (st[i]==" ")?(st[i]=",") );
		if(st[i]== ' ')
		{
			st[i]= ',';
		}
	}
	printf("%s",st);
	return 0;
	
}
