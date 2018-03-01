
#include <stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
clrscr();
int i=0,j,l1,l2,t;
scanf("%s %s",a,b);
l1=strlen(a);
l2=strlen(b);
t=l1+l2;
for(i=l1;i<t;)
{
for(j=0;j<l2;j++)
{
a[i]=b[j];
i++;
}
}
for(i=0;i<t;i++)
printf("%c",a[i]);
getch
return 0;
}
