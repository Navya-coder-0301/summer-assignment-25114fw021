//sort words by length
#include <stdio.h>
#include <string.h>

void sortByLength(char words[][50], int n)
{
    int i, j;
    char temp[50];

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strlen(words[i]) > strlen(words[j]))
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main()
{
    int n, i;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    char words[n][50];

    printf("Enter the words:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }

    sortByLength(words, n);

    printf("\nWords sorted by length:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}