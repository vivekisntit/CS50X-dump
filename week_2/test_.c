#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char msg[1000];
    printf("plaintext: ");
    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = '\0';

    char ky[] = "13";
    int key = atoi(ky);
    // printf("%d\n", (key + 10));
    // while(key>25)
    // {
    //     key -= 26;
    //     // printf("%d\n",key);
    // }
    char cpr[1000]="";
    char add[2];
    char f;
    for (int i = 0; i < strlen(msg);i++)
    {
        if (ispunct(msg[i]) || isspace(msg[i]))
            f=msg[i];
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
    printf("%s\n", cpr);
}










// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
//     // char x[100];
//     // printf("plaintext: ");
//     // fgets(x, sizeof(x), stdin);
//     if (argc != 2)
//     {
//         printf("Usage: ./caesar key\n");
//         return 1;
//     }
//     else if (argc == 2)
//     {
//         for (int i = 1; i < argc; i++)
//         {
//             for (int j = 0; j < strlen(argv[i]); j++)
//             {
//                 if (!isdigit(argv[i][j]))
//                     // printf("alpha\n");
//                     return 1;
//                 // printf("%c\n",argv[i][j]);
//             }
//             printf("here");
//             // printf("%c\n",(argv[i])[0]);
//             // if (!isdigit(argv[i]))
//             //     return 1;
//         }
//         // printf("%s\n",argv[1]);
//     }
// }
