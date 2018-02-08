include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,t,sum=0;
clrscr();
printf("Enter the first value of a.p series");
scanf("%d",&a);
printf("Enter the total numbers in a.p series");
scanf("%d",&c);
printf("Enter the common difference between the numbers");
scanf("%d",&b);
sum=(c*(a*2+(c-1)*b))/2;
t=a+(c-1)*b;
printf("The sum of the a.p series is");
for(i=a;i<=t;i=i+b)
{
if(i!=0)
{
printf("%d+%d",i);
}
else
{
printf("%d=%d",i,sum);
}
}
getch();
}
