#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

struct node *first= NULL;
 
void insert_front()
{
int ele;
struct node *p;
p=(struct node*)malloc(4);
printf("Enter the element:");
scanf("%d",&ele);
p->data=ele;
p->link=first;
first=p;
}

void delete_front()
{
struct node *temp;
if(first!=NULL)
{
temp=first;
first=first->link;
printf("%d is deleted\n",temp->data);
free(temp);
}
else
printf("No node exists\n");
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
temp=temp->link;
}
}
else
printf("\nNo node exists\n");
}

void add_rare()
{int ele;
struct node *p,*temp;
p=(struct node*)malloc(4);
printf("Enter the element:");
scanf("%d",&ele);
p->data=ele;
p->link=NULL;
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

void delete_rare()
{
struct node *temp,*pre;
if(first->link!=NULL)
{
 temp=first;
 while(temp->link!=NULL)
{
 pre=temp;
 temp=temp->link;
}
printf("\n%d is deleted\n",temp->data);
free(temp);
pre->link=NULL;
}
else if(first->link==NULL)
{
printf("\n%d is deleted\n",first->data);
free(first);
first=NULL;
}
else
printf("No node exists\n");
}

void node_count()
{
int count=0;
struct node *temp;
if(first!=NULL)
{
temp=first;
count++;
if(first->link!=NULL)
while(temp->link!=NULL)
{
temp=temp->link;
count++;
}
}
printf("Number of nodes=%d\n",count);
} 

void delete_spe()
{
struct node *temp,*pre;
int ele,flag=0;
printf("\nEnter the element to be deleted:");
scanf("%d",&ele);
temp=first;
if(first==NULL)
{
printf("\nNo node exists\n");
flag=2;
}
else if(temp->data==ele && temp->link==NULL)
{
flag=1;
free(temp);
first =NULL;
}
else if(first->data==ele && first->link!=NULL)
{
flag=1;
first=first->link;
free(temp);
}
else
while(temp!=NULL)
{
if(temp->data==ele)
{
flag=1;
pre->link=temp->link;
free(temp);
break;
}
else
{
pre=temp;
temp=temp->link;
}
}
if(flag==0)
printf("\nElement not found\n");
else if(flag==1)
printf("%d is been deleted\n",ele);
}

void insert_spe()
{
struct node *temp,*p,*n;
int ele,flag=0,num;
printf("\nEnter the element to be inserted:");
scanf("%d",&ele);
p=(struct node*)malloc(4);
p->data=ele;
if(first==NULL)
{
first=p;
p->link=NULL;
flag=1;
}
else
{
printf("After which number do you to insert %d:",ele);
scanf("%d",&num);
temp=first;
while(temp!=NULL)
{
if(temp->data==num)
{
n=temp->link;
temp->link=p;
p->link=n;
flag=1;
break;
}
else
temp=temp->link;
}
}
if(flag==0)
printf("Invalid input\n");
}

void reverse()
{
struct node *curr,*prev=NULL,*nxt;
curr=first;
while(curr!=NULL)
{
nxt=curr->link;
curr->link=prev;
prev=curr;
curr=nxt;
}
first=prev;
display();
}


void main()
{
int i=0,choice;
while(!i)
{
printf("Enter-\n1.Insert in the front\n2.Insert in the rare end\n3.To display\n4.Node Count\n5.Delete specific\n6.Delete rare end\n7.Delete frontend\n8.Insert after specific\n9.Reverse\n");
scanf("%d",&choice);
switch(choice)
{ 
 case 1 :insert_front();
         break;
 case 2 :add_rare();
         break;
 case 3 :display();
           break;
 case 4 :node_count();
            break;
 case 5 :delete_spe();
           break;
 case 6 :delete_rare();
           break;
 case 7 :delete_front();
          break;
 case 8 :insert_spe();
          break;
 case 9 :reverse();
          break;
 default:printf("Invalid input\n");
}
printf("\nEnter-\n 0.To Continue\n1.To exit\n");
scanf("%d",&i);
}
}
