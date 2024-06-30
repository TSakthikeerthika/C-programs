#include<stdio.h>
#include<string.h>
#include<ctype.h>

int roman_to_int(char[]);   //declaration
int main()
{
char s[100];
scanf("%s",s);
printf("%d result ",roman_to_int(s));
}

int roman_to_int(char[],s)   //implementation
{
int currval = 0;
int prevval = 0;
int res = 0;
int i;
for(int i = strlen(s) - 1; i >= 0;i--)
{
  switch(s.[i])
  { 
    case 'i' :
	 currval = 1;
	 break;


    case 'v' :
	  currval = 5;
	  break;
    
	case 'x' :
	  currval = 10;
	  break;
    
	case 'l' :
	 currval = 50;
	 break;
	 
	case 'c' :
	 currval = 100;
     break;
    
	case 'd' :
	  currval = 500;
	  break;
   
    case 'm' :
       currval = 1000;
       break;
    }
     
	 if(currval < prevval)
    {
       res -= currval;
	}
	 else
    {
      res += currval;
    }

    prevval = currval;


        }


        return res;


    }



