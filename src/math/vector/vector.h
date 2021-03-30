#pragma once

#include "./../functions/functions.h"

namespace Mathf
{
    struct Vec2
    {
        float x, y;

        Vec2(float _x, float _y);
        Vec2(float scalar);

        #pragma region operators
        Vec2 add(Vec2 vec);
        Vec2 sub(Vec2 vec);
        Vec2 mult(Vec2 vec);
        Vec2 div(Vec2 vec);

        Vec2 add(float scalar);
        Vec2 sub(float scalar);
        Vec2 mult(float scalar);
        Vec2 div(float scalar);

        Vec2 operator+(Vec2 a);
        Vec2 operator-(Vec2 a);
        Vec2 operator*(Vec2 a);
        Vec2 operator/(Vec2 a);

        Vec2 operator+(float a);
        Vec2 operator-(float a);
        Vec2 operator*(float a);
        Vec2 operator/(float a);
        #pragma endregion operators

        #pragma region functions
        Vec2 abs();
        Vec2 normalized();
        void normalize();
        Vec2 cross(Vec2 vec);
        float dot(Vec2 vec);
        float magnitude();
        float sqrMagnitude();
        float manhattanLenght();
        void setMagnitude(float mag);

        float distance(Vec2 vec);
        float manhattanDistance(Vec2 vec);

        Vec2 reflect(Vec2 vec);

        Vec2 copy();
        #pragma endregion functions
    };

    struct Vec3
    {
        float x, y, z;

        Vec3(float _x, float _y, float _z);
        Vec3(float _x, float _y);
        Vec3(Vec2 vec);
        Vec3(float scalar);

        #pragma region operators
        Vec3 add(Vec3 vec);
        Vec3 sub(Vec3 vec);
        Vec3 mult(Vec3 vec);
        Vec3 div(Vec3 vec);
        Vec3 mod(Vec3 vec);

        Vec3 add(float scalar);
        Vec3 sub(float scalar);
        Vec3 mult(float scalar);
        Vec3 div(float scalar);
        Vec3 mod(float scalar);

        Vec3 operator+(Vec3 a);
        Vec3 operator-(Vec3 a);
        Vec3 operator*(Vec3 a);
        Vec3 operator/(Vec3 a);
        Vec3 operator%(Vec3 a);

        Vec3 operator+(float a);
        Vec3 operator-(float a);
        Vec3 operator*(float a);
        Vec3 operator/(float a);
        Vec3 operator%(float a);
        #pragma endregion operators

        #pragma region functions
        Vec3 abs();
        Vec3 normalized();
        void normalize();
        Vec3 cross(Vec3 vec);
        float dot(Vec3 vec);
        float magnitude();
        float sqrMagnitude();
        float manhattanLenght();
        void setMagnitude(float mag);

        float distance(Vec3 vec);
        float manhattanDistance(Vec3 vec);

        Vec3 reflect(Vec3 vec);

        Vec3 copy();
        #pragma endregion functions
    };

    struct Vec4
    {
        float x, y, z, w;

        Vec4(float _x, float _y, float _z, float _w);
        Vec4(float _x, float _y, float _z);
        Vec4(float _x, float _y);
        Vec4(Vec3 vec);
        Vec4(Vec2 vec);
        Vec4(float scalar);

        #pragma region operators
        Vec4 add(Vec4 vec);
        Vec4 sub(Vec4 vec);
        Vec4 mult(Vec4 vec);
        Vec4 div(Vec4 vec);
        Vec4 mod(Vec4 vec);

        Vec4 add(float scalar);
        Vec4 sub(float scalar);
        Vec4 mult(float scalar);
        Vec4 div(float scalar);
        Vec4 mod(float scalar);

        Vec4 operator+(Vec4 a);
        Vec4 operator-(Vec4 a);
        Vec4 operator*(Vec4 a);
        Vec4 operator/(Vec4 a);
        Vec4 operator%(Vec4 a);

        Vec4 operator+(float a);
        Vec4 operator-(float a);
        Vec4 operator*(float a);
        Vec4 operator/(float a);
        Vec4 operator%(float a);
        #pragma endregion operators

        #pragma region functions
        Vec4 abs();
        Vec4 normalized();
        void normalize();
        Vec4 cross(Vec4 vec);
        float dot(Vec4 vec);
        float magnitude();
        float sqrMagnitude();
        float manhattanLenght();
        void setMagnitude(float mag);

        float distance(Vec4 vec);
        float manhattanDistance(Vec4 vec);

        Vec4 reflect(Vec4 vec);

        Vec4 copy();
        #pragma endregion functions
    };
}