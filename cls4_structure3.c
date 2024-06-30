#include<stdio.h>
struct perfect
{
   int arr[100], count, n;
};

struct perfect getcount(struct perfect *);
int main() 
{
    struct perfect perfectno;
    perfectno = getcount(&perfectno);
    printf("The perfect numbers  = %d", perfectno.count);
    printf("\nthe array size =%d",perfectno.n);
    printf("\narray:\n",perfectno.arr);
    return 0;
}

struct perfect getcount(struct perfect *s1) 
{
    int i, j, sum;
    s1->count = 0;
    printf("Enter number of  array elements : ");
    scanf("%d",&s1->n);
    for(i = 0; i <s1->n; i++)
	 {
	 	printf("enter array element[%d]:",i);
        scanf("%d", &s1->arr[i]);
        sum = 0;
        for(j = 1; j <s1->arr[i]; j++) 
		{  
		   if((s1->arr[i] % j) == 0) sum += j;
        }
        if(sum == s1->arr[i]) s1->count++;
    }
   return *s1;
}
