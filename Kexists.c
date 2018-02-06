#include<stdio.h>
#include<conio.h>
int main()
{
int N,K,i,a[100],count=0;
clrscr();
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
if(a[i]==K)
count++;
}
if(count!=0)
printf("yes");
else
printf("no");
getch();
return 0;
}
