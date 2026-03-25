/*
STACK USING ARRAY
Stack- Linear data structure
LIFO- Last In First Out
*/

#include<stdio.h>
#define size 5
struct stk
{
int data[5];
int top;
};
typedef struct stk STACK;
STACK s;
void push(int d)
{
if (s.top==size-1)
{
printf("\n stack is full");
return;
}
s.top++;
s.data[s.top]=d;
}
int pop()
{
int y;
if(s.top==-1)
{
printf("\n stack is empty");
return(0);
}
y=s.data[s.top];
s.top--;
return(y);
}
/*************************/
void list()
{
int i;
printf("\n top=%d:\n",s.top);
for(i=s.top;i>=0;i--)
printf("%d\n",s.data[i]);
return;
}
main()
{
int a,n,p;
s.top=-1;
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
printf("\n Enter any no:");
scanf("%d",&a);
push(a);
list();
break;
case 2:
p=pop();
printf("\n Poped element:%d",p);
list();
break;
}
}while(n!=3);
}
