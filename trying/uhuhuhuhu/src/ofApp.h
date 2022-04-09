#pragma once

#include "ofMain.h"

class Lines{
public:
    float startx;
    float starty;
    float endx;
    float endy;
    
    ofPolyline polyline;
    vector<ofPoint> points;
    
    ofColor colour;
    
    void draw();
    void setup(float x, float y);
    void update();
    
    Lines();
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
		
//    vector<ofPolyline> lines;
    vector<Lines> groupOfLines;
    float tempx;
    float tempy;
    Lines templine;
};
