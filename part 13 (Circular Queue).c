#include<stdio.h>
#define size 5
struct queue
{
int data[5];
int front;
int rear;
};
typedef struct queue queue;
queue s;
void push(int d)
{
if(s.front==(s.rear+1)%size)
{
printf("\n queue is full");
return;
}
if(s.front==-1)
{
s.front=0;
}
s.rear=(s.rear+1)%size;
s.data[s.rear]=d;
return;
}
int pop()
{
int m;
if(s.front==-1)
{
printf("\n queue is empty");
return(0);
}
m=s.data[s.front];
if(s.front==s.rear)
{
s.front=-1;
s.rear=-1;
}
else
{
s.front=(s.front+1)%size;
}
return(m);
}
/*******************************************/
void list()
{
int i;
if(s.front!=-1)
{
printf("\n front=%d rear=%d:\n",s.front,s.rear);
for(i=s.front;i!=s.rear;i=(i+1)%size)
{
printf("%d\n",s.data[i]);
}
printf("%d\n",s.data[i]);
}
return;
}
main()
{
int a,n,p;
s.front=-1;
s.rear=-1;
do
{
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.Exit");
printf("\n Enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Enter any no:");
scanf("%d",&a);
push(a);
list();
break;
case 2:
p=pop();
printf("\n Popped element:%d",p);
list();
break;
}
}
while(n!=3);
}
