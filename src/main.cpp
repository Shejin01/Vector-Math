#include <iostream>

#include "Vectors/Vectors.h"

int main() {
	Vec2 a(3, 4);
	Vec2 b(1, 6);
	Vec2 c = a + b;

	std::cout << a << '\n' << b << '\n' << c << '\n';
	std::cout << Length(a) << '\n';
	std::cout << LengthSqrd(b) << '\n';
	std::cout << Dot(a, b) << '\n';
	std::cout << (a - b) << '\n';
	std::cout << (a * 5) << '\n';
	std::cout << (b / 2) << '\n';
	std::cout << Normalize(a) << '\n';
	std::cout << Vec2::ZERO << '\n';
	std::cout << Vec2::ONE << '\n';

	return 0;
}