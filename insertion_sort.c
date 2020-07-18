#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,key,*p,j;
printf("\nEnter the array size:");
scanf("%d",&n);
p=(int*)malloc(n*2);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=0;i<n;i++)
{
key=*(p+i);
j=i-1;
while(j>=0 && *(p+j)>key)
{
*(p+i)=*(p+j);
j--;
i--;
}
j++;
*(p+j)=key;
}
printf("The insertion sorted order is:");
for(i=0;i<n;i++)
printf("%d\t",*(p+i));
}
