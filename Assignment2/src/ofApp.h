#pragma once

#include "ofMain.h"
#include <math.h>

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
    vector<ofPoint> swiggles;
    
    ofPoint centre;
    
    float dist;
    float opacity = 10;
    
    int rot = 0;
    int exp = 60;
    int rad = 3;

    bool swigg = FALSE;
    bool end = FALSE;
        
};
