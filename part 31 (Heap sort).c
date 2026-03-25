#include<stdio.h>
void shiftdown(int numbers[],int root,int bottom);
void heapsort(int numbers[],int array_size);
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
heapsort(a,n);
for(i=0;i<n;i++)
{
printf("%5d",a[i]);
}
}
void heapsort(int numbers[],int n)
{
int i,temp;
for(i=(n/2)-1;i>=0;i--)
shiftdown(numbers,i,n-1);
for(i=n-1;i>=1;i--)
{
temp=numbers[0];
numbers[0]=numbers[i];
numbers[i]=temp;
shiftdown(numbers,0,i-1);
}
}
void shiftdown(int numbers[],int root, int bottom)
{
int flag,maxchild,temp;
flag=1;
while((root*2+1<=bottom)&&(flag==1))
{
if(root*2+1==bottom)
maxchild=root * 2+1;
else if(numbers[root*2+1]>numbers[root*2+2])
maxchild=root * 2+1;
else
maxchild=root * 2+2;
if(numbers[root]<numbers[maxchild])
{
temp=numbers[root];
numbers[root]=numbers[maxchild];
numbers[maxchild]=temp;
root=maxchild;
}
else
flag=0;
}
}
