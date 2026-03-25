#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;
void list(node *f)
{
node *c;
printf("\n");
for(c=f;c!=NULL;c=c->next)
{
printf("%5d",c->data);
}
}
node* ins_after(node *f)
{
int m;
node *c,*cur;
cur=(node *)malloc(sizeof(node));
printf("\n data:");
scanf("%d",&cur->data);
cur->next=NULL;
if(f==NULL)
{
f=cur;
return f;
}
printf("\n After which no.?");
scanf("%d",&m);
for(c=f;c!=NULL;c=c->next)
{
if(c->data==m)
{
cur->next=c->next;
c->next=cur;
break;
}
}
return f;
}
node* ins_before(node *f)
{
int m;
node *c,*cur,*p;
cur=(node *)malloc(sizeof(node));
printf("\n data:");
scanf("%d",&cur->data);
cur->next=NULL;
if(f==NULL)
{
f=cur;
return f;
}
printf("\n Before which no.?");
scanf("%d",&m);
p=NULL;
for(c=f;c!=NULL;c=c->next)
{
if(c->data==m)
{
cur->next=c;
if(p!=NULL)
p->next=cur;
else
f=cur;
break;
}
p=c;
}
return f;
}
node* del(node *f)
{
int m;
node *c,*p,*t;
if(f==NULL)
{
printf("\n Empty");
return NULL;
}
printf("\n data to be deleted:");
scanf("%d",&m);
if(f->data==m)
{
t=f;
f=f->next;
free(t);
return f;
}
p=f;
for(c=f->next;c!=NULL;c=c->next)
{
if(c->data==m)
{
p->next=c->next;
free(c);
break;
}
p=c;
}
return f;
}
int main()
{
int a;
node *start=NULL;
do
{
printf("\n 1. Insert after");
printf("\n 2. Insert before");
printf("\n 3. list");
printf("\n 4. del");
printf("\n 5. Exit");
printf("\n Enter your choice:");
scanf("%d",&a);
switch(a)
{
case 1:
start=ins_after(start);
list(start);
break;
case 2:
start=ins_before(start);
list(start);
break;
case 3:
list(start);
break;
case 4:
start=del(start);
list(start);
break;
}
}while(a!=5);
}
