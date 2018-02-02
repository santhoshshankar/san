#include<stdio.h>
int main()
{
int a[7],i,j,n,sum=0;
printf("enter a count:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the median element is:%d\n",sum/n);
}
