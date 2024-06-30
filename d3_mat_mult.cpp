#include <stdio.h>

void mult_ar(int[4][4],int[4][4]);
int main()
{
	int a_ar[4][4];
	int b_ar[4][4];
	int r,c;
	for (r=0;r<4;r++){
	 for(c=0;c<4;c++){
	 	printf("enter element for a: ");
        scanf("%d",&a_ar[r][c]);                 //mat 1 or A
       	}
	}
	
	for (r=0;r<4;r++){
	 for(c=0;c<4;c++){
	 	printf("enter element for b : ");
        scanf("%d",&b_ar[r][c]);              //mat 2  or  B 
       	}
	}

	//int res[][] =mult_ar(a_ar,b_ar);
	mult_ar(a_ar,b_ar);
	return 0;
		
}



 void mult_ar(int a_ar[4][4],int b_ar[4][4])
 {
 	int mul[4][4];
 	int r,c,k;
	for (r=0;r<4;r++){
	 for(c=0;c<4;c++){
	 	mul[r][c]=0;
	 	for(k=0;k<4;k++){
	 		mul[r][c]+= a_ar[r][k] * b_ar[k][c];
		 }
	 	
	 	
       	}
	}
	printf("After Multiplication : \n");
	for (r=0;r<4;r++){
	 for(c=0;c<4;c++){
      printf("%d ",mul[r][c]);
       	}
    printf("\n");
	}

 }
 
