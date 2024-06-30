#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,r,c,i;
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
	int b_ar[r2][c2];
	for (r=0;r<r2;r++){
	 for(c=0;c<c2;c++){
	 	printf("enter element for b[%d][%d] : ",r,c);
        scanf("%d",&b_ar[r][c]);              //mat 2  or  B 
       	}
	}
	
	int len=(r1*c1)+(r2*c2);
	int ar[len];
	for(i=0;i<(r1*c1);i++)
	{
	  for (r=0;r<r1;r++){
	     for(c=0;c<c1;c++){
	 	    ar[i]=a_ar[r][c];
			 i++;}
	 	}
    }
    
    for(i=(r1*c1);i<len;i++){
       for (r=0;r<r2;r++)
	   {
	     for(c=0;c<c2;c++)
		 {
	     	ar[i]=b_ar[r][c];
	     	i++;
		 }
	    }
	 }
	 
	printf("the array is:\n ");
	for(i=0;i<len;i++)
	{
		printf("%d ",ar[i]);
	}

	
	
	return 0;
}
