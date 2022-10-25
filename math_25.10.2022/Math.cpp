#include "Math.h"

int Math::Sum(int x, int y) {
	return x + y;
}

int Math::Sub(int x, int y) {
	return x - y;
}

int Math::Div(int x, int y) {
	// if (y == 0) throw overflow_error("Divide by zero exception");
	return x / y;
}

int Math::Mul(int x, int y) {
	return x * y;
}

int Math::Mod(int x, int y) {
	return x % y;
}
