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

  node* insbeg(node *head)
 {
 node*newnode;
 newnode=(node*)malloc(sizeof(node));
 printf("\n data:");
 scanf("%d",&newnode->data);
 newnode->next=head;
 head=newnode;
 return head;
 }
 void insbet(node*head)
 {
 int i,p;
 node *c,*newnode;
 newnode=(node*)malloc(sizeof(node));
 printf("\ndata:");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 printf("\nPosition:");
 scanf("%d",&p);
 i=0;
 for(c=head;c!=NULL;c=c->next)
 {
 i++;
 if(i==p-1)
 {
 newnode->next=c->next;
 c->next=newnode;
 return;
 }
 }
 printf("\n invalid position");
 return;
 }


 void main()
 {
 node *head=NULL;
 int ch;
 do
 {
 printf("\n 1.ins end");
 printf("\n 2.list");
 printf("\n 3.ins begin");
 printf("\n 4.ins between");
 printf("\n 5.exit");
 printf("\n Enter choice?");
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
 head=insbeg(head);
 list(head);
 break;
 case 4:
 insbet(head);
 list(head);
 break;

 }
 }while(ch!=5);
 }
