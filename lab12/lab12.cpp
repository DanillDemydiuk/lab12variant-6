#include <iostream>

// Функція для генерації чисел Фібоначчі і збереження їх в масиві
void generateFibonacci(int fib[], int N) {
    fib[0] = 0;
    if (N > 1) fib[1] = 1;

    for (int i = 2; i < N; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

// Функція для знаходження третього парного числа
int findThirdEvenNumber(const int fib[], int N) {
    int evenCount = 0;
    for (int i = 0; i < N; ++i) {
        if (fib[i] % 2 == 0) {
            if (++evenCount == 3) {
                return fib[i];
            }
        }
    }
    return -1; // якщо третього парного числа немає
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int N = 10; // Задаємо значення N
    int fib[100]; // Масив для зберігання чисел Фібоначчі, достатньо великий для наших потреб

    generateFibonacci(fib, N);

    int thirdEven = findThirdEvenNumber(fib, N);
    if (thirdEven != -1) {
        std::cout << "Третє парне число в масиві: " << thirdEven << std::endl;
    }
    else {
        std::cout << "Третього парного числа немає в масиві." << std::endl;
    }

    return 0;
}