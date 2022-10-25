#include <iostream>
#include "Math.h"

int main() {
	Math m;

	int x = 20, y = 13;
	std::cout << "x = " << x << ", y = " << y << std::endl << std::endl;

	std::cout << "x + y = " << m.Sum(x, y) << std::endl;
	std::cout << "x - y = " << m.Sub(x, y) << std::endl;
	std::cout << "x / y = " << m.Div(x, y) << std::endl;
	std::cout << "x * y = " << m.Mul(x, y) << std::endl;
	std::cout << "x % y = " << m.Mod(x, y) << std::endl;

	return 0;
}
