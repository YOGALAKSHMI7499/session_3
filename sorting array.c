#include<stdio.h>

int sort(int n,int *p)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(*(p+j)< *(p+i))
{
temp= *(p+i);
*(p+i)= *(p+j);
*(p+j)=temp;
}
}
}

}



int main()
{
int a[20],n;
int *p=a;
printf("enter the size of the array:");
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
printf("element a[%d]=",i);
scanf("%d",&a[i]);
}
sort(n,a);
for(i=0;i<n;i++)
printf("%d ",*(p+i));

}




