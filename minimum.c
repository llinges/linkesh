
#include<stdio.h>
#include<conio.h>
int main()
{
int n,min=0,i,a[10];
clrscr();
min=a[0];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("%d",min);
return 0;
getch();
}
