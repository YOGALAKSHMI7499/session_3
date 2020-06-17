#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c,a[100][100],i,j;
printf("enter the row and column size:");
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
a[i][j]=0;
printf("a[%d][%d]= %d\n",i,j,a[i][j]);

}
}
return 0;
}
