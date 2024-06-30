#include<stdio.h>
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

int temp,len,d,temp1;
len=0;
for(i=0;i<n;i++)
{
  temp= ar[i];
  while(temp) //to find length of given number
  {
    d=temp%10;
	temp=temp/10;
	if(d==temp)
	{
		printf("%d\n",ar[i]);
	}	
  }
  
}
return 0;
}
