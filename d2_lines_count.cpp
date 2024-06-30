//count number of lines in given string
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char st[70];
	scanf("%[^!]",st);
	//puts(st);
	int i,len,count;
	len=strlen(st);
	int s;
	for(i=0;i<len;i++)
	{
	 s= st[i];
     if( iscntrl(s))
     {
      if(s!= ' ')
	  {
	  	count+=1;
      }
	 }
    }
    
	printf("%d",count);
	return 0;
}
