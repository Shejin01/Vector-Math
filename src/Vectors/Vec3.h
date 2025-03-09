#pragma once

#include <iostream>
#include <math.h>

#define real double

class Vec3 {
public:
	real x, y, z;

	Vec3() : x(0), y(0), z(0) {}
	Vec3(real n) : x(n), y(n), z(n) {}
	Vec3(real x, real y, real z) : x(x), y(y), z(z) {}

	void operator+=(const Vec3& other) {
		x += other.x;
		y += other.y;
		z += other.z;
	}
	void operator-=(const Vec3& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;
	}
	void operator*=(const real& other) {
		x *= other;
		y *= other;
		z *= other;
	}
	void operator/=(const real& other) {
		x /= other;
		y /= other;
		z /= other;
	}

	static Vec3 ZERO;
	static Vec3 ONE;
};

Vec3 Vec3::ZERO(0);
Vec3 Vec3::ONE(1);

inline std::ostream& operator<<(std::ostream& out, const Vec3& vec) {
	return out << '(' << vec.x << ", " << vec.y << ", " << vec.z << ")";
}

inline Vec3 operator+(const Vec3& u, const Vec3& v) {
	return Vec3(u.x + v.x, u.y + v.y, u.z + v.z);
}
inline Vec3 operator-(const Vec3& u, const Vec3& v) {
	return Vec3(u.x - v.x, u.y - v.y, u.z - v.z);
}
inline Vec3 operator-(const Vec3& v) {
	return Vec3(-v.x, -v.y, -v.z);
}
inline Vec3 operator*(const real& t, const Vec3& v) {
	return Vec3(t * v.x, t * v.y, t * v.z);
}
inline Vec3 operator*(const Vec3& v, const real& t) {
	return Vec3(t * v.x, t * v.y, t * v.z);
}
inline Vec3 operator/(const Vec3& v, const real& t) {
	return Vec3(v.x / t, v.y / t, v.z / t);
}

inline real Dot(const Vec3& u, const Vec3& v) {
	return u.x * v.x + u.y * v.y + u.z * v.z;
}
inline Vec3 Cross(const Vec3& u, const Vec3& v) {
	return Vec3(u.y*v.z - u.z*v.y, u.z*v.x - u.x*v.z, u.x*v.y - u.y*v.x);
}
inline real Length(const Vec3& v) {
	return sqrt(Dot(v, v));
}
inline real LengthSqrd(const Vec3& v) {
	return Dot(v, v);
}
inline Vec3 Normalize(const Vec3& v) {
	return v / Length(v);
}