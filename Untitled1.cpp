#include <stdio.h>
#include<string.h>
int main(){
	int i=32,j=65,k,l,m,n,o,p;
	k=i|35;l=~k;m=i&j;
	n=j^32;o=j<<2;p=i>>5;
	printf("%d %d %d",k,l,m);
	printf("%d %d %d",n,o,p);
	return 0;
}



