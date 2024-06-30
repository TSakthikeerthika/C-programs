#include<stdio.h>
union u{
   int ar[6];
   int max,min,size;
};

union u min_max(union u); //u*

//funct defanition
union u min_max(union u val)
{
	//val.size;
	//val.ar;
	printf("enter number of elements in array:");
	scanf("%d",&val.size);  //get array size
	int i,j;

	for (i=0;i<val.size;i++)  //get array elements
	{
		printf("Enter arr[%d] = ", i);
        scanf("%d", &val.ar[i]);
	}
	printf("\n input array is:%d\n",val.ar);
	//sort the array
    int temp;
	for(i=0; i<val.size; i++)
	{
		for(j= i+1; j<val.size; j++)
		{
			if(val.ar[i]> val.ar[j]) //bubble sort
			{
				temp=val.ar[i];
				val.ar[i]=val.ar[j];
				val.ar[j]=temp;
			}
		}
	}
	printf("\n sorted array is:%d\n",val.ar);
	//find max and min
	val.min=val.ar[1];
	val.max=val.ar[val.size-1];
	printf("\nM",val.max);
	printf("\nN",val.min);
	
	return val;
}
int main()
 {
 	union u val;
 	min_max(val);
 	printf("\n2nd max : %d",val.max);
    printf("\n2nd min : %d",val.min);
    return 0;
}
