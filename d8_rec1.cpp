#include <stdio.h>


 void printUptoN(int n)


{


    if (n > 1)


    printUptoN(n - 1);


    printf("%d ", n);


}


int main()


{


    int n;


    printf("Enter thelimit = ");


    scanf("%d", & n);


    printf("First %d output are : ",
n);


    printUptoN(n);


 


    return 0;


}
