#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s = "heilo";
	char *y = "oleh";
	unsigned int n;

	n = strspn(s, y);
	printf("%d\n", n);
}
