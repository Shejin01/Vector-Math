#pragma once

#include <iostream>
#include <math.h>

#define real double

class Vec2 {
public:
	real x, y;

	Vec2() : x(0), y(0) {}
	Vec2(real n) : x(n), y(n) {}
	Vec2(real x, real y) : x(x), y(y) {}

	void operator+=(const Vec2& other) {
		x += other.x;
		y += other.y;
	}
	void operator-=(const Vec2& other) {
		x -= other.x;
		y -= other.y;
	}
	void operator*=(const real& other) {
		x *= other;
		y *= other;
	}
	void operator/=(const real& other) {
		x /= other;
		y /= other;
	}

	static Vec2 ZERO;
	static Vec2 ONE;
};

Vec2 Vec2::ZERO(0);
Vec2 Vec2::ONE(1);

inline std::ostream& operator<<(std::ostream& out, const Vec2& vec) {
	return out << '(' << vec.x << ", " << vec.y << ")";
}

inline Vec2 operator+(const Vec2& u, const Vec2& v) {
	return Vec2(u.x + v.x, u.y + v.y);
}
inline Vec2 operator-(const Vec2& u, const Vec2& v) {
	return Vec2(u.x - v.x, u.y - v.y);
}
inline Vec2 operator-(const Vec2& v) {
	return Vec2(-v.x, -v.y);
}
inline Vec2 operator*(const real& t, const Vec2& v) {
	return Vec2(t * v.x, t * v.y);
}
inline Vec2 operator*(const Vec2& v, const real& t) {
	return Vec2(t * v.x, t * v.y);
}
inline Vec2 operator/(const Vec2& v, const real& t) {
	return Vec2(v.x / t, v.y / t);
}

inline real Dot(const Vec2& u, const Vec2& v) {
	return u.x * v.x + u.y * v.y;
}
inline real Length(const Vec2& v) {
	return sqrt(Dot(v, v));
}
inline real LengthSqrd(const Vec2& v) {
	return Dot(v, v);
}
inline Vec2 Normalize(const Vec2& v) {
	return v / Length(v);
}