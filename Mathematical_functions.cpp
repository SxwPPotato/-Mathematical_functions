#include <iostream>
#include "Functions.h"

int main()
{
    setlocale(LC_ALL, "russian");
    int num1, num2, num_operation;
    std::cout <<"Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> num_operation;
    switch (num_operation) {
    case 1: std::cout << num1 << " + " << num2 << " = " << add(num1, num2); break;
    case 2: std::cout << num1 << " - " << num2 << " = " << substraction(num1, num2); break;
    case 3: std::cout << num1 << " * " << num2 << " = " << multiplication(num1, num2); break;
    case 4: std::cout << num1 << " / " << num2 << " = " << division(num1, num2); break;
    case 5: std::cout << num1 << " в степени " << num2 << " = " << exponentiation(num1, num2); break;
    default: std::cout << "Такой операции не существует ";
    }
    std::cout << std::endl;

    return 0;
}

