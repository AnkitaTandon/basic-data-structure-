#include<stdio.h>
#include<stdlib.h>

int digit_count(int a);
void main()
{
int num,count;
printf("Enter the number:");
scanf("%d",&num);
if(num>0)
count=digit_count(num);
else if(num==0) 
count=1;
printf("The number of digits in %d is %d",num,count);
}

int digit_count(int a)
{ int count=0;
if(a>0)
{
a=a/10;
count++;
return (count+digit_count(a));
}
else
return count;
}
