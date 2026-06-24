//find longest word
#include <stdio.h>
#include <string.h>

int main()
{
	char line[512];
	char longest[512] = "";
	printf("Enter a sentence:\n");
	if (!fgets(line, sizeof line, stdin)) return 0;
	line[strcspn(line, "\n")] = '\0';

	int maxlen = 0, curlen = 0;
	int i;
	for (i = 0; ; i++) {
		char c = line[i];
		if (c != '\0' && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))) {
			curlen++;
		} else {
			if (curlen > maxlen) {
				maxlen = curlen;
				int start = i - curlen;
				int j;
				for (j = 0; j < curlen; j++) longest[j] = line[start + j];
				longest[curlen] = '\0';
			}
			curlen = 0;
			if (c == '\0') break;
		}
	}

	if (maxlen == 0) printf("No words found.\n");
	else printf("Longest word: %s\nLength: %d\n", longest, maxlen);

	return 0;
}