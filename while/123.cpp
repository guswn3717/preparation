#include <stdio.h>

int main()
{
	int x = 5;
	//do while()문은 일단 한 번 실행후 명제가 
	//거짓이 될 때 까지 식을 반복합니다
	//이를 사용하는 이유는 최소 한 번은 실행해야하는
	//코드를 짤 때 사용합니다
	//간단한 코딩에서는 잘 쓰이지 않습니다
	do 
	{
		printf("%d\n", x);
		x++;
	} while (x < 3);
	

	return 0;
}