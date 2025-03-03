#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a = 10;
	int* an = &a;

	//그니까 *p가 p 주소에 담긴 값을 바꾸라는말 즉 a를 20으로 바꾸란 말

	int* p = &a;
	*p = 20; //a의 값을 바꿈

	printf("%d\n", p);

	//an은 이미 포인터, 인트값이 안들어감 그래서 &를 붙여줌

	printf("%d", a);

	//메모리 주소를 저장할때 16진수로 저장하기에 위를 출력시 16진수로 10인 A를 출력함
	// *은 변수에 저장된 값을 출력하라는 신호

	return 0;
}