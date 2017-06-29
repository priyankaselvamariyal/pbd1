#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,count=0;
clrscr();
puts("enter the string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
count++;
}
printf("%d",count);
getch();
}
