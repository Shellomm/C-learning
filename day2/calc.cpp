#include <iostream>

#include <Windows.h>
 // Для компиляции  g++ calc.cpp -o calc -static
int main() {

     SetConsoleCP(65001);
     SetConsoleOutputCP(65001);

    double a = 0.0;
    double b = 92.5;
    double com = 150;

    while (true) {

        std::cout << "Введите кол-во рублей " << std::flush ;
        std::cin >> a ;

        if (a == 0) {

        std::cout << std::endl << "До свидания!" << std::endl;
        break;
        }

        if (a < 0) {

            std::cout << "Ошибка! Введено некорректное число рублей. " ;
            continue;

        }

        else if (a <= com) {

            std::cout << "Ошибка! Внесенной суммы не хватает даже на оплату комиссии. " ;
            continue;

        }
        
         std::cout << "Нынешний курс usd " << b << ". Банк взимает комиссию 150 рублей. ";

         double d = (a - com) / b ;

         std::cout << "Итого " << d << " usd. Чтобы выйти введите 0. " << std::endl;

    }
    return 0;
}