#include<stdio.h>
#include<stdlib.h>
int qs,f=0,r=-1,q[100],count=0;

void insert()
{
if(count!=qs)
{
printf("Enter the element:");
count++;
r=(r+1)%qs;
scanf("%d",&q[r]);
}
else
printf("queue overflow\n");
}

void delete()
{
if(count!=0)
{
count--;
printf("%d is deleted\n",q[f]);
f=(f+1)%qs;
}
else
printf("Queue underflow\n");
}

void display()
{
int key,i;
if(count!=0)
{
key=count;
printf("The elements are:");
for(i=f;key!=0;i=(i+1)%qs,key--)
printf("%d\t",q[i]);
}
else
printf("Queue is empty\n");
}

void main()
{
int p=1,choice;
printf("Enter the queue size:");
scanf("%d",&qs);
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
default : printf("\nInvalid Input");
}
printf("Press: \n0.To Exit\n1.To Continue\n");
scanf("%d",&p);
}
}
