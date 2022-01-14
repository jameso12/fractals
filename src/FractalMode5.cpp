#include "FractalMode5.h"

void FractalMode5::draw(int n){
    this->circle3DFractal(ofGetWidth()/2, ofGetHeight()/2,n, this->radius);
}

void FractalMode5::circle3DFractal(int x,int y,int n, int rad){
    if(n!=0){
        ofSetColor(r[n],g[n],b[n]);
        //This method draws a sphere:
        ofDrawIcoSphere(x, y, rad);
        circle3DFractal(x+rad, y, n-1, rad/2);
        circle3DFractal(x-rad, y, n-1, rad/2);
        circle3DFractal(x, y+rad, n-1, rad/2);
        circle3DFractal(x, y-rad, n-1, rad/2);
    }  
}