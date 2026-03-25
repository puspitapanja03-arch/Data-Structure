#include<stdio.h>
#include<conio.h>
typedef struct
{
int r;
int c;
int d;
}sparse;
void create(sparse s[20])
{
int i,r,c,n;
printf("\n row & col & data:");
scanf("%d%d%d",&r,&c,&n);
s[0].r=r;
s[0].c=c;
s[0].d=n;
for(i=1;i<=s[0].d;i++)
{
printf("\n row & col & data:");
scanf("%d %d %d",&s[i].r,&s[i].c,&s[i].d);
}
}
void disp(sparse s[20])
{
int i;
for(i=0;i<=s[0].d;i++)
{
printf("\n %d %d %d",s[i].r,s[i].c,s[i].d);
}
}
void mat_disp(sparse s[20])
{
int i,j,k=1;
for(i=0;i<s[0].r;i++)
{
for(j=0;j<s[0].c;j++)
{
if(s[k].r==i && s[k].c==j)
{
printf("%5d",s[k].d);
k++;
}
else
{
printf("%5d",0);
}
}
printf("\n");
}
}
void trans(sparse s[20],sparse p[20])
{
int i,j;
sparse w;
for(i=0;i<=s[0].d;i++)
{
p[i].r=s[i].c;
p[i].c=s[i].r;
p[i].d=s[i].d;
}
for(i=1;i<=p[0].d-1;i++)
{
for(j=1;j<=p[0].d-i;j++)
{
if(p[j].r>p[j+1].r)
{
w=p[j];
p[j]=p[j+1];
p[j+1]=w;
}
}
}
}
main()
{
sparse t[20],h[20],r[20];
create(t);
disp(t);
printf("\n");
mat_disp(t);
printf("\n");
trans(t,h);
disp(h);
printf("\n");
mat_disp(h);

}
