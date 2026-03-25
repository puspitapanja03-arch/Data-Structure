#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;
node *front;
node *rear;

void insert(int d)
{
node *newnode;
newnode=(node *)malloc(sizeof(node));
newnode->data=d;
newnode->next=NULL;
if(rear==NULL)
{
rear=newnode;
front=newnode;
return;
}
rear->next=newnode;
rear=newnode;
}

int deletenode()
{
int d;
node *t;
if(front==NULL)
{
printf("\n Empty");
return 0;
}
t=front;
d=front->data;
if(front==rear)
{
front=NULL;
rear=NULL;
}
else
{
front=front->next;
}
free(t);
return d;
}

void list()
{
node *c;
if(front!=NULL)
{
for(c=front;c!=rear;c=c->next)
{
printf("%d\t",c->data);
}
printf("%d\t",c->data);
}
return;
}


void main()
{
int a,d;
front=NULL;
rear=NULL;
do
{
printf("\n 1.insert");
printf("\n 2.list");
printf("\n 3.Delete");
printf("\n 4.Exit");
printf("\n Enter your choice:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\n No. to be inserted:");
scanf("%d",&d);
insert(d);
list();
break;
case 2:
list();
break;
case 3:
d=deletenode();
printf("\n poped ele=%d",d);
list();
break;
}printf("\n 1.insert");
printf("\n 2.list");
printf("\n 3.Delete");
printf("\n 4.Exit");
printf("\n Enter your choice:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\n No. to be inserted");
scanf("%d",&d);
insert(d);
list();
break;
case 2:
list();
break;
case 3:
d=deletenode();
printf("\n poped ele=%d\n",d);
list();
break;
}
}while(a!=4);

}
