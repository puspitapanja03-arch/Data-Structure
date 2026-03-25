#include<stdio.h>
int binarysearch(int x[20],int n,int d)
{
int mid,low,high;
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(x[mid]==d)
return(mid);
else if(d>x[mid])
low=mid+1;
else
high=mid-1;
}
return(-1);
}
int rbinarysearch(int x[20],int low,int high,int d)
{
int mid;
if(low<=high)
{
mid=(low+high)/2;
if(x[mid]==d)
return (mid);
else if(d>x[mid])
return rbinarysearch(x,mid+1,high,d);
else
return rbinarysearch(x,low,mid-1,d);
}
return (-1);
}
main()
{
int a[20],n,f,i,s;
printf("\n How many nos. do you want to enter?");
scanf("%d",&n);
printf("\n Enter the nos:\n");
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",&a[i]);
}
printf("\n Find what?");
scanf("%d",&s);
f=rbinarysearch(a,0,n-1,s);
if(f!=-1)
printf("\n pos=%d",f);
else
printf("\n Not found");
}
