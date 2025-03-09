#include <iostream>

#include "Vectors/Vectors.h"

void TestVec2() {
	Vec2 a(3, 4);
	Vec2 b(1, 6);
	Vec2 c = a + b;

	std::cout << "Vec2:\n";
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

	a += Vec2::ONE;
	std::cout << a << '\n';
	a -= 2.0*Vec2::ONE;
	std::cout << a << '\n';
	a *= 4.0;
	std::cout << a << '\n';
	a /= 2.0;
	std::cout << a << '\n';
	std::cout << '\n';
}

void TestVec3() {
	Vec3 a(2, 3, 6);
	Vec3 b(1, 6, 4);
	Vec3 c = a + b;

	std::cout << "Vec3:\n";
	std::cout << a << '\n' << b << '\n' << c << '\n';
	std::cout << Length(a) << '\n';
	std::cout << LengthSqrd(b) << '\n';
	std::cout << Dot(a, b) << '\n';
	std::cout << Cross(a, b) << '\n';
	std::cout << (a - b) << '\n';
	std::cout << (a * 5) << '\n';
	std::cout << (b / 2) << '\n';
	std::cout << Normalize(a) << '\n';
	std::cout << Vec3::ZERO << '\n';
	std::cout << Vec3::ONE << '\n';

	a += Vec3::ONE;
	std::cout << a << '\n';
	a -= 2.0 * Vec3::ONE;
	std::cout << a << '\n';
	a *= 4.0;
	std::cout << a << '\n';
	a /= 2.0;
	std::cout << a << '\n';
	std::cout << '\n';
}

int main() {
	TestVec2();
	TestVec3();

	return 0;
}