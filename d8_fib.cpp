#include<stdio.h>
int fun_fib(int);
int main()
{
int n,i;
printf(" enter n:");
scanf("%d",&n);
for(i=0;i<n-1;i++){
	int res=fun_fib(i);
    printf("fact of %d is %d\n",n,res);
}
return 0;	
}

int fun_fib(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return (fun_fib(n-1) + fun_fib(n-2));
	}
}

