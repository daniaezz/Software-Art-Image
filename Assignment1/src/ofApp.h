#pragma once

#include "ofMain.h"

class blob{
public:
    int noPoints;
    
    ofPolyline shape;
    ofColor color;
    
    void setup(float _x, float _y, float _prevx, float _prevy);
    void draw();
    void update();
    
    blob();
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
		
    int rows = 10;
    int cols = 10;
    float Area;
    float xco;
    float yco;
    float prevx;
    float prevy;
};
