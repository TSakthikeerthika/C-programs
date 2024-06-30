#include<stdio.h>
void merge_sort(int ar[]);
int main(){
int n;
printf("enter size of  array: ");
scanf("%d",&n);
int ar[n];
int i;  //array declaration
for(i=0;i<n;i++)
{
	printf("Enter array element: ");
    scanf("%d",&ar[i]); //get inpus for array
}
 merge_sort(ar[n]);
	}

int j=0;
void merge_sort(int ar[]){
	int len = sizeof(ar[])/sizeof(ar[0]);
	int mid= len/2;
	int arr[mid-1];
	int arl[mid-1];
	j ++;
	merge_sort(arr[mid]);
	merge_sort(arl[mid+1]);
	printf("%d",ar[j]);
	
}
void quickSort(int array[], int low, int high) 
{
  if (low < high) {
        // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
        // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}
