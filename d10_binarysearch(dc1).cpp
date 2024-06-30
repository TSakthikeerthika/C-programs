#include<stdio.h>

static int binarySearch(int arr[], int low, int high, int x) {
		while(low <= high) {
			int mid = (low + high) / 2;
			if(arr[mid] == x) {
				return mid + 1;
			}
			else if(arr[mid] < x) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		return -1;
	}
/*	static int findIndex(int arr[], int x) {
		int low = 0, high = 1;
		while(arr[high] < x) {
			int temp = high + 1;
			high = high + (high - low + 1) * 2;
			low = temp;
		}
		return binarySearch(arr, low, high, x); */
		
		
static int findIndex(int arr[], int key)
{
	int low = 0;
	int high = 1;
	while (arr[high] < key)
	{       
	low = high;
	high = 2 * high;     
}
return binarySearch(arr, low, high, key);
}
		
	int main() {
		int arr[] = {2, 4, 6, 8, 10, 12, 15, 18, 19, 30, 41, 53, 59, 61, 62};
		int x = 62;
		printf("%d",findIndex(arr, x));
	}


