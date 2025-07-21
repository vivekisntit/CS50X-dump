#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int cashier(int m);
int main()
{
    char h[100];
    int c;
    int v;
    do
    {
        c = 1;
        printf("Change owed: ");
        fgets(h, sizeof(h), stdin);
        h[strcspn(h, "\n")] = '\0';
        for (int i = 0; i < strlen(h); i++)
        {
            if (!isdigit(h[i]))
            {
                c = 0;
                break;
            }
        }
        if (c)
        {
            v = atoi(h);
            if (v <= 0)
            {
                c = 0;
            }
        }
    } while (!c);
    int x;
    sscanf(h, "%d", &x);
    printf("%d", cashier(x));
}
int cashier(int x)
{
    int n = 0;
    while (x>0)
    {
        if (x>=25)
            x -= 25, n++;
        else if (x>=10)
            x -= 10, n++;
        else if (x >= 5)
            x -= 5, n++;
        else
            x -= 1, n++;
    }
    return n;
}