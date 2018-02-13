#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
clrscr();
int i,count;
scanf("%c",&str);
for(i=0;str[i]!=0;i++)
{
if(str[i]==' ')
count++;
}
printf("%d",&count);
getch();
}
