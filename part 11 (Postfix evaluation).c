#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int stack[100];
int top=-1;
int evapostfix(char s[]);
void push(int);
int pop();
main()
{
int n;
char s[100];
printf("\n POSTFIX :");
gets(s);
n=evapostfix(s);
printf("\n value=%d",n);
}
/*****************************************/
int evapostfix(char s[100])
{
int i=0,j=0,op1,op2,g;
char x,y,temp[6];
for(i=0;s[i]!='\0';i++)
{
j=0;
while(isdigit(s[i]))
temp[j++]=s[i++];
temp[j]='\0';
if(j!=0)
push(atoi(temp));
else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
{
op1=pop();
op2=pop();
switch(s[i])
{
case '+':
push(op2+op1);
break;
case '-':
push(op2-op1);
break;
case '*':
push(op2*op1);
break;
case '/':
push(op2/op1);
break;
}
}
}
return(pop());
}
/**************************************/
void push(int m)
{
top++;
stack[top]=m;
return;
}
/********************************************/
int pop()
{
int r;
if(top==-1)
{
printf("\n Empty.");
return 0;
}
r=stack[top];
top --;
return(r);
}
/***********************************************/
