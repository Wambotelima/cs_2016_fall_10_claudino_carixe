#include <stdio.h>
#include <string.h>

void main(void)
{
	int i, a[100];
	char b[100];
	char max = a[0];
	gets(b);
	for (i = 0; b[i] != '\0'; i++)
		a[i] = b[i];
	for (i; i >= 0; i--)
	{
		if (a[i]>max)
			max = a[i];
	}
	printf("max code is %i\n", max);
}
