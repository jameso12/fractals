#pragma once
#include "FractalMode.h"

class FractalMode3 : public FractalMode{
    public:
    FractalMode3():FractalMode(){}
    virtual void draw(int);
    void triangleFractal(float, float, float, int);
};