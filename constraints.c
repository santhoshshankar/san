#include<stdio.h>
int main()
{
int a[6],t=0,n,i,j;
printf("enter a count:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
for(i=0;i<n;i++)
{
printf("the sorted array is:%d\n",a[i]);
}
