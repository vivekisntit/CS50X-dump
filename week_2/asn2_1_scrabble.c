#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int counter(char a[]);
int main()
{
    char x[100];
    printf("Player 1: ");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x, "\n")] = '\0';
    char y[100];
    printf("Player 2: ");
    fgets(y, sizeof(y), stdin);
    y[strcspn(y, "\n")] = '\0';
    int p1 = counter(x);
    int p2 = counter(y);
    if(p1>p2)
        printf("Player 1 wins!\n");
    else if (p1 < p2)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");
    // for (int i = 0; i < strlen(x); i++)
    // {
    //     printf("%c-", x[i]);
    // }
    // for (int i = 0; i < strlen(y); i++)
    // {
    //     printf("%c-", y[i]);
    // }
}
int counter(char a[])
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int num[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int sum = 0;
    for (int i = 0; i < strlen(a);i++)
    {
        if (!ispunct(a[i]))
        {
            for (int j = 0; j < strlen(alpha); j++)
            {
                if (tolower(a[i]) == alpha[j])
                    sum += num[j];
            }
        }
    }
    return sum;
}