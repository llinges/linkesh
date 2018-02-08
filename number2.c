#include<stdio.h>
#include<conio.h>
int main()
{
int n,num;
clrscr();
printf("\nenter the number:");
scanf("%d",&n);
while(n>0)
{
num=n/2;
printf("\n%d",num);
n=n/2;
}
return 0;
getch();
}
