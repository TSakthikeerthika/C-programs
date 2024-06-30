#include <stdio.h>
//matrix multiplication
int main()
{
	int r1,c1,r2,c2,r,c;
	printf("enter row, column no. of first array:");
	scanf("%d %d",&r1,&c1);
	int a_ar[r1][c1];
	for (r=0;r<r1;r++){
	 for(c=0;c<c1;c++){
	 	printf("enter element for a[%d][%d]: ",r,c);
        scanf("%d",&a_ar[r][c]);                 //mat 1 or A
       	}
	}
	
	printf("\nenter row, column no. of second array:");
	scanf("%d %d",&r2,&c2);
	
	if(c1!=r2){
		printf("can't multiply.. mat1 row,mat2 col numbers should be same\n");
		exit(0);
	}
	
	int b_ar[r2][c2];
	for (r=0;r<r2;r++){
	 for(c=0;c<c2;c++){
	 	printf("enter element for b[%d][%d] : ",r,c);
        scanf("%d",&b_ar[r][c]);              //mat 2  or  B 
       	}
	}
	
	printf("\narray A:\n");
	for (r=0;r<r1;r++){
	 for(c=0;c<c1;c++){
      printf("%d ",a_ar[r][c]);
       	}
    printf("\n");
	}
	
	printf("\narray B:\n");
	for (r=0;r<r2;r++){
	 for(c=0;c<c2;c++){
      printf("%d ",b_ar[r][c]);
       	}
    printf("\n");
	}
	
	int mul[r1][c2];
 	int k;
	for (r=0;r<r1;r++){
	 for(c=0;c<c2;c++){
	 	mul[r][c]=0;
	 	for(k=0;k<r2;k++){
	 		mul[r][c]+= a_ar[r][k] * b_ar[k][c];
		 }
	 	
       	}
	}
	printf("After Multiplication : \n");
	for (r=0;r<r1;r++){
	 for(c=0;c<c2;c++){
      printf("%d    ",mul[r][c]);
       	}
    printf("\n");
	}

	//int res[][] =mult_ar(a_ar,b_ar);
	//mult_ar(a_ar,b_ar);
	return 0;
		
}




 
