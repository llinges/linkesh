#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,count=0;
char para[100];
printf("\n Enter a paragraph");
while(i!='\0')
{
scanf("%s",&para[i]);
i++;
}
while(i!='\0')
{
if(para[i]=='.')
{
++count;
}
}
printf("no.of.line: %d",count);
}
