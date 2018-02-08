#include <stdio.h>
#include <string.h>
main()
{
      char st[50];
      int i,p,x,start;
      clrscr();
      printf("PLEASE INPUT ANY STRING\n");
      gets(st);
 
      p=strlen(st);
 
      printf("THE ADDRESS OF ALL CHARCTER ARE FOLLOWING BELOW\n");
 
      for (i=0; i<p; i++)
{
    printf("%c : %d\t",st[i],i);
    if (i==8||i==16)
    printf("\n\n");
}
 
      printf("\n\nFROM WHERE YOU WANT TO EXTRACT\n");
      scanf("%d",&start);
      printf("\nINPUT HOW MUCH YOU WANT TO EXTRACT FROM THE STRING\n");
      scanf("%d",&x);
 
      printf("\nTHE EXTRACTED STRING :\n");
 
      for (i=start; i<=x; i++)
 
      printf("%c",st[i]);
 
   getch();
}
