/* Факториал числа 
* Запроси у пользователя число N и вычисли его факториал (произведение всех положительных целых чисел от 1 до N).
* 
#include <iostream>

int main() {
    setlocale(LC_ALL,"russian");
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;

    int factorial = 1;
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    std::cout << N << "! = " << factorial << std::endl;
    return 0;
}

*////