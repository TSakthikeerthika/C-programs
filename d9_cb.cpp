#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void fun1(char *s1, char *s2)  
{ 
     char *tmp;  
     tmp = s1; 
     s1 = s2; 
     s2 = tmp; 
} 


void fun2(char **s1, char **s2)  { 
     char *tmp; 
     tmp = *s1; 
     *s1 = *s2; 
     *s2 = tmp; 
}


int main ()  { 
     char *str1 = "welcome", *str2 = "all"; 
     fun1(str1, str2);     
	 printf("%s %s ", str1, str2); 
     fun2(&str1, &str2);  
	 printf("%s %s ", str1, str2); 
     return 0; }

