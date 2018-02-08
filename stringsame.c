#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter the number:");
scanf("%d %d",&n,&i);
while(i!=0&&n!=0)
{
r=n%10;
printf("%d",r);
n=n/10;
i--;
getch();
}
}
