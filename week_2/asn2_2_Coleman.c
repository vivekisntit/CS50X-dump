#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int wr_sl_lt(char para[]);
void judge(float lvl);
int main()
{
    char para[1000];
    printf("Text: ");
    fgets(para, sizeof(para), stdin);
    para[strcspn(para, "\n")] = '\0';
    // wr_sl_lt(para);
    judge(wr_sl_lt(para));
}
int wr_sl_lt(char para[])
{
    float word=1, sent=0, letr=0;
    for (int i = 0; i < strlen(para);i++)
    {
        if (isspace(para[i]))
            word++;
        else if (para[i] == '.' || para[i] == '?' || para[i] == '!')
            sent++;
        else if (isalpha(para[i]))
            letr++;
    }
    // printf("word = %f\n", word);
    // printf("sent = %f\n", sent);
    // printf("letters = %f\n", letr);
    float index = 0.0588*(letr*100/word) - 0.296*(sent*100/word) - 15.8;
    // printf("index %f", round(index));
    // printf("L = %f\n", (letr * 100 / word));
    // printf("S = %f\n", (sent * 100 / word));
    return round(index);
}
void judge(float lvl)
{
    if (lvl<1)
        printf("Before Grade 1\n");
    else if (lvl>15)
        printf("Grade 16+");
    else
        printf("Grade %d", lvl);
}