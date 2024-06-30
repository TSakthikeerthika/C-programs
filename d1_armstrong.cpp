#include<stdio.h>
#include<math.h>

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

int temp,len,d,sum,count;
count=0;
for(i=0;i<n;i++)
{
  temp= ar[i];
  len=0;
  sum=0;
  while(temp) //to find length of given number
  {
	temp=temp/10;
	len++;
  }
  
  temp= ar[i];
  while(temp) //to find sqr and sum the sqr values
  {
	d=temp%10;
	sum=sum+pow(d,len);
	temp=temp/10;
  }
  
  if(sum==ar[i])
  { 
    count+=1;
  }
  
}

printf("%d",count);

return 0;
}


