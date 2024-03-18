#include <iostream>
#define MODE  1

#ifdef MODE

void add(int a, int b) {
	std::cout << "Результат сложения: " << a + b;
}

int main() {

	setlocale(LC_ALL, "Russian");

#if MODE == 0
	std::cout << "Работаю в режиме тренировки";


# elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int num1, num2;
	std::cout << "Введите num1: ";
	std::cin >> num1;
	std::cout << "Введите num2: ";
	std::cin >> num2;

	add(num1, num2);


#else 
	std::cout << "Неизвестный режим. Завершение работы";

#endif
}

#endif






#ifndef MODE
#error "Определите МОDE"
#endif