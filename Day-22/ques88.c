//to remove spaces from string
#include <stdio.h>

int main()
{
    char s[200];
    char out[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n')
            break;
        if (s[i] != ' ')
            out[j++] = s[i];
    }
    out[j] = '\0';

    printf("String without spaces: %s\n", out);
    return 0;
}
