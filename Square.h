#pragma once
#include "Dot.h"
class Square :
    public Dot
{
public:
    float m_side;
    Square(float x, float y, float side) : Dot(x,y), m_side(side)
    {

    }
    virtual float Perimetr();
};

