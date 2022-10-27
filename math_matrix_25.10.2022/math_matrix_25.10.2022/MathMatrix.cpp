#include <iostream>
#include <vector>
#include "MathMatrix.h"

// MatrixMath
vector<vector<int>> MatrixMath::Sum(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> result;
	auto min_i = a.size() < b.size() ? a : b;
	auto min_j = a[0].size() < b[0].size() ? a : b;

	for (int i = 0; i < min_i.size(); i++)
	{
		vector<int> row;
		for (int j = 0; j < min_j[i].size(); j++)
		{
			row.push_back(a[i][j] + b[i][j]);
		}
		result.push_back(row);
	}

	return result;
}

vector<vector<int>> MatrixMath::Sub(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> result;
	auto min_i = a.size() < b.size() ? a : b;
	auto min_j = a[0].size() < b[0].size() ? a : b;

	for (int i = 0; i < min_i.size(); i++)
	{
		vector<int> row;
		for (int j = 0; j < min_j[i].size() - 1; j++)
		{
			row.push_back(a[i][j] - b[i][j]);
		}
		result.push_back(row);
	}

	return result;
}

vector<vector<int>> MatrixMath::Mul(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> result;
	auto min_i = a.size() < b.size() ? a : b;
	auto min_j = a[0].size() < b[0].size() ? a : b;

	for (int i = 0; i < min_i.size(); i++)
	{
		vector<int> row;
		for (int j = 0; j < min_j[i].size(); j++)
		{
			row.push_back(a[i][j] * b[i][j]);
		}
		result.push_back(row);
	}

	return result;
}

vector<vector<int>> MatrixMath::Div(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> result;
	auto min_i = a.size() < b.size() ? a : b;
	auto min_j = a[0].size() < b[0].size() ? a : b;

	for (int i = 0; i < min_i.size(); i++)
	{
		vector<int> row;
		for (int j = 0; j < min_j[i].size(); j++)
		{
			// try catch should be here
			row.push_back(a[i][j] / b[i][j]);
		}
		result.push_back(row);
	}

	return result;
}

vector<vector<int>> MatrixMath::Mod(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> result;
	auto min_i = a.size() < b.size() ? a : b;
	auto min_j = a[0].size() < b[0].size() ? a : b;

	for (int i = 0; i < min_i.size(); i++)
	{
		vector<int> row;
		for (int j = 0; j < min_j[i].size(); j++)
		{
			// try catch should be here too
			row.push_back(a[i][j] % b[i][j]);
		}
		result.push_back(row);
	}

	return result;
}


// MatrixMisc
void MatrixMisc::Print(vector<vector<int>> arr) {
	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << "| ";
		for (int j = 0; j < arr[i].size(); j++)
		{
			std::string shift = std::abs(arr[i][j]) >= 1000 ? " " : (std::abs(arr[i][j]) >= 100 ? "  " : (std::abs(arr[i][j]) >= 10 ? "   " : "    "));
			if (arr[i][j] < 0) shift.erase(shift.begin(), shift.begin() + 1);
			std::cout << arr[i][j] << shift << "| ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

vector<vector<int>> MatrixMisc::Generate(int rows, int cols) {
	vector<vector<int>> result;
	srand(time(NULL));

	for (int i = 0; i < rows; i++)
	{
		vector<int> row;
		for (int j = 0; j < cols; j++)
		{
			row.push_back(rand() % (rows * cols) + 1);
		}
		result.push_back(row);
	}
	return result;
}
