#include <iostream>

#include <Windows.h>

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double a = 0.0;
    double b = 92.5;
    double com = 150;

    std::cout << "Введите кол-во рублей " << std::flush ;
    std::cin >> a ;

    std::cout << "Нынешний курс usd " << b << ". Банк взимает комиссию 150 рублей. ";

    double d = (a - com) / b ;

    std::cout << "Итого " << d << " usd." << std::endl;

    return 0;
}