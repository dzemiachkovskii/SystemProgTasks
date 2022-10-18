#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int arr[10][10];
    int sums[2][10] = { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} };
    int maxCol = INT_MIN, maxRow = INT_MIN, maxColI, maxRowI;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = (rand() % 79) + 7;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::string space = arr[i][j] >= 10 ? " " : "  ";
            std::cout << arr[i][j] << space;

            sums[0][j] += arr[i][j];
            sums[1][i] += arr[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "сумма элементов " << i + 1 << " столбца = " << sums[0][i] << std::endl;

        if (sums[0][i] > maxCol) {
            maxCol = sums[0][i];
            maxColI = i + 1;
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "сумма элементов " << i + 1 << " строки = " << sums[1][i] << std::endl;

        if (sums[1][i] > maxRow) {
            maxRow = sums[1][i];
            maxRowI = i + 1;
        }
    }

    std::cout << std::endl;
    std::cout << "Сумма элементов столбца #" << maxColI << " = " << maxCol << " является максимальной" << std::endl;
    std::cout << "Сумма элементов строки #" << maxRowI << " = " << maxRow << " является максимальной" << std::endl;
}