#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int encrypt(int len, char msg[], char *ky);
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argc == 2)
    {
        for (int j = 0; j < strlen(argv[1]); j++)
        {
            if (!isdigit(argv[1][j]))
                return 1;
        }
        char x[1000];
        printf("plaintext: ");
        fgets(x, sizeof(x), stdin);
        encrypt(strlen(x), x, argv[1]);
    }
}
int encrypt(int len, char msg[], char *ky)
{
    int key = atoi(ky);
    char cpr[1000] = "";
    char add[2];
    char f;
    for (int i = 0; i < len; i++)
    {
        if (ispunct(msg[i]) || isspace(msg[i]) || isdigit(msg[i]))
            f = msg[i];
        else
        {
            int y = msg[i] + key;
            if (islower(msg[i]))
            {
                while (!(y >= 97 && y <= 122))
                {
                    y -= 26;
                }
            }
            else
            {
                while (!(y >= 65 && y <= 90))
                {
                    y -= 26;
                }
            }
            f = y;
        }
        add[0] = f;
        add[1] = '\0';
        strcat(cpr, add);
    }
    printf("ciphertext: %s", cpr);
}
