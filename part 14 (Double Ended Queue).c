/* D QUEUE-DOUBLE ENDED QUEUE(BOTH SIDE INSERT AND DELETE) */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 6
typedef struct
{
int data[6];
int front;
int rear;
}queue;
queue q;
void front_insert(int d)
{
if(q.front==0)
{
printf("\nQueue is full.");
return;
}
if(q.front==-1)
{
q.front=0;
q.rear=0;
}
else
q.front--;
q.data[q.front]=d;
}
void rear_insert(int d)
{
if(q.rear==size-1)
{
printf("\n Queue is full.");
return;
}
if(q.front==-1)
{
q.front=0;
}
q.rear++;
q.data[q.rear]=d;
}
int front_delete()
{
int x;
if(q.front==-1)
{
printf("\nQueue is empty.");
return 0;
}
x=q.data[q.front];
if(q.front==q.rear)
{
q.front=-1;
q.rear=-1;
}
else
{
q.front ++;
}
return x;
}
int rear_delete()
{
int x;
if (q.rear==-1)
{
printf("\n Queue is empty.");
return 0;
}
x=q.data[q.rear];
if(q.front==q.rear)
{
q.front=-1;
q.rear=-1;
}
else
{
q.rear--;
}
return x;
}
void list()
{
int i;
printf("\n front=%d rear=%d \n",q.front,q.rear);
for(i=q.front;i<=q.rear;i++)
{
printf("%5d",q.data[i]);
}
}
main()
{
int d,c,m;
q.front=-1;
q.rear=-1;
do
{
printf("\n 1.front insert.");
printf("\n 2. rear insert.");
printf("\n 3.front delete.");
printf("\n 4.rear delete.");
printf("\n Enter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:
    printf("\n Enter any number:");
    scanf("%d",&d);
    front_insert(d);
    list();
    break;
case 2:
    printf("\n Enter any number:");
    scanf("%d",&d);
    rear_insert(d);
    list();
    break;
case 3:
    m=front_delete();
    printf("\n Deleted element :%d",m);
    list();
    break;
case 4:
    m=rear_delete();
    printf("\n Deleted element :%d",m);
    list();
}
}
while(c!=5);
}
