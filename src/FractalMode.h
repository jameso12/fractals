#pragma once
#include "ofMain.h"
//#include "ofApp.h"

class FractalMode {

    private:
        bool activate = false;

    public:
        int r[50], g[50], b[50];
        FractalMode();
        virtual void draw(int) = 0;
        virtual void setActivate(bool);
        virtual bool getActivate();
};