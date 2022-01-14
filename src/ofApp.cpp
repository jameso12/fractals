#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(1);
    this->Fracts.push_back(new FractalMode1());
    this->Fracts.push_back(new FractalMode2());
    this->Fracts.push_back(new FractalMode3());
    this->Fracts.push_back(new FractalMode4());
    this->Fracts.push_back(new FractalMode5());
    

}

//--------------------------------------------------------------
void ofApp::update(){
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0,0,0);
        if(animation && levels<maxRecDepth){
        levels++;
    } else if(animation){
        animation = false;
        levels = 1;

    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    for(FractalMode*f : Fracts){
        if(f->getActivate()){
            f->draw(levels);
        }
    }    
}

//--------------------------------------------------------------

void ofApp::keyPressed(int key){
    // This method is called automatically when any key is pressed
    switch(key){
        // Modes
        case '1':
            Fracts[0]->setActivate(!Fracts[0]->getActivate());
            break;   
        case '2':
            Fracts[1]->setActivate(!Fracts[1]->getActivate());
            break;
        case '3':
            Fracts[2]->setActivate(!Fracts[2]->getActivate());
            break;
        case '4':
            //This mode is a very chaotic fractal
            Fracts[3]->setActivate(!Fracts[3]->getActivate());
            break;
        case '5':
            Fracts[4]->setActivate(!Fracts[4]->getActivate());
            break;
        // Level controls
        case '=':
            if(levels<this->maxRecDepth){
                levels++;
            }
            break;
        case '-':
            if(levels>=1){
                levels--;
            }
            break;
        // Animation
        case ' ':
            animation = true;
            levels = -1;
            break;
    }   
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}