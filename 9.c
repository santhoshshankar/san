#include <stdio.h>
int main()
    int a[10],b,c,i,j;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
      scanf("%d",&a[i]);  
    }
    for(i=0;i<b;i++)
   { 
       for(j=i+1;j<b;j++)
       {
           c=a[i]+a[j];
       if(c==0)
       {printf("\n %d %d",a[i],a[j]);
       }}}
    return 0;
}
