#include<stdio.h>
#include<conio.h>
void main()
{
int f=0,s=1,n,i,temp;
clrscr();
printf("FIBONACCI SERIES....");
scanf("%d",&n);
printf("%d%d",f,s);
for(i=2;i<=n;i++)
{
temp=f+s;
f=f+s;
s=s+temp;
printf("%d",temp);
getch();
}
}
