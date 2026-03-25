#include<stdio.h>
#include<conio.h>
typedef struct
{
int r;
int c;
int d;
}sparse;
void add(sparse s1[],sparse s2[],sparse s3[])
{
int i=1,j=1,k=1;
if(s1[0].r==s2[0].r && s1[0].c==s2[0].c)
{
s3[0].r=s1[0].r;
s3[0].c=s1[0].c;
while(i<=s1[0].d && j<=s2[0].d)
{
if(s1[i].r==s2[j].r)
{
if(s1[i].c==s2[j].c)
{
s3[k].r=s1[i].r;
s3[k].c=s1[i].c;
s3[k].d=s1[i].d+s2[i].d;
i++;
j++;
}
else if(s1[i].c<s2[j].c)
{
s3[k]=s1[i];
i++;
}
else
{
s3[k]=s2[j];
j++;
}
}
else if(s1[i].r<s2[j].r)
{
s3[k]=s1[i];
i++;
}
else
{
s3[k]=s2[j];
j++;
}
k++;
}
for(;i<=s1[0].d;i++,k++)
s3[k]=s1[i];
for(;j<=s2[0].d;j++,k++)
s3[k]=s2[j];
s3[0].d=k-1;
}
else
printf("\n Addition not possible");
}
void main()
{
 sparse t[20],h[20],r[20];
create(t);
disp(t);
printf("\n");
create(h);
disp(h);
printf("\n");
mat_disp(h);
add(t,h,r);
disp(r);
printf("\n");
mat_disp(r);
}
