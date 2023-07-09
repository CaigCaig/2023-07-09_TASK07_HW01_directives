#include <iostream>
#include <Windows.h>
#include <string>
#include "funcs.h"

#define MODE 1

#ifndef MODE
#error MAIN required!!!
#endif // !MODE

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	while (add()) {};
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

	system("pause");
}