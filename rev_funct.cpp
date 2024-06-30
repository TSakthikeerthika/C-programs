#include <stdio.h>
void swap( int *var1, int *var2 )
{
   int temp ;
   temp = *var1 ;
   *var1 = *var2 ;
   *var2 = temp ;
}
int main( )  {
    int num1 = 35, num2 = 45 ;
    printf("Before swapping: %d, %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping: %d, %d", num1, num2);
    
    int  a[3]={1,2,3};
	printf("\n%d",2[a]);
    return 0;
}




