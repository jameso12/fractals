#include "FractalMode.h"

FractalMode::FractalMode(){
    for(int i = 0; i<50; i++){ // creates the arrays for random colors
        this->r[i] = ofRandom(255);
        this->g[i] = ofRandom(255);
        this->b[i] = ofRandom(255);
    }
}

void FractalMode::setActivate(bool a){
    this->activate = a;
}

bool FractalMode::getActivate(){ return this->activate; }
