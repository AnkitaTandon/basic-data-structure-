#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20],i,gap,n,j;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the values of the array:");
for(i=0;i<n;i++)
scanf("%d",a+i);
gap=n-1;

for(i=gap;i>0;i--)
for(j=0;j<n-i;j++)

if(a[j]>a[j+i])
{
a[j]+=a[j+i];
a[j+i]=a[j]-a[j+i];
a[j]-=a[j+i];
}

printf("The sorted array :");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
