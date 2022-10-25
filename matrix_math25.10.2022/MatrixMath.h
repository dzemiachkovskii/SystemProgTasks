#pragma once

#include <vector>
using namespace std;

class MatrixMath {
public:
	vector<vector<int>> Sum(vector<vector<int>>, vector<vector<int>>);
	vector<vector<int>> Sub(vector<vector<int>>, vector<vector<int>>);
	vector<vector<int>> Mul(vector<vector<int>>, vector<vector<int>>);
	vector<vector<int>> Div(vector<vector<int>>, vector<vector<int>>);
	vector<vector<int>> Mod(vector<vector<int>>, vector<vector<int>>);
};

class MatrixMisc {
public:
	void Print(vector<vector<int>>);
	vector<vector<int>> Generate(int, int);
};