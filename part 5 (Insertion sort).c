//Insertion sort//
#include<stdio.h>
void insertion(int x[20],int n)
{
int i,j,t;
for(i=2;i<=n;i++)
{
t=x[i];
j=i-1;
while(x[j]>t)
{
x[j+1]=x[j];
j--;
}
x[j+1]=t;
}
}
main()
{
int x[20],n,i;
printf("\n How many no. do you want to enter?");
scanf("%d",&n);
x[0]=-587089;
for(i=1;i<=n;i++)
{
printf("\n x[%d]=",i);
scanf("%d",&x[i]);
}
insertion(x,n);
for(i=1;i<=n;i++)
{
printf("%5d",x[i]);
}
}
