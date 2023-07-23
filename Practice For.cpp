#include <iostream>

int main() {

    setlocale(LC_ALL, "russian");
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    std::cout << "Сумма чисел от 1 до " << N << " = " << sum << std::endl;
    return 0;
}
