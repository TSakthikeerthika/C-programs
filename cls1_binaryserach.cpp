/*#include<stdio.h>
//#include<math.h>

int main()
{
	int n;
	printf("enter size of  array: ");
	scanf("%d",&n);
	int ar[n];  //array declaration
	int i;
	for(i=0;i<n;i++)
	{
	  printf("Enter array element: ");
      scanf("%d",&ar[i]); //get inpus for array
    }
    
    	//sort the array
    int j,temp;
	for(i=0;i<n;i++)
	{
		for(j= i+1; j<n; j++)
		{
			if(ar[i]> ar[j]) //bubble sort
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	//printf("%d %d %d",ar[0],ar[1],ar[n-1]);
	
	
	int k,mid,lb,ub;
	lb=0;
	ub=n; //n-1
	mid=(lb+ub)/2;
	printf("enter target: ");
	scanf("%d",&k);
	if(k==mid)
	{
		printf("target matched at mid");
		printf("%d %d",mid,ar[mid]);
	}
	
	for(i=0;i<n;i++)
	{
	
	}
    
    
    

    
    return 0;
}*/

#include <stdio.h>
int binarySearch(int [], int, int, int);
int main()
{
  int c, first, last, n, search, array[100], index;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  printf("Enter value to find\n");
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  index = binarySearch(array, first, last, search);
 
  if (index == -1)
    printf("Not found! %d isn't present in the list.\n", search);
  else
    printf("%d is present at location %d.\n", search, index + 1);
 
  return 0;
}

int binarySearch(int a[], int s, int e, int f) {
  int m;
 
  if (s > e) // Not found
     return -1;
  m = (s + e)/2;
  if (a[m] == f)  // element found
    return m;
  else if (f > a[m])  
    return binarySearch(a, m+1, e, f);
  else
    return binarySearch(a, s, m-1, f);
}
























