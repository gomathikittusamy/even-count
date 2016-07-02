#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,m;
clrscr();
printf("enter the first number");
scanf("%d",&n);
printf("enter the last number");
scanf("%d",&m);
for(i=n;i<=m;i++)
if(i%2==0)
printf("%d",i);
getch();
}
