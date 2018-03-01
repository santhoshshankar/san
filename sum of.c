#include<stdio.h>
int main()
{
int n, array[100],i,sum=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
sum=sum+array[i];
}
scanf("\n%d",sum);
return 0;
}
