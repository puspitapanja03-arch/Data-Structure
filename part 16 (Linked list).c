 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 int data;
 struct node *next;/* Self referential structure */
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
 void main()
 {
 node *head=NULL;
 int ch;
 do
 {
 printf("\n 1.ins end");
 printf("\n 2.list");
 printf("\n 3.exit");
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
 }
 }while(ch!=3);
 }
