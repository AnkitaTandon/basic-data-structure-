#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int top=-1;
float s[20];
void push(float ele)
{
top++;
s[top]=ele;
}

float pop()
{
float ele;
ele=s[top];
top--;
return(ele);
}

void main()
{
int i,len;
char in[20],ch;
float op1,op2,a;
printf("Enter the postfix expression:");
scanf("%s",in);
len=strlen(in);
for(i=0;i<len;i++)
{
ch=in[i];
if(isalpha(ch))
{
printf("Enter the value of %c :",ch);
scanf("%f",&a);
push(a);
}
else
{
op2=pop();
op1=pop();
switch(ch)
{
case '+':push(op1+op2);
             break;
case '-':push(op1-op2);
          break;
case '*':push(op1*op2);
             break;
case '/':if(op2!=0)
         push(op1/op2);
         else
         {printf("Division can't be performed");
          exit(0);
         }  
          break;
default:printf("Invalid character");
}
}}
printf("\nanswer:%f\n",pop());
}
