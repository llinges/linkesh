#include <stdio.h>
#include<conio.h>
void main() 
{
int n,temp,sum=0;
scanf("%d",&n);
while(n>0)
{
temp=n%10;
printf("%d ",temp);
n=n/10;
}
getch();
}
