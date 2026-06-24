//to compress a string 
#include <stdio.h>
#include <string.h>

int main()
{
	char s[256];
	printf("Enter a string:\n");
	if (!fgets(s, sizeof s, stdin)) return 0;
	s[strcspn(s, "\n")] = '\0';

	int n = strlen(s);
	if (n == 0) { printf("\n"); return 0; }

	int i, count;
	for (i = 0; i < n; ) {
		char c = s[i];
		count = 1;
		while (i + count < n && s[i + count] == c) count++;
		printf("%c%d", c, count);
		i += count;
	}
	printf("\n");
	return 0;
}
