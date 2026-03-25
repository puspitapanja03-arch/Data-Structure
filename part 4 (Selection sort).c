//selection sort//
#include<stdio.h>
void selection(int x[20],int n)
{
int i,j,m,p;
for(i=0;i<n-1;i++)
{
m=x[i];
p=i;
for(j=i+1;j<n;j++)
{
if(x[j]<m)
{
m=x[j];
p=j;
}
}
x[p]=x[i];
x[i]=m;
}
}
main()
{
int i,n,x[20];
printf("How many no:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n x[%d]=",i);
scanf("%d",&x[i]);
}
selection(x,n);
for(i=0;i<n;i++)
{
printf("%5d",x[i]);
}
}
