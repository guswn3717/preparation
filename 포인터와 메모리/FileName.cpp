#include <stdio.h>

int main()
{
	int a[8] = { 1,2,3,4,5,6,7,8 };
	
	for (int i = 0; i < 8; i++)
	{
		printf("%d", a[i]);
	}
	puts("");

	int b[8];

	int *ptr1 = a;
	int *ptr2 = b+7;
	
	for (int i = 0; i < 8; i++)
	{
		*ptr2 = *ptr1; // 1 2로해서 틀림 1에다 2를 대입하면 포인터 주소가 들어감 반대로 2에 1을 대입하면 a값이 들어감
		ptr1++;
		ptr2--;
	}
	
	for (int i = 0; i < 8; i++)
	{
		printf("%d", b[i]);
	}
	puts("");

	return 0;
}