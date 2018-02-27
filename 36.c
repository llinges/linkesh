#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i; 
clrscr();
 int count=0;
char s[100];
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
	
if(isdigit(s[i]))
{
count++;
}
}
printf("count: %d ",count);
getch();
return 0;
}
