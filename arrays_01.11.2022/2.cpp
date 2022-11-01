#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    const int size = 15;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % sizeof(arr);
    }

    // Выводим исходный массив
    std::cout << "ИСХОДНЫЙ МАССИВ\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << "arr[" << i + 1 << "]\t=" << arr[i] << std::endl;
    }
    std::cout << "\n\n";

    short evens = 0;
    for (int i = 0; i < size; i++)
    {
        int el = arr[i] >= 1 && arr[i] <= 11 ? arr[i] * arr[i] : arr[i];
        std::cout << "arr[" << i + 1 << "]\t=" << el << std::endl;
        if ((el & 1) != 1) evens++;
    }
    std::cout << "Количество чётных элементов: " << evens << std::endl;
}
