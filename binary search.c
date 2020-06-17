#include<stdio.h>

int main()
{
int a[20],n,i,x;
printf("enter the size of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("element a[%d]=",i);
scanf("%d",&a[i]);
}

printf("enter element to search =");
scanf("%d",&x);


int first,mid,last;
first=0;
last=n-1;
int flag=0;
while(first<=last)
  {
mid=(first+last)/2;
if(x==a[mid])
{
    flag=1;
    break;
}
else if(x>a[mid])
first=mid+1;
else
last=mid-1;
}
if(flag==1)
printf("element is present at %d",mid);
else
printf("element not found");

}



