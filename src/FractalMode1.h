#pragma once
#include "FractalMode.h"

class FractalMode1 : public FractalMode {
    private:
    int radius = 100;

    public:
        FractalMode1():FractalMode(){}
        virtual void draw(int);
        void circleFractal(int,int,int,int);
    
};


