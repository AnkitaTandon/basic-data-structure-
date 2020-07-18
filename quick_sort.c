#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{*a+=*b;
*b=*a-*b;
*a-=*b;
}
int partition(int a[],int start,int end)
{
	int pivot,i,j,tmp;
	pivot=a[end];
	i=start-1;
	
	for(j=start;j<end;j++)
		if(a[j]<=pivot)
		{ int tmp;
		i++;
	swap(&a[j],&a[i]);
		/*tmp= a[i];
		a[i]=a[j];
		a[j]=tmp;	
		tmp= a[i+1];
		a[i+1]=a[j];
		a[j]=tmp;	
	*/
	}
	swap(&a[i+1],&a[j]);
	
	return (i+1);
}

void qs(int a[],int start,int end)
{
	int q;
	if(start<end)
	{
		q=partition(a,start,end);
		qs(a,start,q-1);
		qs(a,q+1,end);
	}
}

void main()
{
	int n,a[100],i;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the values of the array:");
	
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	qs(a,0,n-1);
	printf("The sorted array is:");
	
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
