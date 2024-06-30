//make string into palintrome
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char st[10];
	printf("Enter input string : ");
	gets(st);
	printf("The string is :");
	puts(st);
	
	int i=0;
	int len= strlen(st);
	char temp[10];
	int j=len-1;
	for(i=0;i<len;i++)
	{
		temp[i] = st[j]; //doing reverse
		j--;
    }
	//puts(temp); //prints the reverse
	
	if(strcmp(st,temp)==0)
	{
		printf("palindrome is : %s",st);
	}
	else
	{
		printf("palindrome is : %s%s",st,temp);
    }

	
	//printf( (strcmp(st,temp)==0) ? ("%s",st) : (strcmp(st,temp)!=0) ? ("%s%s",st,temp) ); 
	return 0;
	
	
}

