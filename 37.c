#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("enter the two number");
scanf("%d\t%d",&num1,&num2);
int temp=num1;
num1=num2;
num2=temp;
printf("after swaping two numbers%d\t%d",num1,num2);
getch();
return 0;
}
