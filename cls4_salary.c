#include<stdio.h>
#include<string.h>
//#include<ctype.h>

struct emp
{
int id;
char name[20],dept[20],des[20];
float bp,hra,da,ma,lic,gp,np,alw,de,pf;
}s[3];

int main()
{
	int i;
	for(i=0;i<3;i++)
	{
    printf("\n enter details of emp %d:",i);
	scanf("%d %s %s %s %f",&s[i].id, &s[i].name, &s[i].dept, &s[i].des, &s[i].bp);
	
	s[i].pf = s[i].bp * 0.12;
	s[i].lic = s[i].bp * 0.12;
	
	s[i].hra = s[i].bp * 0.15;
	s[i].da = s[i].bp * 0.15;
	s[i].ma = s[i].bp * 0.15;
	
	s[i].alw = s[i].hra+ s[i].da + s[i].ma;
	s[i].de= s[i].pf + s[i].lic;
	
	s[i].gp= s[i].bp + s[i].alw;
	s[i].np= s[i].gp - s[i].de;
	
	printf("\nemp id : %d",s[i].id);
	printf("\n emp name : %s",s[i].name);
    printf("\n emp dept : %s",s[i].dept);
    printf("\n emp des : %s",s[i].des);
	printf("\n emp bp : %f ",s[i].bp);
	printf("\n emp gp : %f",s[i].gp);
	printf("\n emp np : %f",s[i].np);
    } 
	return 0;
}
