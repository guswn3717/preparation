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
		*ptr2 = *ptr1; // 1 2���ؼ� Ʋ�� 1���� 2�� �����ϸ� ������ �ּҰ� �� �ݴ�� 2�� 1�� �����ϸ� a���� ��
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