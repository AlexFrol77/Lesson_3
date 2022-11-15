#include <iostream>
#include <windows.h>
#include <string>

class Counter {
private:
	int count = 1;
public:
	Counter() {
	
	}
	Counter (int& countStart) {
		this->count = countStart;
	}
	void countSet (int& obj) {
		this->count = obj;
	}
	void countMin() {
		count--;
	}
	void countPlus() {
		count++;
	}
	void countPrint() {
		std::cout << count << std::endl;
	}
};



int main(int argv, char** argc) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Counter Count;

	std::string answer;
	std::string answerTempBig = "Да";
	std::string answerTempSmall = "да";
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	if (answer == answerTempBig || answer == answerTempSmall) {   // Проверка ответа пользователя на введение начального значения
		std::cout << "Введите начальное значение счётчика: ";
		int temp;
		std::cin >> temp;
		Count.countSet(temp);
	}
		
	char request = 'O';
	while (!(request == 'х' || request == 'Х')) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> request;
		switch (request) {
		case '-':
			Count.countMin();
			break;
		case '+':
			Count.countPlus();
			break;
		case '=':
			Count.countPrint();
			break;
		default:
			break;
		}
	}

	std::cout << "До свидания!" << std::endl;

	return 0;
}