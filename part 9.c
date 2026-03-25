#include<stdio.h>
#include<conio.h>
#define size 5
struct stk
{
char data[5];
int top;
};
typedef struct stk STACK;
STACK s;
void push(char d)
{
if (s.top==size-1)
{
printf("\n stack is full");
return;
}
s.top++;
s.data[s.top]=d;
return;
}
char pop()
{
char y;
if(s.top==-1)
{
printf("\n stack is empty");
return('\0');
}
y=s.data[s.top];
s.top--;
return(y);
}
main()
{
int i,f=0;
char a[100],v;
s.top=-1;
printf("\n eq:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='(')
push(a[i]);
else if(a[i]==')')
{
v=pop();
if(v=='\0')
{
f=1;
break;
}
}
}
if(s.top==-1 && f==0)
printf("\n Balanced");
else
printf("\n Not balanced");
}
