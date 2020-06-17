#include<stdio.h>

int main()
{
int a[20],i,n;
int *p=a;
printf("how many elements:");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int s=0;
for(i=0;i<n;i++)
{
s+= *p;
p++;
}
int avg=s/n;
printf("%d %d",s,avg);
}
