#include <stdio.h>
#include <stdlib.h>

void read(char str[10], char pat[10], char res[10]);
void replace(char str[10], char pat[10], char res[10]);

void read(char str[10], char pat[10], char res[10])
{
    printf("Enter the main string  : ");
    scanf("%s", str);
    printf("Enter the pattern string  : ");
    scanf("%s", pat);
    printf("Enter the replace string  : ");
    scanf("%s", res);
}

void replace(char str[10], char pat[10], char res[10])
{
    char res[20];
    int c, m, i, j, k;
    while (str[c] != '\0')
    {
        if (str[m] == pat[i])
        {
            i++;
            m++;
            if (pat[i] == '\0')
            {
                
            }
        }
    }
}

int main()
{
    char str[10], pat[10], res[10];
    read(str[10], pat[10], res[10]);
    replace(str[10], pat[10], res[10]);
    return 0;
}