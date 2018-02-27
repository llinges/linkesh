#include <stdio.h>
#include<string.h>
void main()
{
char ch[100];
int i,k,count=0;
gets(ch);
for(k=0;ch[k]!='\0';++k)
{
printf("enter the value");
}
for(i=0;i<k;i++)
{
	if(isdigit(ch[i]))
	count++;
}
printf("%d",count);
return 0;
}
