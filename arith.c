#include<stdo.h>
main()
{
int a,b;
char(ch);
scanf("%d%d",&a,&b);
scanf("%c",&ch);
switch(ch);
{
case'+':
printf("%d",a+b);
break;
case'-':
printf("%d",a-b);
break;
case'*':
printf("%d",a*b);
break;
case'/':
printf("%d",a/b);
break;
default:
printf("enter the valid number");
}
return 0;
}
