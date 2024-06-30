#include<stdio.h>
int main()
{
int arr[] = {0, 1, 5, 3, 2, 3, 4, 5, 6, 7, 8, 9};
int n = 12; // count of arr
int i=0, j=n-1, k, temp;
for(k = 0; k< n;k++){
    if(arr[k]%2 == 0){
        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
        i++;
    }
    else {
        temp = arr[j];
        arr[j]=  arr[k];
        arr[k] = temp;
        j--;
        k--;
    }
    if(i > j) break;
}
for(k = 0; k < n;k++){
    printf("\t %d   ", arr[k]);
}
return 0;
}
