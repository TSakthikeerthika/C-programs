#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char st[100];
	printf("Enter input string : ");
	gets(st);
	char out_ar[100];
	int max=0;
	
	
	
	int i,len;
	len =strlen(st);
	for(i=0;i<len;i++){
		int cur_len=0;
		char cur_str[len];
		while(st[i]!=' '&& st[i]!='\0'&&st[i]!='\n')
		{
			cur_str[cur_len]=st[i];
			cur_len++;
			i++;
		}
		cur_str[cur_len]='\0';
		if(cur_len>max){
			max=cur_len;
			strcpy(out_ar,cur_str);
		}
		}
		printf("max length word is:%s, %d",out_ar,max);
return 0;		
	}
