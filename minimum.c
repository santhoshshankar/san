#include<stdio.h>
int main()
{
array[50],minimum,size,c,location;
printf("enter the number of elements in array\n");
scanf("%d",&size);
printf("enter the %d integers\n",size);
for ( c = 0 ; c < size ; c++ )
     scanf("%d", &array[c]);
 
    minimum = array[0];
 
    for ( c = 1 ; c < size ; c++ ) 
    {
    if ( array[c] < minimum ) 
   {
   minimum = array[c];
   location = c+1;
   }
    } 
 
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}
