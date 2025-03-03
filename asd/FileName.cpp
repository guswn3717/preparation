#include <stdio.h>

int main()
{
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	int* ptr3 = &n1;
	ptr1 = &n2;
	ptr2 = ptr3;

	ptr3 = NULL;

	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}