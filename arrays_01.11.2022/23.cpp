#include <iostream>

float getFloat(float lowerBound = -0.5, float upperBound = 0.5) {
    if (lowerBound == upperBound) upperBound += 0.1; // Защита от попытки деления на ноль

    if (lowerBound > upperBound) { // Меняем местами lowerBound и upperBound, если они неправильно переданы в функцию
        float tmp = lowerBound;
        lowerBound = upperBound;
        upperBound = tmp;
    }
    int min = lowerBound * 10,
        max = upperBound * 10;
    int size = max - min; // Вычисляем длину промежутка от минимального значения до максимального
    int random = rand() % size; // Получаем значение >= 0, меньшее, чем длина промежутка
    random += min; /* Прибавляем минимальное значение, тем самым "сдвигая" число по числовой
                        оси, чтобы оно соответствовало заданному промежутку (x >= min, x < max) */
    float result = (float)random / 10; // Делим число на 10, чтобы оно удовлетворяло условию result >= lowerBound && result < upperBound
    return result;
}

float cube(float x) {
    x *= x * x;
    int y = (x * 10);
    float res = (float)y / 10;
    return res;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    const int size = 15;
        float arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = getFloat(-2.5, 1.7);
    }

    short zeros = 0;
    for (int i = 0; i < size; i++) {
        float el = arr[i] >= -1 && arr[i] <= 1 ? cube(arr[i]) : arr[i];
        std::cout << "arr[" << i + 1 << "]\t= " << el << std::endl;
        if (el == 0) {
            zeros++;
        }
    }
    std::cout << "Количество равных нулю элементов: " << zeros << std::endl;
}
