#pragma once

#include "./../quaternion/quaternion.h"
#include "./../vector/vector.h"

namespace Mathf
{
    struct Mat4
    {
        float v[16];

        Mat4();
        Mat4(const float _v[16]);

        #pragma region presets

        static Mat4 identity();
        static Mat4 scale(Vec4 scale);
        static Mat4 translation(Vec3 pos);
        static Mat4 rotation(Vec3 rot);
        static Mat4 rotation(Quaternion quaternion);
        static Mat4 perspective(float fov, float fNear, float fFar);
        static Mat4 ortho(float width, float height, float depth);

        static void identity(Mat4* mat);
        static void scale(Vec4 scale, Mat4* mat);
        static void translation(Vec3 pos, Mat4* mat);
        static void rotation(Vec3 rot, Mat4* mat);
        static void rotation(Quaternion quaternion, Mat4* mat);
        static void perspective(float fov, float fNear, float fFar, Mat4* mat);
        static void ortho(float width, float height, float depth, Mat4* mat);

        #pragma endregion presets

        #pragma region operators
        Mat4 add(Mat4 mat);
        Mat4 sub(Mat4 mat);
        Mat4 mult(Mat4 mat);
        Mat4 div(Mat4 mat);

        Vec4 add(Vec4 vec);
        Vec4 sub(Vec4 vec);
        Vec4 mult(Vec4 vec);
        Vec4 div(Vec4 vec);

        Mat4 operator+(Mat4 mat);
        Mat4 operator-(Mat4 mat);
        Mat4 operator*(Mat4 mat);
        Mat4 operator/(Mat4 mat);

        Vec4 operator+(Vec4 vec);
        Vec4 operator-(Vec4 vec);
        Vec4 operator*(Vec4 vec);
        Vec4 operator/(Vec4 vec);
        #pragma endregion operators

        #pragma region functions
        Mat4 inverse();
        void transpose();
        #pragma endregion functions
    };
}