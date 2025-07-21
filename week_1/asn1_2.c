#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void mario(int m);
void main()
{
    char h[100];
    int c;
    int v;
    do
    {
        c = 1;
        printf("Height: ");
        fgets(h, sizeof(h), stdin);
        h[strcspn(h, "\n")] = '\0';
        for (int i = 0; i < strlen(h);i++)
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
    }while(!c);
    int x;
    sscanf(h, "%d", &x);
    mario(x);
}
void mario(int x)
{
    int i, j, k;
    for (i = x - 1; i >= 0;i--)
    {
        for (j = 0; i > j;j++)
        {
            printf(" ");
        }
        for (k = x; k > i;k--)
        {
            printf("#");
        }
        printf("\n");
    }
}