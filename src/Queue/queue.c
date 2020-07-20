#include<stdio.h>
#include<stdlib.h>
int qs,f=0,r=-1,q[20];
void insert()
{
if(r+1<qs)
{
r++;
printf("Enter the element:");
scanf("%d",&q[r]);
}
else
printf("Queue is full\n");
}

void delete()
{
if(f<=r)
{
printf("%d is deleted",q[f]);
f++;
}
else 
printf("No element in the queue\n");
}

void display()
{
int i;
if(f<=r)
{
printf("\nThe elements are:");
for(i=f;i<=r;i++)
printf("%d\t",q[i]);
}
else
printf("No elements in the queue\n");
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
default : printf("\nInvalid input");
}
printf("Press: \n0.To Exit\n1.To Continue\n");
scanf("%d",&p);
}
}

