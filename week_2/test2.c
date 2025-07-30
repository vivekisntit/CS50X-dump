#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // int y = x+13;
    // while (!(y>=97 && y<=122))
    // {
    //     y=y-26;
    // }
    // char f = y;
    // printf("%c", f);

    // int x = 't';
    // char x = 'ü';
    int y = 't' + 13;
    while (!(y >= 97 && y <= 122))
    {
        y = y - 26;
        // printf("here=%d", y);
    }
    char f = y;
    printf("%c", f);
}