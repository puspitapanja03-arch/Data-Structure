/* Merge sort */
#include<stdio.h>
void msort(int x[20],int low,int h);
void merge(int x[20],int low,int mid,int h);
main()
{
int i,a[20],n;
printf("\n How many nos:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",&a[i]);
}
msort(a,0,n-1);
printf("\n");
for(i=0;i<n;i++)
{
printf("%5d",a[i]);
}
}
void msort(int x[20],int low,int h)
{
int mid;
if(low<h)
{
mid=(low+h)/2;
msort(x,low,mid);
msort(x,mid+1,h);
merge(x,low,mid,h);
}
}
void merge(int x[20],int low,int mid,int h)
{
int i,j,k,z[20];
i=low;
j=mid+1;
k=0;
while(i<=mid && j<=h)
{
if(x[i]<x[j])
{
z[k]=x[i];
i++;
}
else
{
z[k]=x[j];
j++;
}
k++;
}
while(i<=mid)
{
z[k]=x[i];
i++;
k++;
}
while(j<=h)
{
z[k]=x[j];
j++;
k++;
}
i=low;
for(j=0;j<k;j++)
{
x[i]=z[j];
i++;
}
}
