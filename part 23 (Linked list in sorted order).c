#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
typedef struct node node;
void list(node *head)
{
node *c;
for(c=head;c!=NULL;c=c->next)
{
      printf("%5d",c->data);
}
}
node* ins(node *head)
{
      node *c,*newnode,*p;
      newnode=(node *)malloc(sizeof(node));
      printf("\n data:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(head==NULL)
      {
            head=newnode;
            return head;
      }
      if(newnode->data<head->data)
      {
            newnode->next=head;
            head=newnode;
            return head;
      }
      p=head;
      c=head->next;
      while(c!=NULL && newnode->data>c->data)
      {
            p=c;
            c=c->next;
      }
      p->next=newnode;
      newnode->next=c;
      return head;
}
main()
{
int m,n;
node *start=NULL;
do
{
printf("\n 1.insert");
printf("\n 2.list");
printf("\n 3.Exit");
printf("\n Enter your choice:");
scanf("%d",&m);
switch(m)
{
case 1:
start=ins(start);
list(start);
break;
case 2:
list(start);
break;
}
}while(m!=3);
}
