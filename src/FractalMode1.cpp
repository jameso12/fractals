#include "FractalMode1.h"

void FractalMode1::draw(int n){
    this->circleFractal(ofGetWidth()/2, ofGetHeight()/2,n, this->radius);
}

void FractalMode1::circleFractal(int x,int y,int n, int rad){
    if(n!=0){
        ofSetColor(r[n],g[n],b[n]);
        ofDrawCircle(x, y, rad);
        circleFractal(x+rad, y, n-1, rad/2);
        circleFractal(x-rad, y, n-1, rad/2);
        circleFractal(x, y+rad, n-1, rad/2);
        circleFractal(x, y-rad, n-1, rad/2);
    }  
}