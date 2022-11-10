#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int** get2DArr(int size) {
    int** arr = new int* [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }
    return arr;
}

void randomFill2DArray(int** arr, int size, int min = 1, int max = 100) {
    if (min > max) {
        int temp = min; min = max; max = temp; delete(&temp);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = (rand() % (max - min + 1)) + min;
        }
    }
}

void print2DArray(int** arr, int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "|\t" << arr[i][j] << "\t";
        }
        cout << "|\n";
    }
    cout << "\n";
}

void swap2DArrayRows(int** arr, int row1, int row2) {
    int* temp = arr[row1]; arr[row1] = arr[row2]; arr[row2] = temp; delete(&temp);
}

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");

    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    cout << endl;
    int** arr = get2DArr(size);

    randomFill2DArray(arr, size, -10, 10);

    print2DArray(arr, size);

    int row1, row2;
    cout << "Введите столбцы, которые надо поменять местами";
    cin >> row1;
    cin >> row2;
    cout << "\n";

    swap2DArrayRows(arr, row1 - 1, row2 - 1);

    print2DArray(arr, size);

    return 0;
}
