#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the a base values:");
scanf("%d",&a);
printf("enter the b power values:");
scanf("%d",&b);
while(b!0)
c=c*a;
--b;
printf("%d",c);
getch();
}
