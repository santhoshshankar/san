#include<stdio.h>
main()
{
int a,b,c;
printf("enter the a,b values");
scanf("%d%d",&a,&b);
 printf("\nenter the odd no b/w %d and %d\n",a,b);
 for(c=a;c<b;c++)
 {
 	if(c%2==0)
 	{
 	printf("%d\t",c);
 }
 }
	return 0
  }
