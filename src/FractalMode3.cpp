#include "FractalMode3.h"

void FractalMode3::draw(int n){
    this->triangleFractal(ofGetWidth() / 3, 10, ofGetHeight() / 2, n);
}

void FractalMode3::triangleFractal(float x, float y, float size, int n){
    if(n == 0) {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));
    ofSetColor(r[n],g[n],b[n]);
    ofDrawTriangle(a, b, c);

    triangleFractal(x, y, size / 2, n - 1);
    triangleFractal((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    triangleFractal((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}