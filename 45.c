#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("no of digits %d",count);
getch();
}
