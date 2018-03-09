#include<stdio.h>
int main() 
{
char string[10], even[10], odd[10], i, j, k,count;
i = j = k = count = 0;
do
    {
    printf("Enter your input string:");
    fgets(string, 10, stdin);
    string[strlen(string) - 1] = '\0';
    printf("Given Input string:%s\n", string);

        while (string[i] != '\0')
        {
            if (i % 2 == 0) {
            odd[j++] = string[i];
            }
            else {
            even[k++] = string[i];
            }
        i++;
        }
    odd[j] = even[k] = '\0';
    printf(" %s %s", odd,even);
    odd[0]=even[0]='\0';
    count++;
    }while(count<2);
return 0;
}
