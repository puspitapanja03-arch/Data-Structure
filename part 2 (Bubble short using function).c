#include<stdio.h>
void bubble(int x[20],int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(x[j]>x[j+1])
{
t=x[j];
x[j]=x[j+1];
x[j+1]=t;
}
}
}
}
main()
{
int n,i,a[20];
printf("\n How many no?");
scanf("%d",&n);
printf("\n Enter nos:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubble(a,n);
for(i=0;i<n;i++)
{
printf("%5d",a[i]);
}
}
