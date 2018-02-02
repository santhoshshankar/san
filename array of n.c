#include<stdio.h>
int main()
{
 int arr[] ={1, 2, 3, 4, 4, 4, 4};
     int n = sizeof(arr)/sizeof(arr[0]);
     int x = 4;
     if (isMajority(arr, n, x))
        printf("%d appears more than %d times in arr[]",
               x, n/2);
     else
        printf("%d does not appear more than %d times in arr[]",
                x, n/2);
 
   return 0;
}
