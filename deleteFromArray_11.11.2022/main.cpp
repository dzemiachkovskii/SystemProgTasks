#include <iostream>

int* getArr(int size = 10) {
    srand(time(0));
    int* res = new int[size];
    for (int i = 0; i < size; i++)
    {
        res[i] = rand() % 100 + 1;
    }
    return res;
}

int* delFromArr(int* arr, int size, int index) {
    int* res = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        if (i < index) {
            res[i] = arr[i];
        }
        else {
            res[i] = arr[i + 1];
        }
    }
    return res;

}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        std::cout << "|\t" << arr[i] << "\t";
    }
    std::cout << "|\n\n";
}

int main()
{
    auto arr = getArr(6);
    printArr(arr, 6);
    arr = delFromArr(arr, 6, 2);
    printArr(arr, 5);
}

/*
SAMPLE OUTPUT:
|       16      |       3       |       7       |       38      |       39      |       14      |

|       16      |       3       |       38      |       39      |       14      |
*/