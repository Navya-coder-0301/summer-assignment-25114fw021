//anagram strings
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int count[26] = {0};
    int i;

    printf("Enter two lowercase words: ");
    if (scanf("%99s %99s", s, t) != 2) return 0;

    if (strlen(s) != strlen(t)) {
        printf("Not anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) count[s[i] - 'a']++;
    for (i = 0; t[i] != '\0'; i++) count[t[i] - 'a']--;

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not anagram\n");
            return 0;
        }
    }

    printf("Anagram strings\n");
    return 0;
}