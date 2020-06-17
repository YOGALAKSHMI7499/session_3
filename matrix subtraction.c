#include<stdio.h>



int main()
{
 int a[10][10],b[10][10],s[10][10],i,j,r,c;
printf("enter row & column size:");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("element a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
printf("\n");
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("element b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
printf("\n");
}


for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
s[i][j]=a[i][j]-b[i][j];
printf("%d",s[i][j]);
}
printf("\n");
}
}
