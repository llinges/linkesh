#include<stdio.h>
int main ()
{
int n, count=0;
clrscr();
scanf("%d",&n);
whlie(n!=0)
n=n/10;
++count;
printf("%d",count);
getch();
}
