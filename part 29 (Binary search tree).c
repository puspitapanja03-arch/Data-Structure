#include<stdio.h>
#include<stdlib.h>
struct tree
{
int data;
struct tree *left;
struct tree *right;
};
typedef struct tree tree;
void insert (tree *root,int v)
{
tree *cur,*c,*p;
cur=(tree*)malloc(sizeof(tree));
cur->data=v;
cur->left=NULL;
cur->right=NULL;
p=NULL;
c=root;
while(c!=NULL)
{
p=c;
if(cur->data>c->data)
c=c->right;
else
c=c->left;
}
if(cur->data>p->data)
p->right=cur;
else
p->left=cur;
}
void inorder(tree *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%5d",root->data);
inorder(root->right);
}
}
void main()
{
int c,m,v;
tree *root;
root=(tree*)malloc(sizeof(tree));
printf("\n Enter the data:");
scanf("%d",&root->data);
root->left=NULL;
root->right=NULL;
do
{
printf("\n1. Insert:");
printf("\n2.In-order:");
printf("\n3.Exit");
printf("\n");
printf("\nEnter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:
printf("\nvalue=");
scanf("%d",&v);
insert(root,v);
break;
case 2:
inorder(root);
break;
}
}while(c!=3);
}
