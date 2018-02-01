#include<stdio.h>
main()
{
int n,i;
printf("enter the positive intiger:");
scanf("%d",&n);
for(i=2;i<=/2;i++)
{
if(n%i==0)
{
printf("%d is a prime number",n);
}
else
{
printf("%d is a not prime number",n);
}
}
}
