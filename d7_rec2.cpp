#include<stdio.h>

int fun(int,int);


int main()


{


   printf("\n %d",fun(2,6));


   return 0;


}


int fun(int a,int b)


{


if(a > 0)


{


if(b > 0)


{


return a + b + fun(a + 1, 0);


}


}


return a + b;


}
