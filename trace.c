#include<stdio.h>



int main()
{
int a[5][5],i,j;
int r=3,c=3;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
a[i][j]=rand()%100;
printf("element a[%d][%d]=%d\n",i,j,a[i][j]);
}
}
int sum=0;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
sum+=a[i][j];
}
}
printf("%d",sum);
return 0;
}



