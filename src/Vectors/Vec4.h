#pragma once

#include <iostream>
#include <math.h>

#define real double

class Vec4 {
public:
	real x, y, z, w;

	Vec4() : x(0), y(0), z(0), w(0) {}
	Vec4(real n) : x(n), y(n), z(n), w(n) {}
	Vec4(real x, real y, real z, real w) : x(x), y(y), z(z), w(w) {}

	void operator+=(const Vec4& other) {
		x += other.x;
		y += other.y;
		z += other.z;
		w += other.w;
	}
	void operator-=(const Vec4& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;
		w -= other.w;
	}
	void operator*=(const real& other) {
		x *= other;
		y *= other;
		z *= other;
		w *= other;
	}
	void operator/=(const real& other) {
		x /= other;
		y /= other;
		z /= other;
		w /= other;
	}

	static Vec4 ZERO;
	static Vec4 ONE;
};

Vec4 Vec4::ZERO(0);
Vec4 Vec4::ONE(1);

inline std::ostream& operator<<(std::ostream& out, const Vec4& vec) {
	return out << '(' << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w << ")";
}

inline Vec4 operator+(const Vec4& u, const Vec4& v) {
	return Vec4(u.x + v.x, u.y + v.y, u.z + v.z, u.w + v.w);
}
inline Vec4 operator-(const Vec4& u, const Vec4& v) {
	return Vec4(u.x - v.x, u.y - v.y, u.z - v.z, u.w - v.w);
}
inline Vec4 operator-(const Vec4& v) {
	return Vec4(-v.x, -v.y, -v.z, -v.w);
}
inline Vec4 operator*(const real& t, const Vec4& v) {
	return Vec4(t * v.x, t * v.y, t * v.z, t * v.w);
}
inline Vec4 operator*(const Vec4& v, const real& t) {
	return Vec4(t * v.x, t * v.y, t * v.z, t * v.w);
}
inline Vec4 operator/(const Vec4& v, const real& t) {
	return Vec4(v.x / t, v.y / t, v.z / t, v.w / t);
}

inline real Dot(const Vec4& u, const Vec4& v) {
	return u.x * v.x + u.y * v.y + u.z * v.z + u.w * v.w;
}
inline real Length(const Vec4& v) {
	return sqrt(Dot(v, v));
}
inline real LengthSqrd(const Vec4& v) {
	return Dot(v, v);
}
inline Vec4 Normalize(const Vec4& v) {
	return v / Length(v);
}