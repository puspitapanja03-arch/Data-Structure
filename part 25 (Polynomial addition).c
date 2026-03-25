#include<stdio.h>
#include<stdlib.h>
struct node
{
int coef;
int pw;
struct node *next;
};
typedef struct node node;
node* ins(node*f,int c,int p)
{
int i;
node *cur,*x;
cur=(node*)malloc(sizeof(node));
cur->coef=c;
cur->pw=p;
cur->next=NULL;
if(f==NULL)
{
f=cur;
return f;
}
x=f;
while(x->next!=NULL)
{
x=x->next;
}
x->next=cur;
return f;
}
void list(node *f)
{
node *c;
printf("\n eg= ");
for(c=f;c!=NULL;c=c->next)
{
printf("%dx^%d+",c->coef,c->pw);
}
}
node* polyadd(node *f1,node *f2)
{
node *f3=NULL;
while(f1!=NULL && f2!=NULL)
{
if(f1->pw==f2->pw)
{
f3=ins(f3,f1->coef+f2->coef,f1->pw);
f1=f1->next;
f2=f2->next;
}
else if(f1->pw>f2->pw)
{
f3=ins(f3,f1->coef,f1->pw);
f1=f1->next;
}
else
{
f3=ins(f3,f2->coef,f2->pw);
f2=f2->next;
}
}
while(f1!=NULL)
{
f3=ins(f3,f1->coef,f1->pw);
f1=f1->next;
}
while(f2!=NULL)
{
f3=ins(f3,f2->coef,f2->pw);
f2=f2->next;
}
return f3;
}
main()
{
int n1,n2,n3,k,c,p;
node *i,*j;
node *f1=NULL,*f2=NULL,*f3=NULL,*f4;
printf("\n Enter no.of nodes of 1st list:");
scanf("%d",&n1);
for(k=1;k<=n1;k++)
{
printf("\n coef & pow:");
scanf("%d%d",&c,&p);
f1=ins(f1,c,p);
}
printf("\n Enter no. of nodes of 2nd list:");
scanf("%d",&n2);
for(k=1;k<=n2;k++)
{
printf("\n coef & pow:");
scanf("%d%d",&c,&p);
f2=ins(f2,c,p);
}
list(f1);
list(f2);
f3=polyadd(f1,f2);
list(f3);
}
