#include<stdio.h>

int main()
{
int a[10][10],i,j,r,c=0;
printf("enter the row & column size:");
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("element a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0){
c=1;
break;
}
else
{
c=0;
break;
}
}
if(c==0)
printf("null matrix");
else
    printf("not a null matrix");
}







