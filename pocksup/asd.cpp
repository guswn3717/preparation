#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a = 10;
	int* an = &a;

	//�״ϱ� *p�� p �ּҿ� ��� ���� �ٲٶ�¸� �� a�� 20���� �ٲٶ� ��

	int* p = &a;
	*p = 20; //a�� ���� �ٲ�

	printf("%d\n", p);

	//an�� �̹� ������, ��Ʈ���� �ȵ� �׷��� &�� �ٿ���

	printf("%d", a);

	//�޸� �ּҸ� �����Ҷ� 16������ �����ϱ⿡ ���� ��½� 16������ 10�� A�� �����
	// *�� ������ ����� ���� ����϶�� ��ȣ

	return 0;
}