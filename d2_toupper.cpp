// print all in uppercase
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char st[20];
	printf("Enter input string : ");
	gets(st);
	printf("the string is :");
	puts(st);
	
	
	int i,len;
	len= strlen(st);
	//printf("length is : %d",len);
	for(i=0;i<len;i++)
	{
		if(st[i]=='a'|| st[i]=='e'|| st[i]=='a'|| st[i]=='i'||st[i]=='o'|| st[i]=='u')
		{st[i]= toupper(st[i]);
		}
	}
	printf("%s",st);
	return 0;
}
