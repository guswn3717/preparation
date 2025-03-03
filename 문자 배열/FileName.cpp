#include <stdio.h>

int main()
{
	char good[] = "Good";

	for (int i = 0; i < 4; i++)
	{
		printf("%c\n", good[i]);
	}

	printf("%s\n", good);

	return 0;
}