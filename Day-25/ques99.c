//sort names alphabetically
#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int n)
{
    int i, j;
    char temp[50];

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main()
{
    int n, i;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[n][50];

    printf("Enter the names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    sortNames(names, n);

    printf("\nNames in Alphabetical Order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}