#include <iostream>
#include <string>
#include <windows.h>

class Calculator {
private:
	double num1,
		   num2;
public:
	Calculator() {

	}
	
	bool setNum1(double &obj) {
		bool flag = true;
		if (obj != 0) {
			this->num1 = obj;
			flag = true;
			return flag;
		}
		else {
			std::cout << "Неверный ввод!" << std::endl;
			flag = false;
			return flag;
		}
	}
	bool setNum2(double &obj) {
		bool flag = true;
		if (obj != 0) {
			this->num2 = obj;
			flag = true;
			return flag;
		}
		else {
			std::cout << "Неверный ввод!" << std::endl;
			flag = false;
			return flag;
		}
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
	bool flagTemp;
	
	Calculator OneCalc;

	while (flagRing) {

		flagTemp = false;
		while (!flagTemp) {
			std::cout << "Введите num1: ";
			std::cin >> num1;
			flagTemp = OneCalc.setNum1(num1);
		}

		flagTemp = false;
		while (!flagTemp) {
			std::cout << "Введите num2: ";
			std::cin >> num2;
			flagTemp = OneCalc.setNum2(num2);
		}

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