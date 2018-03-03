#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0,res;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{ 
printf("\t %d",i);
sum=sum+i;
res=sum/n;
}
printf("\n %d",res);
getch();
}
