#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node NODE;
typedef struct
{
NODE *front;
NODE *rear;
}queue;
void insert(int,queue**);
int deletenode(queue**);
void list(queue *);
main()
{
queue *q;
int a,d;
q=(queue*)malloc(sizeof(queue));
q->front=NULL;
q->rear=NULL;
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
printf("\n No. to be inserted");
scanf("%d",&d);
insert(d,&q);
list(q);
break;
case 2:
list(q);
break;
case 3:
d=deletenode(&q);
printf("\n poped ele=%d",d);
list(q);
break;
}
}while(a!=4);
}
/***********************************/
void insert(int d,queue**aq)
{
NODE *newnode;
newnode=(NODE *)malloc(sizeof(NODE));
newnode->data=d;
newnode->next=NULL;
if((*aq)->rear==NULL);
{
(*aq)->rear=newnode;
(*aq)->front=newnode;
return;
}
(*aq)->rear->next=newnode;
(*aq)->rear=newnode;
}
/**************************************/
int deletenode(queue **aq)
{
int d;
NODE *c;
if((*aq)->front==NULL)
{
printf("\nEmpty");
return 0;
}
c=(*aq)->front;
d=(*aq)->front->data;
if((*aq)->front==(*aq)->rear)
{
(*aq)->front=NULL;
(*aq)->rear=NULL;
}
else
{
(*aq)->front=(*aq)->front->next;
}
free(c);
return d;
}
/*****************************/
void list(queue *q)
{
NODE *c;
printf("\n");
if(q->front!=NULL)
{
for(c=q->front;c!=q->rear;c=c->next)
{
printf("%d\t",c->data);
}
printf("%d\t",c->data);
}
return;
}
