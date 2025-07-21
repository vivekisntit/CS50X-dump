#include <stdio.h>
void main()
{
    int n=1;
    do
    {
        scanf("%d", &n);
    } 
    while (n>0 && n<10);
    // for (; n > 0 && n < 10;)
    // {
    //     printf("Enter n:");
    //     scanf("%d", &n);
    // }
}