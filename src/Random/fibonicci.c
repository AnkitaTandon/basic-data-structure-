#include<stdio.h>
#include<stdlib.h>

void fib(int a,int b, int n)
{
int sum;
sum=a+b;
printf("\n%d",sum);
a=b;b=sum;
n--;
if(n!=0)
fib(a,b,n);
}

void main()
{
int a,b,n;
printf("Enter the series length:");
scanf("%d",&n);
printf("Enter the 1st element of the series:");
scanf("%d",&a);
b=a+1;
printf("The fibonicci's series is-\n%d\n%d",a,b);
fib(a,b,n-2);
}
