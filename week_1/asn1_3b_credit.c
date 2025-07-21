#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int valid(char h[]);
void msg(int f, char h[]);
int main()
{
    char h[100];
    int c;
    int v;
    do
    {
        c = 1;
        printf("Number: ");
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
    } while (!c);
    int d = valid(h);
    msg(d, h);
}
int valid(char h[])
{
    // int a = 100;
    int num = 0, sum = 0;
    int f = 0;
    // int m;
    for (int i = strlen(h) - 1; i > -1; i--)
    {
        num = h[i] - '0';
        if (f)
        {
            num*=2;
            if (num > 9)
            {
                // while (num != 0)
                // {
                //     sum += num % 10;
                //     num /= 10;
                // }
                num -= 9;
                // sum = 0;
            }
        }
        sum += num;
        f = !f;
    }
    return (sum % 10 == 0);
}
void msg(int f, char h[])
{
    int m = (h[0] - '0') * 10 + (h[1] - '0');
    if (f)
    {
        int len = strlen(h);
        if ((m == 34 || m == 37) && len == 15)
            printf("AMEX\n");
        else if ((m > 50 && m < 56) && len == 16)
            printf("MASTERCARD\n");
        else if ((m > 39 && m < 50) && (len == 13 || len == 16))
            printf("VISA\n");
        else
            printf("first------INVALID\n");
    }
    else
        printf("second-------INVALID\n");
}


// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #include <stdlib.h>

// int valid(char h[]);
// void msg(int f, char h[]);

// int main()
// {
//     char h[100];
//     int c;

//     do
//     {
//         c = 1;
//         printf("Number: ");
//         fgets(h, sizeof(h), stdin);
//         h[strcspn(h, "\n")] = '\0';

//         for (int i = 0; i < strlen(h); i++)
//         {
//             if (!isdigit(h[i]))
//             {
//                 c = 0;
//                 break;
//             }
//         }
//     } while (!c || h[0] == '0'); // reject non-digits or "0"

//     int d = valid(h);
//     msg(d, h);
//     return 0;
// }

// int valid(char h[])
// {
//     int len = strlen(h);
//     int sum = 0;
//     int alt = 0;

//     // Traverse from right to left
//     for (int i = len - 1; i >= 0; i--)
//     {
//         int digit = h[i] - '0';
//         if (alt)
//         {
//             digit *= 2;
//             if (digit > 9)
//                 digit -= 9;
//         }
//         sum += digit;
//         alt = !alt;
//     }

//     return (sum % 10 == 0);
// }

// void msg(int f, char h[])
// {
//     int len = strlen(h);
//     int start = (h[0] - '0') * 10 + (h[1] - '0');

//     if (f)
//     {
//         if ((start == 34 || start == 37) && len == 15)
//             printf("AMEX\n");
//         else if ((start >= 51 && start <= 55) && len == 16)
//             printf("MASTERCARD\n");
//         else if ((h[0] == '4') && (len == 13 || len == 16))
//             printf("VISA\n");
//         else
//             printf("INVALID\n");
//     }
//     else
//     {
//         printf("INVALID\n");
//     }
// }


// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #include <stdlib.h>
// int valid(char h[]);
// void msg(int f,char h[]);
// int main()
// {
//     char h[100];
//     int c;
//     int v;
//     do
//     {
//         c = 1;
//         printf("Number: ");
//         fgets(h, sizeof(h), stdin);
//         h[strcspn(h, "\n")] = '\0';
//         for (int i = 0; i < strlen(h); i++)
//         {
//             if (!isdigit(h[i]))
//             {
//                 c = 0;
//                 break;
//             }
//         }
//         // if (c)
//         // {
//         //     v = atol(h);
//         //     if (v <= 0)
//         //     {
//         //         c = 0;
//         //     }
//         // }
//     } while (!c);
//     // long int x;
//     // sscanf(h, "%ld", &x);
//     // printf("%ld", x);
//     // for (int i = 0; i < strlen(h); i++)
//     // {
//     //     printf("%d", h[i]);
//     // }
//     int d = valid(h[100]);
//     msg(d, h[100]);
// }
// int valid(char h[])
// {
//     // int b[100];
//     int a = 100;
//     // char h[100] = "4003600000000014";
//     int e = 0, d = 0, num =  0;
//     int sum = 0;
//     int m;
//     for (int i = 0; i <a;i++)
//     {
//         m = h[i] - '0';
//         // v = m-'0';
//         // printf("v= %d\n",m*10);
//         if(i%2==0)
//         {
//             num = m * 2;

//             if (num>9)
//             {
//                 while(num!=0)
//                 {
//                     sum += num % 10;
//                     num /= 10;
//                 }
//                 num = sum;
//                 sum = 0;
//             }
//             e += num;
//         }
//         else
//             d += m;
//     }
//     // printf("final: %d, %d",e,d);
//     if((e+d)%10==0)
//         return 1;
//     else
//         return 0;
// }
// void msg(int f,char h[])
// {
//     int m = (h[0] - '0') * 10 + (h[1] - '0');
//     // printf("%d", m);
//     if (f==1)
//     {
//         if (m == 34 || m == 37)
//             printf("AMEX");
//         else if (m > 50 && m < 56)
//             printf("MasterCard");
//         else if (m > 39 && m < 50)
//             perror("VISA");
//     }
//     else
//         printf("INVALID");
// }
