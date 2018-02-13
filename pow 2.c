#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
 
    if(isPowerOf2(num))
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
     
    return 0;
}
