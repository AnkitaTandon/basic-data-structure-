#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *rlink, *llink;
};

struct node *first=NULL;

void insert_front()
{int ele;
struct node *temp,*p;
p=(struct node*)malloc(6);
printf("Enter the element:");
scanf("%d",&ele);
p->data=ele;
p->rlink=p->llink=NULL;

if(first==NULL)
first=p;

else
{
p->rlink=first;
first->llink=p;
first=p;
}
}

void display()
{
struct node *temp;
if(first!=NULL)
{
printf("The elements are:");
temp=first;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->rlink;
}
}
else
printf("\nNo node exists\n");
}

void delete_front()
{
struct node *temp;
if(first!=NULL)
{
temp=first;
first=first->rlink;
printf("%d is deleted\n",temp->data);
free(temp);
}
else
printf("No node exists\n");
}

void insert_rare()
{int ele;
struct node *p,*temp;
p=(struct node*)malloc(6);
printf("Enter the element:");
scanf("%d",&ele);
p->data=ele;
p->rlink=NULL;
if(first!=NULL)
{
temp=first;
while(temp->rlink!=NULL)
 {temp=temp->rlink;}
temp->rlink=p;
p->llink=temp;
}
else
{p->llink=NULL;
first=p;}
}

void delete_rare()
{
struct node *temp,*pre;
 if(first==NULL)
printf("\nNo node exists\n");
else if(first->rlink!=NULL)
{
 temp=first;
 while(temp->rlink!=NULL)
{ temp=temp->rlink; }

pre=temp->llink;
printf("\n%d is deleted\n",temp->data);
free(temp);
pre->rlink=NULL;
}
else 
{printf("\n%d is deleted\n",first->data);
free(first);
first=NULL;
}

}


void main()
{
int i=1,choice;
while(i)
{
printf("Enter-\n1.Insert front\n2.Insert rare\n3.To display\n4.Delete front\n5.Delete rare\n");
scanf("%d",&choice);
switch(choice)
{
case 1:insert_front();break;
case 3:display();break;
case 4:delete_front();break;
case 2:insert_rare();break;
case 5:delete_rare();break;
default:printf("Invalid Input");
}
printf("\nEnter-\n 1.To Continue\n0.To exit\n");
scanf("%d",&i);
}
}

