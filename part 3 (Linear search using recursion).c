#include<stdio.h>
int lsearch(int x[20],int n,int d)
{
int i;
for(i=0;i<n;i++)
{
if(x[i]==d)
{
return i;
}
}
return -1;
}
int rlsearch(int x[20],int n,int d,int i)
{
if(i<n)
{
if(x[i]==d)
return i;
else
return rlsearch(x,n,d,i+1);
}
else
return -1;
}
main()
{
int x[20],n,d,i,p;
printf("\n How many nos. do you want to enter? ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n x[%d]=",i);
scanf("%d",&x[i]);
}
printf("\n No. to be searched?");
scanf("%d",&d);
p=rlsearch(x,n,d,0);
if(p!=-1)
printf("\n pos=%d",p);
else
printf("\n Not found");
}
