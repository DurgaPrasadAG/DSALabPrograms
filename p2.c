#include <stdio.h>
#include <stdlib.h>

void read(char str[10], char pat[10], char rep[10])
{
    printf("Enter the main string  : ");
    scanf("%s", str);
    printf("Enter the pattern string  : ");
    scanf("%s", pat);
    printf("Enter the replace string  : ");
    scanf("%s", rep);
}

void replace(char str[10], char pat[10], char rep[10]) {
    char res[20];
    int c, m, i, j, k, occ;
    while (str[c] != '\0')
    {
        if (str[m] == pat[i]) {
            i++;
            m++;
            if (pat[i] == '\0') {
                occ++;
                printf("Pattern found at %d location \n", c);
                for (k = 0; rep[k] != '\0'; k++, j++)
                {
                    res[j] = rep[k];
                }
                i = 0;
                c = m;
            }
        } else {
            res[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }
    res[i] = '\0';
    if (occ) {
        printf("Number of occurances : %d \n", occ);
        printf("\nThe resultant String : ");
        puts(res);
    } else {
        printf("Pattern not found");
    }
}

int main()
{
    char str[10], pat[10], rep[10];
    read(str, pat, rep);
    replace(str, pat, rep);
    return 0;
}