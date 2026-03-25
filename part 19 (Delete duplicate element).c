#include<stdio.h>
#include<stdlib.h>
 struct node
 {
 int data;
 struct node *next;
 };
 typedef struct node node;
 node* insend(node *head)
 {
 node *c,*newnode;
 newnode=(node*)malloc(sizeof(node));
 printf("\n data:");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 if(head==NULL)
 {
 head=newnode;
 return head;
 }
 c=head;
 while(c->next!=NULL)
 {
 c=c->next;
 }
 c->next=newnode;
 return head;
 }
 void list(node *head)
 {
 node *c;
 for(c=head;c!=NULL;c=c->next)
 {
 printf("%5d",c->data);
 }
 }

  node* del(node *head)
 {
 int i,p;
 node *c,*t;
 if (head==NULL)
 {
       printf("\n List is empty");
       return head;
 }
 printf("\n Position:");
 scanf("%d",&p);
 if(p==1)
 {
       t=head;
       head=head->next;
       free(t);
       return head;
 }
 i=0;
 for(c=head;c!=NULL;c=c->next)
 {
       i++;
       if(i==p-1)
       {
             t=c->next;
             c->next=t->next;
             free(t);
             return head;
       }
 }
 printf("\n invalid position");
 return head;
 }
 void sort(node *head)
 {
 node *i,*j;
 int t;
 for(i=head;i->next!=NULL;i=i->next)
 {
 for(j=i->next;j!=NULL;j=j->next)
 {
 if(i->data>j->data)
 {
t=i->data;
i->data=j->data;
j->data=t;
 }
 }
 }
 }
 void duplicatedel(node *head)
 {
 node *c,*d,*p,*t;
 for(c=head;c!=NULL;c=c->next)
 {
 p=c;
 for(d=c->next;d!=NULL;d=d->next)
 {
 if(c->data==d->data)
 {
 t=d;
 p->next=d->next;
 free(t);
 d=p;
 }
 p=d;
 }
 }
 }
 void main()
 {
 node *head=NULL;
 int ch;
 do
 {
 printf("\n 1.ins end");
 printf("\n 2.list");
 printf("\n 3.sorting");
 printf("\n 4.delete duplicate element");
 printf("\n 5.Exit");
 printf("\n Enter choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 head=insend(head);
 list(head);
 break;
 case 2:
 list(head);
 break;
 case 3:
 sort(head);
 list(head);
 break;
 case 4:
 duplicatedel(head);
 list(head);
      break;
 }
 }while(ch!=5);
 }
