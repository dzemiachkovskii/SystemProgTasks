#include <iostream>
#include <vector>
using namespace std;

class MatrixMath {
public:
  vector<vector<int>> Sum(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> result;
    auto min_i = a.size() < b.size() ? a : b;
    auto min_j = a[0].size() < b[0].size() ? a : b;
    for (int i = 0; i < min_i.size(); i++) {
      vector<int> row;
      for (int j = 0; j < min_j[i].size(); j++) {
        row.push_back(a[i][j] + b[i][j]);
      }
      result.push_back(row);
    }
    return result;
  };

  vector<vector<int>> Sub(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> result;
    auto min_i = a.size() < b.size() ? a : b;
    auto min_j = a[0].size() < b[0].size() ? a : b;
    for (int i = 0; i < min_i.size(); i++) {
      vector<int> row;
      for (int j = 0; j < min_j[i].size() - 1; j++) {
        row.push_back(a[i][j] - b[i][j]);
      }
      result.push_back(row);
    }
    return result;
  };

  vector<vector<int>> Mul(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> result;
    auto min_i = a.size() < b.size() ? a : b;
    auto min_j = a[0].size() < b[0].size() ? a : b;
    for (int i = 0; i < min_i.size(); i++) {
      vector<int> row;
      for (int j = 0; j < min_j[i].size(); j++) {
        row.push_back(a[i][j] * b[i][j]);
      }
      result.push_back(row);
    }
    return result;
  };

  vector<vector<int>> Div(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> result;
    auto min_i = a.size() < b.size() ? a : b;
    auto min_j = a[0].size() < b[0].size() ? a : b;
    for (int i = 0; i < min_i.size(); i++) {
      vector<int> row;
      for (int j = 0; j < min_j[i].size(); j++) {
        // try catch should be here
        row.push_back(a[i][j] / b[i][j]);
      }
      result.push_back(row);
    }
    return result;
  };

  vector<vector<int>> Mod(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> result;
    auto min_i = a.size() < b.size() ? a : b;
    auto min_j = a[0].size() < b[0].size() ? a : b;
    for (int i = 0; i < min_i.size(); i++) {
      vector<int> row;
      for (int j = 0; j < min_j[i].size(); j++) {
        // try catch should be here too
        row.push_back(a[i][j] % b[i][j]);
      }
      result.push_back(row);
    }
    return result;
  };
};

class MatrixMisc {
public:
  void Print(vector<vector<int>> arr) {
    for (int i = 0; i < arr.size(); i++) {
      std::cout << "| ";
      for (int j = 0; j < arr[i].size(); j++) {
        std::string shift =
            std::abs(arr[i][j]) >= 1000
                ? " "
                : (std::abs(arr[i][j]) >= 100
                       ? "  "
                       : (std::abs(arr[i][j]) >= 10 ? "   " : "    "));
        if (arr[i][j] < 0)
          shift.erase(shift.begin(), shift.begin() + 1);
        std::cout << arr[i][j] << shift << "| ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  };
  vector<vector<int>> Generate(int rows, int cols) {
    vector<vector<int>> result;
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
      vector<int> row;
      for (int j = 0; j < cols; j++) {
        row.push_back(rand() % (rows * cols) + 1);
      }
      result.push_back(row);
    }
    return result;
  };
};

int main() {
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
