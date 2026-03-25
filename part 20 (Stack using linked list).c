/* Stack using linked list */

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;
node *top;
void push(int d)
{
node *newnode;
newnode=(node*)malloc(sizeof(node));
newnode->data=d;
newnode->next=top;
top=newnode;
return;
}
int pop()
{
int x;
node *t;
if(top==NULL)
{
printf("\n Stack is empty");
return 0;
}
t=pop;
x=top->data;
top=top->next;
free(t);
return x;
}
/******************************/
void list()
{
node *c;
printf("\n");
for(c=top;c!=NULL;c=c->next)
{
printf("\n%5d",c->data);
}
}
main()
{
top=NULL;
int n,c,d;
do
{
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.Exit");
printf("\n Enter a choice:");
scanf("%d",&c);
{
case1:
printf("\n data:");
scanf("%d",&d);
push(d);
list();
break;
case2:
d=pop;
printf("\n The poped element is %d",d);
list();
break;
}
}while(c!=3);
}
