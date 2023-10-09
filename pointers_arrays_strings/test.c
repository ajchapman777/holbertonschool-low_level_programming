#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s = "heilo";
	char *y = "oleh";
	char *n;

	n = strpbrk(s, y);
	printf("%s\n", n);
}
