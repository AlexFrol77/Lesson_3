#include <iostream>
#include <string>
#include <windows.h>

class Calculator {
private:
	double num1,
		   num2;
public:
	Calculator(double& obj1, double& obj2) {
			this->num1 = obj1;
			this->num2 = obj2;
	}

	double add() {		
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
};

int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double num1,
		   num2;
	bool flagRing = true;
	bool flagTemp = true;
	while (flagRing) {
		
		while (flagTemp) {
			std::cout << "Введите num1: ";
			std::cin >> num1;
			if (num1 == 0) {
				std::cout << "Неверный ввод!" << std::endl;
				flagTemp = true;
			}
			else {
				flagTemp = false;
			}
		}
		flagTemp = true;
		while (flagTemp) {
			std::cout << "Введите num2: ";
			std::cin >> num2;
			if (num2 == 0) {
				std::cout << "Неверный ввод!" << std::endl;
				flagTemp = true;
			}
			else {
				flagTemp = false;
			}
		}
		flagTemp = true;

		Calculator OneCalc(num1, num2);

		double result;
		result = OneCalc.add();
		std::cout << "num1 + num2 = " << result << std::endl;
		result = OneCalc.multiply();
		std::cout << "num1 * num2 = " << result << std::endl;
		result = OneCalc.subtract_1_2();
		std::cout << "num1 - num2 = " << result << std::endl;
		result = OneCalc.subtract_2_1();
		std::cout << "num2 - num1 = " << result << std::endl;
		result = OneCalc.divide_1_2();
		std::cout << "num1 / num2 = " << result << std::endl;
		result = OneCalc.divide_2_1();
		std::cout << "num2 / num1 = " << result << std::endl;

		flagRing = true;
	}
	return 0;
}