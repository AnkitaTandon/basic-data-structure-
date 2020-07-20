#include<stdio.h>
void main()
{
int k=0,col,row,a[20][20],count=0,i,j,S[10][10];
printf("Enter row & column size:");
scanf("%d%d",&row,&col);
printf("Enter the elements of the matrix\n");
for(i=0;i<row;i++)
  for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]==0)
count++;
}
if(count>=row*col/2)
{
printf("It is a sparse matrix\n");
for(i=0;i<row;i++)
  for(j=0;j<col;j++)
if(a[i][j]!=0)
{
S[k+1][0]=i;
S[k+1][1]=j;
S[k+1][2]=a[i][j];
k++;
}
S[0][1]=3;S[0][0]=S[0][2]=k;
printf("The Sparse matrix is :\n");
for(i=0;i<=k;i++)
 { for(j=0;j<3;j++)
printf("%d\t",S[i][j]);
printf("\n");
}
printf("\n The Transpose is :\n");
for(j=0;j<k+1;j++)
{
S[j][0]+=S[j][1];
S[j][1]=S[j][0]-S[j][1];
S[j][0]-=S[j][1];
}
for(i=0;i<k+1;i++)
{
for(j=0;j<3;j++)
printf("%d\t",S[i][j]);
printf("\n");
}
}
else 
printf("It is not a sparse matrix\n");
}
