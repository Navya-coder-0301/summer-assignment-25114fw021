//to check string rotation 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[256], s2[256], dbl[512];
	if (scanf("%255s %255s", s1, s2) != 2) return 0;
	if (strlen(s1) != strlen(s2)) {
		printf("Not rotation\n");
		return 0;
	}
	strcpy(dbl, s1);
	strcat(dbl, s1);
	if (strstr(dbl, s2)) printf("Rotation\n");
	else printf("Not rotation\n");
	return 0;
}