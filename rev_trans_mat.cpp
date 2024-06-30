#include<stdio.h>
//transpose of matrix
int main()
{
	int r,c;
	printf("enter r,c:");
	scanf("%d %d",&r,&c);
	int mat_a[r][c];
	
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element[%d][%d]:",i,j);
			scanf("%d",&mat_a[i][j]);
		}
	}
	
	int trans_mat[c][r];
	printf("transpose:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			trans_mat[i][j]=mat_a[j][i];
			printf("%d  ",trans_mat[i][j]);
		}
		printf("\n");
	}
	
	
	
return 0;
}
