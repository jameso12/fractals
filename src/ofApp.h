#pragma once
#include<cmath>
#include <vector>
#include "ofMain.h"
#include "FractalMode.h"
#include "FractalMode1.h"
#include "FractalMode2.h"
#include "FractalMode3.h"
#include "FractalMode4.h"
#include "FractalMode5.h"

class ofApp : public ofBaseApp{
	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	private:
		bool animation = false;
		int levels = 1, // recursion level
		    maxRecDepth = 9; //this may be changed
		vector<FractalMode*>Fracts;
};
