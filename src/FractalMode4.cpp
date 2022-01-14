#include "FractalMode4.h"

void FractalMode4::draw(int n){
    this->boxFractal(ofGetWidth() / 2,ofGetHeight() / 2 , 64,  n);
}

void FractalMode4::boxFractal(float x, float y, float z,  int n){
    if(n == 0) {
        return;
    }

    ofSetColor(r[n],g[n],b[n]);
    ofDrawBox(x, y, z, x+100,x+100,z+100);

    //We wanted to visualize a more chaotic fractal than the others leaving this result:
    
    boxFractal(x+100, y, z+100, n-1);
    boxFractal(x-100, y, z-100, n-1);
    boxFractal(x, y+100, z+100, n-1);
    boxFractal(x, y-100, z-100, n-1);
    
   
    
}