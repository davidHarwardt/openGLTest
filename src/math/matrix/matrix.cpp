#include "matrix.h"

namespace Mathf
{
    Mat4::Mat4()
    {
        for (int i = 0; i < 16; i++)
        {
            v[i] = 0;
        }
    }

    Mat4::Mat4(const float _v[16])
    {
        for (int i = 0; i < 16; i++)
        {
            v[i] = _v[i];
        }
    }

    void Mat4::identity(Mat4* mat)
    {
        mat->v[ 0] = 1;
        mat->v[ 1] = 0;
        mat->v[ 2] = 0;
        mat->v[ 3] = 0;

        mat->v[ 4] = 0;
        mat->v[ 5] = 1;
        mat->v[ 6] = 0;
        mat->v[ 7] = 0;

        mat->v[ 8] = 0;
        mat->v[ 9] = 0;
        mat->v[10] = 1;
        mat->v[11] = 0;

        mat->v[12] = 0;
        mat->v[13] = 0;
        mat->v[14] = 0;
        mat->v[15] = 1;
    }

    void Mat4::scale(Vec4 scale, Mat4* mat)
    {
        mat->v[ 0] = scale.x;
        mat->v[ 1] = 0;
        mat->v[ 2] = 0;
        mat->v[ 3] = 0;

        mat->v[ 4] = 0;
        mat->v[ 5] = scale.y;
        mat->v[ 6] = 0;
        mat->v[ 7] = 0;

        mat->v[ 8] = 0;
        mat->v[ 9] = 0;
        mat->v[10] = scale.z;
        mat->v[11] = 0;

        mat->v[12] = 0;
        mat->v[13] = 0;
        mat->v[14] = 0;
        mat->v[15] = scale.w;
    }

    void Mat4::translation(Vec3 pos, Mat4* mat)
    {
        mat->v[ 0] = 1;
        mat->v[ 1] = 0;
        mat->v[ 2] = 0;
        mat->v[ 3] = pos.x;

        mat->v[ 4] = 0;
        mat->v[ 5] = 1;
        mat->v[ 6] = 0;
        mat->v[ 7] = pos.y;

        mat->v[ 8] = 0;
        mat->v[ 9] = 0;
        mat->v[10] = 1;
        mat->v[11] = pos.z;

        mat->v[12] = 0;
        mat->v[13] = 0;
        mat->v[14] = 0;
        mat->v[15] = 1;
    }


    void Mat4::rotation(Vec3 rot, Mat4* mat)
    {
        mat->v[ 0] = 1;
        mat->v[ 1] = 0;
        mat->v[ 2] = 0;
        mat->v[ 3] = 0;

        mat->v[ 4] = 0;
        mat->v[ 5] = 1;
        mat->v[ 6] = 0;
        mat->v[ 7] = 0;

        mat->v[ 8] = 0;
        mat->v[ 9] = 0;
        mat->v[10] = 1;
        mat->v[11] = 0;

        mat->v[12] = 0;
        mat->v[13] = 0;
        mat->v[14] = 0;
        mat->v[15] = 1;
    }

    void Mat4::rotation(Quaternion quaternion, Mat4* mat)
    {
        mat->v[ 0] = 1;
        mat->v[ 1] = 0;
        mat->v[ 2] = 0;
        mat->v[ 3] = 0;

        mat->v[ 4] = 0;
        mat->v[ 5] = 1;
        mat->v[ 6] = 0;
        mat->v[ 7] = 0;

        mat->v[ 8] = 0;
        mat->v[ 9] = 0;
        mat->v[10] = 1;
        mat->v[11] = 0;

        mat->v[12] = 0;
        mat->v[13] = 0;
        mat->v[14] = 0;
        mat->v[15] = 1;
    }

    void Mat4::perspective(float fov, float fNear, float fFar, Mat4* mat)
    {
        mat->v[ 0] = 1;
        mat->v[ 1] = 0;
        mat->v[ 2] = 0;
        mat->v[ 3] = 0;

        mat->v[ 4] = 0;
        mat->v[ 5] = 1;
        mat->v[ 6] = 0;
        mat->v[ 7] = 0;

        mat->v[ 8] = 0;
        mat->v[ 9] = 0;
        mat->v[10] = 1;
        mat->v[11] = 0;

        mat->v[12] = 0;
        mat->v[13] = 0;
        mat->v[14] = 0;
        mat->v[15] = 1;
    }

    void Mat4::ortho(float width, float height, float depth, Mat4* mat)
    {
        mat->v[ 0] = 1;
        mat->v[ 1] = 0;
        mat->v[ 2] = 0;
        mat->v[ 3] = 0;

        mat->v[ 4] = 0;
        mat->v[ 5] = 1;
        mat->v[ 6] = 0;
        mat->v[ 7] = 0;

        mat->v[ 8] = 0;
        mat->v[ 9] = 0;
        mat->v[10] = 1;
        mat->v[11] = 0;

        mat->v[12] = 0;
        mat->v[13] = 0;
        mat->v[14] = 0;
        mat->v[15] = 1;
    }

    Mat4 Mat4::identity()
    {
        Mat4 mat;

        Mat4::identity(&mat);

        return mat;
    }

    Mat4 Mat4::scale(Vec4 scale)
    {
        Mat4 mat;

        Mat4::scale(scale, &mat);

        return mat;
    }

    Mat4 Mat4::translation(Vec3 pos)
    {
        Mat4 mat;

        Mat4::translation(pos, &mat);

        return mat;
    }

    Mat4 Mat4::rotation(Vec3 rot)
    {
        Mat4 mat;

        Mat4::rotation(rot, &mat);

        return mat;
    }

    Mat4 Mat4::rotation(Quaternion quaternion)
    {
        Mat4 mat;

        Mat4::rotation(quaternion, &mat);

        return mat;
    }

    Mat4 Mat4::perspective(float fov, float fNear, float fFar)
    {
        Mat4 mat;

        Mat4::perspective(fov, fNear, fFar, &mat);

        return mat;
    }

    Mat4 Mat4::ortho(float width, float height, float depth)
    {
        Mat4 mat;

        Mat4::ortho(width, height, depth, &mat);

        return mat;
    }

    Mat4 Mat4::add(Mat4 mat)
    {
        Mat4 matRet;

        for (int i = 0; i < 16; i++)
        {
            matRet.v[i] = v[i] + mat.v[i];
        }
        
        return matRet;
    }

    Mat4 Mat4::sub(Mat4 mat)
    {
        Mat4 matRet;

        for (int i = 0; i < 16; i++)
        {
            matRet.v[i] = v[i] - mat.v[i];
        }
        
        return matRet;
    }

    Mat4 Mat4::mult(Mat4 mat)
    {
        Mat4 matRet;

        for (int i = 0; i < 16; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                matRet.v[i] += v[j + ((int)Mathf::floorf(i / 4)) * 4] * mat.v[j * 4 + (i % 4)];
            }
        }
        
        return matRet;
    }

    Mat4 Mat4::operator+(Mat4 mat)
    {
        return add(mat);
    }

    Mat4 Mat4::operator-(Mat4 mat)
    {
        return sub(mat);
    }

    Mat4 Mat4::operator*(Mat4 mat)
    {
        return mult(mat);
    }

    Vec4 Mat4::mult(Vec4 vec)
    {
        float vecArrIn[] = {vec.x, vec.y, vec.z, vec.w};
        float vecArrOut[4];
        
        for(int i = 0; i < 4; i++)
        {
            vecArrOut[i] += vecArrIn[i] * v[i * 4 + 0];
            vecArrOut[i] += vecArrIn[i] * v[i * 4 + 1];
            vecArrOut[i] += vecArrIn[i] * v[i * 4 + 2]; 
            vecArrOut[i] += vecArrIn[i] * v[i * 4 + 3];
        }

        return Vec4(vecArrOut[0], vecArrOut[1], vecArrOut[2], vecArrOut[3]);
    }

    Vec4 Mat4::operator*(Vec4 mat)
    {
        return mult(mat);
    }
}