#include <stdio.h>

int funct_ar();
int main()
{
	funct_ar();
	return 0;
		
}


 int funct_ar()
 {
 	int r,c,n;
	printf("enter dimention :");
	scanf("%d",&n);
	
	
	int ar[n][n];
	for (r=0;r<n;r++){
	 for(c=0;c<n;c++){
	 	printf("enter element: ");
        scanf("%d",&ar[r][c]);
       	}
	}
	printf("Original matrix :\n");
	for (r=0;r<n;r++){
	 for(c=0;c<n;c++){
      printf("%d ",ar[r][c]);
       	}
    printf("\n");
	}
	
	printf("Trnspose matrix :\n");
	int temp;
	for(r=0;r<n;r++){
		temp=0;
		for(c=0;c<r;c++){
			temp=ar[c][r];
			ar[c][r]=ar[r][c];
			ar[r][c]=temp;
			//printf("%d ",ar[r][c]);
		}
	}
	
	for (r=0;r<n;r++)
	{
	 for(c=0;c<n;c++)
	 {
      printf("%d ",ar[r][c]);
    }
    printf("\n");
	}
	
return 0;
 }
