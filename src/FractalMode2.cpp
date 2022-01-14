#include "FractalMode2.h"

void FractalMode2::draw(int n){
    this->branchFractal(200, n, ofGetWidth()/2, ofGetHeight()-50, rand()%(70-30 + 1) + 30);
}

void FractalMode2::branchFractal(int length, int n, int x, int y, int d){
    if(n != 0){
        int middleY = y-length;
        int leftBranchX = x -length*cos(PI/180*d);
        int leftBranchY = middleY -length*sin(PI/180*d);
        int rightBranchX = x +length*cos(PI/180*d);
        int rightBranchY = middleY -length*sin(PI/180*d);
        ofSetColor(r[n],g[n],b[n]);
        ofDrawLine(x, y, x,y-length);
        ofDrawLine(x, y-length, rightBranchX, rightBranchY);
        ofDrawLine(x,y-length, leftBranchX, leftBranchY);

        branchFractal(length/2, n-1,rightBranchX,rightBranchY, rand()%(70-30 + 1) + 30);
        branchFractal(length/2,n-1,leftBranchX,leftBranchY, rand()%(70-30 + 1) + 30);
    }
}