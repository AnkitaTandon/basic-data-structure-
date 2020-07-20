#include<stdio.h>
#include<string.h>
#include<ctype.h>

int top=-1;
char S[100];

void push(char c)
{
top++;
S[top]=c;
}

char pop()
{
char c;
c=S[top];
top--;
return c;
}


char *strrev(char *str)
{
int i,len;char *t, *p;
if(!str||!*str)
return str;
for(t=str,p=str+strlen(str)-1;p>t;++t,--p)
{
*t^=*p;
*p^=*t;
*t^=*p;
}return str;
}

int prec(char c);

void main()
{
char in[100],op[100],c;
int j=0,i,len;
printf("\nInput the infix expression:");
scanf("%s",in);
len=strlen(in);
for(i=len-1;i>=0;i--)
{
c=in[i];
if(c==')')
push(c);
else if(isalpha(c))
{ op[j]=c;
j++;
}
else if(c=='(')
{
while(S[top]!=')')
{
op[j]=pop();
j++;
}
pop();
}
else
{
while(prec(S[top])>=prec(c))
{
op[j]=pop();
j++;
}
push(c);
}
}
while(top!=-1)
{
op[j]=pop();
j++;
}
op[j]='\0';
puts(strrev(op));
}

int prec(char c)
{
if(c=='+' || c=='-')
return 1;
else if(c=='*' || c=='/')
return 2;
else 
return 0;
}

