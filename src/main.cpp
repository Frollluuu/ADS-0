// Copyright 2021 NNTU-CS

#include "alg.cpp" 

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Введите два целых числа для нахождения НОД: ";
    std::cin >> num1 >> num2;

    int result = gcd(num1, num2);

    std::cout << "Наибольший общий делитель (НОД) чисел " << num1 << " и " << num2 << " равен: " << result << std::endl;

    return 0;
}