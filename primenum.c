#include<stdio.h>
main()
{
int a,b,i;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
while(a<b)
{
flag=0;
for(i=2;i<=a/2;++i)
{
            if(a % i == 0)
            {
            printf("%d ", a);

        ++a;
    }
    return 0;
    }
    }}
