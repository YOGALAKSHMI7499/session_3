#include<stdio.h>
#include<stdlib.h>
int minmax(int a[],int n,int *min,int *max)
{
int i;
*min=a[0];
*max=a[0];
for(i=0;i<n;i++)
{
if(*min>a[i]){
*min=a[i];}
if(*max<a[i]){
*max=a[i];}
}
}


int main()
{
int a[20],i,n,min,max;
printf("how many elements:");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
minmax(a,i,&min,&max);

printf("minimum value is %d\n maximum value is %d",min,max);
}
