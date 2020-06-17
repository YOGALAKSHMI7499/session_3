#include<stdio.h>

int main()
{
int a[20],i,n,x;
int *p=a;
printf("enter the size of the element:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("element a[%d]=",i);
scanf("%d",&a[i]);
}
printf("enter element to search:");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(x== *p)
{
printf("element found at index %d",i);
break;
}
p++;
}
if(i==n)
printf("element not found");
}














