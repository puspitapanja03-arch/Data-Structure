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
 void revprint(node *head)
 {
      node *c,*x;
      x=NULL;
      while(x!=head)
      {

            c=head;
            while(c->next!=x)
            {
                  c=c->next;
            }
            printf("%5d",c->data);
            x=c;
      }
 }
 node* revlink(node *head)
 {
       node *c1,*c2,*c3;
       c1=head;
       c2=head->next;
       head->next=NULL;
       while(c2!=NULL)
       {
             c3=c2->next;
             c2->next=c1;
             c1=c2;
             c2=c3;
       }
       head=c1;
       return head;
 }
 void main()
 {
 node *head=NULL;
 int ch;
 do
 {
 printf("\n 1.ins end");
 printf("\n 2.list");
 printf("\n 3.delete element");
 printf("\n 4.Reverse print");
 printf("\n 5.Reverse link");
 printf("\n 6.Exit");
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
 head=del(head);
 list(head);
 break;
 case 4:
 revprint(head);
 break;
 case 5:
      head=revlink(head);
      list(head);
      break;
 }
 }while(ch!=6);
 }
