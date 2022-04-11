#pragma once

#include "ofMain.h"
#define ROWS 10
#define COLS 10

class Shape{
public:
    int type;
    int semi;
    float midx;
    float midy;
    float edgex;
    float edgey;
    float radius;
    
    ofColor colour;
    
    void setup(float _midx, float _midy, float _edgex, float _edgey, float r);
    void draw();
    
    Shape();
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
    float xedge;
    float yedge;
    float xmid;
    float ymid;
    float rr;
    
    vector<vector <Shape>> groupOfShapes;
};
