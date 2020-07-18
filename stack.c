#include<stdio.h>
#include<stdlib.h>

int S[20],top=-1,stack;
void insert()
{
if(top<stack-1)
  {
   top++;
   printf("\nEnter the element:");
   scanf("%d",&S[top]);
  }
else
printf("\nstack overflow");
}

void delete()
{
if(top>-1)
 {
  printf("the element deleted is %d\n",S[top]);
  top--;
 }
else
printf("stack underflow\n");
}

void display()
{
int i=0;
if(top==-1)
printf("stack is empty\n");
else
{
printf("The elements are:");
while (i<=top)
{
printf("%d\t",S[i]);
i++;
}
}
}

void main()
{
int choice,p=1;
printf("Enter the stack size:");
scanf("%d",&stack);
while(p)
{
printf("\npress:\n1.Insert \n2.Delete \n3.Display\n");
scanf("%d",&choice);
switch(choice)
{
case 1 : insert();
         break;
case 2 : delete();
         break;
case 3 : display();
         break;
default : printf("\nInvalid input");
}
printf("Press: \n0.To Exit\n1.To Continue\n");
scanf("%d",&p);
}
}
