#pragma once
#include "FractalMode.h"

class FractalMode5 : public FractalMode {
    private:
    int radius = 100;

    public:
        FractalMode5():FractalMode(){}
        virtual void draw(int);
        void circle3DFractal(int,int,int,int);
    
};


