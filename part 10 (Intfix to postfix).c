#include<stdio.h>
char stack[100],p[100];
int top=-1;
void postfix(char s[]);
void push(char);
char pop();
int chkpre(char p,char c);
int precedence(char c);
main()
{
char s[100];
printf("\n Enter a equation:");
gets(s);
postfix(s);
printf("\n Postfix:");
puts(p);
}
/********************************************/
void postfix(char s[100])
{
int i,j=0,g;
char x,y;
for(i=0;s[i]!='\0';i++)
{
x=s[i];
if((x>=65 && x<=90) || (x>=97 && x<=122))
{
p[j]=x;
j++;
}
else if(x=='(')
{
push(x);
}
else if(x==')')
{
while(1)
{
y=pop();
if(y=='(' || y=='\0')
break;
else
{
p[j]=y;
j++;
}
}
}
else if(x=='+' || x=='-' || x=='*' || x=='/' || x=='^')
{
while(top!=-1)
{
y=pop();
if(chkpre(y,s[i])==1)
{
p[j]=y;
j++;
}
else
{
push(y);
break;
}
}
push(x);
}
/********************************/
printf("\n");
printf("%c\t",s[i]);
for(g=0;g<=top;g++);
printf("\t");
puts(p);
getche();
/******************************/
}/* end of for */
while(top!=-1)
{
y=pop();
p[j++]=y;
}
p[j]='\0';
printf("\t\n");
puts(p);
getche();
return;
}
/**********************************/
void push(char m)
{
top++;
stack[top]=m;
return;
}
/**********************************/
char pop()
{
char r;
if(top<0)
{
printf("\n empty");
return '\0';
}
r=stack[top];
top--;
return(r);
}
/*****************************************/
int chkpre(char p,char c)
{
int a1,a2;
a1=precedence(p);
a2=precedence(c);
if(a1<=a2 && a1!=4 && a2!=4)
    return (1);
else
    return (0);
}
/*******************************************/
int precedence(char c)
{
    if(c=='^')
        return (1);
    if(c=='/' || c=='*')
        return (2);
    if(c=='+' || c=='-')
        return (3);
    if(c=='(' || c==')')
        return (4);
}
