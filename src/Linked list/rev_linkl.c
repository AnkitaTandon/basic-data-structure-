#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

struct node *first= NULL;
 
void insert(int n)
{
int ele,i;
struct node *temp, *p;
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
p=(struct node*)malloc(sizeof(struct node));
scanf("%d",&ele);
p->data=ele;

if(first!=NULL)
{
temp=first;
while(temp->link!=NULL)
 {temp=temp->link;}
temp->link=p;
}
else
first=p;
}
}

void reverse()
{
struct node *temp,*curr,*prev=NULL,*nxt;
curr=first;
while(curr!=NULL)
{
nxt=curr->link;
curr->link=prev;
prev=curr;
curr=nxt;
}
first=prev;
temp=first;
printf("\nThe reversed order is:");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}

void main()
{
int n;
printf("\nEnter the number of nodes:");
scanf("%d",&n);
insert(n);
reverse();
}

