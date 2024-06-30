//make string into matrix of given number of coulmns
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
	for(i=0;i<r;i++){
	  for(j=0;j<c;j++){
	  	if(k<len){
	  		//mat[j][k]=st[i];
	  		mat[i][j]=st[k++];
	  		//printf("%c",mat[j][k]);
		}
		else{
			mat[i][j]=' ';
		}
	  }
	}
	
	printf("Original matrix :\n");
	for(j=0;j<c;j++){
	  	//for(k=0;k<c;k++){
           printf("%c ",mat[i][j]," ");
       	//}
        printf("\n");
	}
	
	
	
return 0;
}
	
