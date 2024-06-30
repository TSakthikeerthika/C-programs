#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char st[20];
	printf("enter string :");
	gets(st);
	
	int len = strlen(st);
	int c;
	printf("enter number of columns : ");
	scanf("%d",&c);
	int r=len/c;
	
	char mat[r][c];
	int i,j,k;
	for(i=0;i<len;i++);{
	  for(j=0;j<r;j++){
	  	for(k=0;k<c;k++){
	  		mat[j][k]=st[i];
		}
	  }
	}
	
	printf("Original matrix :\n");
	for(j=0;j<r;j++){
	  	for(k=0;k<c;k++){
           printf("%c ",mat[j][k]);
       	}
        printf("\n");
	}
	
	
	
return 0;
}
	
