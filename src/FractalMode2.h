#pragma once
#include "FractalMode.h"

class FractalMode2 : public FractalMode {
    public:
    FractalMode2():FractalMode(){}
    virtual void draw(int);
    void branchFractal(int, int, int, int, int);
};