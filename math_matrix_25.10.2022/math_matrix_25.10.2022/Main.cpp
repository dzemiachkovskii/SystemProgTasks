#include <iostream>
#include "MathMatrix.h"

int main()
{
    setlocale(LC_ALL, "rus");
    MatrixMath m;
    MatrixMisc t;

    auto matrix = t.Generate(4, 5);
    auto xirtam = t.Generate(5, 7);

    std::cout << "Исходные массивы:" << std::endl;
    t.Print(matrix);
    t.Print(xirtam);

    std::cout << "Сумма матриц:" << std::endl;
    t.Print(m.Sum(matrix, xirtam));
    std::cout << "Разность матриц:" << std::endl;
    t.Print(m.Sub(matrix, xirtam));
    std::cout << "Произведение матриц:" << std::endl;
    t.Print(m.Mul(matrix, xirtam));
    std::cout << "Частное матриц:" << std::endl;
    t.Print(m.Div(matrix, xirtam));
    std::cout << "Остаток от деления первой матрицы на вторую:" << std::endl;
    t.Print(m.Mod(matrix, xirtam));
}
