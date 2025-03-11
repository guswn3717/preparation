#include<stdio.h>

using namespace std;

int main()
{
	//을 사용하여 주석(메모)을 적을수 있다

	//printf("이곳"); 이곳에 출력하고 싶은 말을 써넣으면 출력이 된다
	printf("Hello World!");

	//\n을 출력하면 줄은 한 줄 띄어서 출력한다
	printf("\n");

	// \t를 사용하면 탭을 한것처럼 여러칸을 띄어서 출력할 수 있다
	printf("\t");

	//int □ = △;  □에 글을 넣고 △에 정수를 넣으면 정수형 변수를 지정할 수 있다
	int a = 10;
	
	//float □ = △f;  □에 글을 넣고 △에 유리수를 넣으면 유리수형 변수를 지정할 수 있다
	float b = 10.5f;

	//printf("%d", □); %d를 사용해 정수형 변수를 출력할 수 있다
	printf("%d\n", a);

	//printf("%f", □); %f를 사용해 유리수형 변수를 출력할 수 있다
	printf("%f\n", b);

	//printf("%g", □); %f를 사용해 유리수형 변수를 뒷 소숫점 000...없이 출력할 수 있다
	printf("%g\n", b);

	//scanf_s("%d", %□); 를 하여 변수에 값을 넣을 수 있다
	scanf_s("%d", &a);
	printf("%d\n", a);

	//%f 즉 유리수도 가능하다
	scanf_s("%f", &b);
	printf("%f\n", b);

	//변수를 저장할 때 다른 변수끼리의 계산 값을 넣을수도 있다
	int c = 9;
	int d = 5;
	int e = c * d;

	//printf 안에서도 계산이 가능하다
	//현제 첫번째 %d부터 c, 두번째에는 d, 세번째에는 c * d의 값이 들어있다
	printf("%d * %d = %d\n", c, d, c * d);

	//계산했을때 유리수가 되는걸 출력하는 방법은 이렇다
	printf("%d / %d = %f\n", c, d, c / (float)d);
}