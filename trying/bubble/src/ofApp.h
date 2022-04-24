#pragma once

#include "ofMain.h"
#include <math.h>

class Circle{
public:
    Circle();
    void setup();
    void draw();
    void collision();
    void update();
    
    float xco;
    float yco;
    
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    vector<ofPoint> vert;
    float dist;
    ofPoint centre;
    float opacity = 10;
    int rot = 0;
    
    vector<ofPoint> swiggles;
    
    bool swigg = FALSE;
    
    int exp = 60;
    int rad = 3;
    
    bool end = FALSE;
		
};
