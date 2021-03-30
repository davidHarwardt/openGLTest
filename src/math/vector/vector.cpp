#include "vector.h"

namespace Mathf
{
    // vec2
    Vec2::Vec2(float _x, float _y)
    {
        x = _x;
        y = _y;
    }

    Vec2::Vec2(float scalar)
    {
        x = scalar;
        y = scalar;
    }

    Vec2 Vec2::add(Vec2 vec)
    {
        return Vec2(x + vec.x, y + vec.y);
    }

    Vec2 Vec2::sub(Vec2 vec)
    {
        return Vec2(x - vec.x, y - vec.y);
    }

    Vec2 Vec2::mult(Vec2 vec)
    {
        return Vec2(x * vec.x, y * vec.y);
    }

    Vec2 Vec2::div(Vec2 vec)
    {
        return Vec2(x / vec.x, y / vec.y);
    }

    Vec2 Vec2::add(float scalar)
    {
        return Vec2(x + scalar, y + scalar);
    }

    Vec2 Vec2::sub(float scalar)
    {
        return Vec2(x - scalar, y - scalar);
    }

    Vec2 Vec2::mult(float scalar)
    {
        return Vec2(x * scalar, y * scalar);
    }

    Vec2 Vec2::div(float scalar)
    {
        return Vec2(x / scalar, y / scalar);
    }

    Vec2 Vec2::operator+(Vec2 a)
    {
        return add(a);
    }

    Vec2 Vec2::operator-(Vec2 a)
    {
        return sub(a);
    }

    Vec2 Vec2::operator*(Vec2 a)
    {
        return mult(a);
    }

    Vec2 Vec2::operator/(Vec2 a)
    {
        return div(a);
    }

    Vec2 Vec2::operator+(float a)
    {
        return add(a);
    }

    Vec2 Vec2::operator-(float a)
    {
        return sub(a);
    }

    Vec2 Vec2::operator*(float a)
    {
        return mult(a);
    }

    Vec2 Vec2::operator/(float a)
    {
        return div(a);
    }

    Vec2 Vec2::abs()
    {
        return Vec2(absf(x), absf(y));
    }

    Vec2 Vec2::normalized()
    {
        return div(magnitude());
    }

    void Vec2::normalize()
    {
        Vec2 norm = normalized();

        x = norm.x;
        y = norm.y;
    }

    Vec2 Vec2::cross(Vec2 vec)
    {
        return mult(vec);
    }

    float Vec2::dot(Vec2 vec)
    {
        return x * vec.x + y * vec.y;
    }

    float Vec2::magnitude()
    {
        return sqrtf(sqrMagnitude());
    }

    float Vec2::sqrMagnitude()
    {
        return (x * x + y * y);
    }

    float Vec2::manhattanLenght()
    {
        return absf(x) + absf(y);
    }

    void Vec2::setMagnitude(float mag)
    {
        normalize();
        mult(mag);
    }

    float Vec2::distance(Vec2 vec)
    {
        return (sub(vec)).magnitude();
    }

    float Vec2::manhattanDistance(Vec2 vec)
    {
        return (sub(vec)).manhattanLenght();
    }

    Vec2 Vec2::copy()
    {
        return Vec2(x, y);
    }

    //vec3

    Vec3::Vec3(float _x, float _y, float _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }

    Vec3::Vec3(float _x, float _y)
    {
        x = _x;
        y = _y;
        z = 0;
    }

    Vec3::Vec3(Vec2 vec)
    {
        x = vec.x;
        y = vec.y;
        z = 0;
    }

    Vec3::Vec3(float scalar)
    {
        x = scalar;
        y = scalar;
        z = scalar;
    }

    Vec3 Vec3::add(Vec3 vec)
    {
        return Vec3(x + vec.x, y + vec.y, z + vec.z);
    }

    Vec3 Vec3::sub(Vec3 vec)
    {
        return Vec3(x - vec.x, y - vec.y, z - vec.z);
    }

    Vec3 Vec3::mult(Vec3 vec)
    {
        return Vec3(x * vec.x, y * vec.y, z * vec.z);
    }

    Vec3 Vec3::div(Vec3 vec)
    {
        return Vec3(x / vec.x, y / vec.y, z / vec.z);
    }

    Vec3 Vec3::add(float scalar)
    {
        return Vec3(x + scalar, y + scalar, z + scalar);
    }

    Vec3 Vec3::sub(float scalar)
    {
        return Vec3(x - scalar, y - scalar, z - scalar);
    }

    Vec3 Vec3::mult(float scalar)
    {
        return Vec3(x * scalar, y * scalar, z * scalar);
    }

    Vec3 Vec3::div(float scalar)
    {
        return Vec3(x / scalar, y / scalar, z / scalar);
    }

    Vec3 Vec3::operator+(Vec3 a)
    {
        return add(a);
    }

    Vec3 Vec3::operator-(Vec3 a)
    {
        return sub(a);
    }

    Vec3 Vec3::operator*(Vec3 a)
    {
        return mult(a);
    }

    Vec3 Vec3::operator/(Vec3 a)
    {
        return div(a);
    }

    Vec3 Vec3::operator+(float a)
    {
        return add(a);
    }

    Vec3 Vec3::operator-(float a)
    {
        return sub(a);
    }

    Vec3 Vec3::operator*(float a)
    {
        return mult(a);
    }

    Vec3 Vec3::operator/(float a)
    {
        return div(a);
    }

    Vec3 Vec3::abs()
    {
        return Vec3(absf(x), absf(y), absf(z));
    }

    Vec3 Vec3::normalized()
    {
        return div(magnitude());
    }

    void Vec3::normalize()
    {
        Vec3 norm = normalized();

        x = norm.x;
        y = norm.y;
        z = norm.z;
    }

    Vec3 Vec3::cross(Vec3 vec)
    {
        return mult(vec);
    }

    float Vec3::dot(Vec3 vec)
    {
        return x * vec.x + y * vec.y + z * vec.z;
    }

    float Vec3::magnitude()
    {
        return sqrtf(sqrMagnitude());
    }

    float Vec3::sqrMagnitude()
    {
        return (x * x + y * y + z * z);
    }

    float Vec3::manhattanLenght()
    {
        return absf(x) + absf(y) + absf(z);
    }

    void Vec3::setMagnitude(float mag)
    {
        normalize();
        mult(mag);
    }

    float Vec3::distance(Vec3 vec)
    {
        return (sub(vec)).magnitude();
    }

    float Vec3::manhattanDistance(Vec3 vec)
    {
        return (sub(vec)).manhattanLenght();
    }

    Vec3 Vec3::copy()
    {
        return Vec3(x, y, z);
    }

    //vec4

    Vec4::Vec4(float _x, float _y, float _z, float _w)
    {
        x = _x;
        y = _y;
        z = _z;
        w = _w;
    }

    Vec4::Vec4(float _x, float _y, float _z)
    {
        x = _x;
        y = _y;
        z = _z;
        w = 0;
    }

    Vec4::Vec4(float _x, float _y)
    {
        x = _x;
        y = _y;
        z = 0;
        w = 0;
    }

    Vec4::Vec4(Vec3 vec)
    {
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = 0;
    }

    Vec4::Vec4(Vec2 vec)
    {
        x = vec.x;
        y = vec.y;
        z = 0;
        w = 0;
    }

    Vec4::Vec4(float scalar)
    {
        x = scalar;
        y = scalar;
        z = scalar;
        w = scalar;
    }

    Vec4 Vec4::add(Vec4 vec)
    {
        return Vec4(x + vec.x, y + vec.y, z + vec.z, w + vec.w);
    }

    Vec4 Vec4::sub(Vec4 vec)
    {
        return Vec4(x - vec.x, y - vec.y, z - vec.z, w - vec.w);
    }

    Vec4 Vec4::mult(Vec4 vec)
    {
        return Vec4(x * vec.x, y * vec.y, z * vec.z, w * vec.w);
    }

    Vec4 Vec4::div(Vec4 vec)
    {
        return Vec4(x / vec.x, y / vec.y, z / vec.z, w / vec.w);
    }

    Vec4 Vec4::add(float scalar)
    {
        return Vec4(x + scalar, y + scalar, z + scalar, w + scalar);
    }

    Vec4 Vec4::sub(float scalar)
    {
        return Vec4(x - scalar, y - scalar, z - scalar, w - scalar);
    }

    Vec4 Vec4::mult(float scalar)
    {
        return Vec4(x * scalar, y * scalar, z * scalar, w * scalar);
    }

    Vec4 Vec4::div(float scalar)
    {
        return Vec4(x / scalar, y / scalar, z / scalar, w / scalar);
    }

    Vec4 Vec4::operator+(Vec4 a)
    {
        return add(a);
    }

    Vec4 Vec4::operator-(Vec4 a)
    {
        return sub(a);
    }

    Vec4 Vec4::operator*(Vec4 a)
    {
        return mult(a);
    }

    Vec4 Vec4::operator/(Vec4 a)
    {
        return div(a);
    }

    Vec4 Vec4::operator+(float a)
    {
        return add(a);
    }

    Vec4 Vec4::operator-(float a)
    {
        return sub(a);
    }

    Vec4 Vec4::operator*(float a)
    {
        return mult(a);
    }

    Vec4 Vec4::operator/(float a)
    {
        return div(a);
    }

    Vec4 Vec4::abs()
    {
        return Vec4(absf(x), absf(y), absf(z), absf(w));
    }

    Vec4 Vec4::normalized()
    {
        return div(magnitude());
    }

    void Vec4::normalize()
    {
        Vec4 norm = normalized();

        x = norm.x;
        y = norm.y;
        z = norm.z;
        w = norm.w;
    }

    Vec4 Vec4::cross(Vec4 vec)
    {
        return mult(vec);
    }

    float Vec4::dot(Vec4 vec)
    {
        return x * vec.x + y * vec.y + z * vec.z + w * vec.w;
    }

    float Vec4::magnitude()
    {
        return sqrtf(sqrMagnitude());
    }

    float Vec4::sqrMagnitude()
    {
        return (x * x + y * y + z * z + w * w);
    }

    float Vec4::manhattanLenght()
    {
        return absf(x) + absf(y) + absf(z) + absf(w);
    }

    void Vec4::setMagnitude(float mag)
    {
        normalize();
        mult(mag);
    }

    float Vec4::distance(Vec4 vec)
    {
        return (sub(vec)).magnitude();
    }

    float Vec4::manhattanDistance(Vec4 vec)
    {
        return (sub(vec)).manhattanLenght();
    }

    Vec4 Vec4::copy()
    {
        return Vec4(x, y, z, w);
    }
}
