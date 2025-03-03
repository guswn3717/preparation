#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>
#include <iostream>

#define WIDTH 10
#define HEIGHT 20

using namespace std;

int main()
{
	char key;

	while (1)
	{
		system("cls");
		Sleep(1);

		key = _getch();

		key = tolower(key);

		if (key == '8')
		{
			cout << "8" << endl;
		}
		else if (key == '5')
		{
			cout << "5" << endl;
		}
		else if (key == '4')
		{
			cout << "4" << endl;
		}
		else if (key == '6')
		{
			cout << "6" << endl;
		}
		else if (key == 'a')
		{
			cout << "a" << endl;
		}
		else if (key == 's')
		{
			cout << "s" << endl;
		}
		else if (key == 32)
		{
			cout << "space" << endl;
		}
		else if (key == 'c')
		{
			cout << "c" << endl;
		}
		else
		{
			cout << "None" << endl;
		}
	}

	return 0;
}