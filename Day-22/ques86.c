// to count words in a sentence (simple version for beginners)
#include <stdio.h>

int main(void)
{
	char s[200];
	int i;
	int words = 0;
	int in_word = 0; // 0 = currently outside a word, 1 = inside a word

	printf("Enter a sentence: ");
	if (!fgets(s, sizeof(s), stdin))
		return 0;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
			// space, newline or tab means we are not in a word
			in_word = 0;
		} else {
			// saw a non-space character
			if (in_word == 0) {
				words = words + 1; // starting a new word
				in_word = 1;
			}
		}
	}

	printf("Word count: %d\n", words);
	return 0;
}
