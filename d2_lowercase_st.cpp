//print only lowercase from string

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
	
	
	int i,len;
	len= strlen(st);
	printf("length is : %d",len);
	for(i=0;i<len;i++)
	{
		// printf( islower(st[i]) ? "%d", st[i] );
		if( islower(st[i]) )  // if(1) lower if(0) upper NOT Go inside 
		{
			printf("\n%c",st[i]);
		}
	}
	return 0;
	
}
