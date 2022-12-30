#include <iostream>
#include <string>
#include "Book.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Book B1("Piter Pen");
	Book B2("Pen");
	std::string str;
	int n;
	str = B1 + B2;
	std::cout << "Результат работы оператора + : " << str << "\n";
	str = B1 - B2.GetTitle();
	std::cout << "Результат работы оператора - : " <<str<< "\n";
	std::cout << "Результат работы оператора * : " << B1 * 2 << "\n";
	str = B1 / 2;
	std::cout << "Результат работы оператора / : " << str << "\n";
	std::cout << "Результат работы оператора == : " << (B1 == B2) << "\n";
	std::cout << "Результат работы оператора ! : " << !B1 << "\n";
	B1 += B2;
	std::cout << "Результат работы оператора += : " << B1<< "\n";
	B1 << B2;
	std::cout << "Результат работы оператора << : " << B1  << "\n";
	return 0;
}