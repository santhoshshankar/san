nt main()
{
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
       if(c>a[j]&&c<=a[b-1])
       {printf("\n %d %d %d",a[i],a[j],c);
       }}}
    return 0;
}

