#pragma once
#include "FractalMode.h"

class FractalMode4 : public FractalMode{
    public:
    FractalMode4():FractalMode(){}
    virtual void draw(int);
    void boxFractal(float, float, float, int);
};