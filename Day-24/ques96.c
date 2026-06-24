//to remove duplicate characters
#include <stdio.h>
#include <string.h>
int main ()
{
    char s[100], s1[100];
    int i, j, k;
    printf("enter a word:");
    if (scanf("%99s", s) != 1) return 0;
    k = 0;
    for (i = 0; s[i] != '\0'; i++) {
        int found = 0;
        for (j = 0; j < i; j++) {
            if (s[j] == s[i]) { found = 1; break; }
        }
        if (!found) s1[k++] = s[i];
    }
    s1[k] = '\0';
    printf("After removing duplicates: %s\n", s1);
    return 0;
}