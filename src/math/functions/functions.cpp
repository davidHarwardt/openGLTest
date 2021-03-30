#include "functions.h"

#include <cmath>

namespace Mathf
{
    float absf(float v)
    {
        if(v < 0)
        {
            return -v;
        }
        return v;
    }

    float sqrtf(float v)
    {
        return sqrt(v);
    }

    float floorf(float v)
    {
        return floor(v);
    }
}
