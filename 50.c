#include <stdio.h>
#include<conio.h>
void main()
{
int i,n,m;
clrscr();
printf("\nEnter the number : ");
scanf("%d",&n);
m=n;
if(n%2==0)
{
while(n!=1&&n!=1.0)
{
n=n/2;
if((n!=1)&&(n%2!=0))
{
break;	
}
}
if(n==1)
{
printf("\nThe number %d is power of 2.",m);
}
else
{
printf("\nThe number %d is not power of 2.",m);
}
}
else
{
printf("\%d is not the power of 2.",m);
}
return 0;
getch();
}
