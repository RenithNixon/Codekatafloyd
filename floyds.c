#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k=1;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("%d\t",k);
k++;
}
printf("\n");
}
getch();
}
