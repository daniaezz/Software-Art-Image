#pragma once

#include "ofMain.h"
#include <math.h>
#include "ofxGui.h"

class snareAlone{
public:
    snareAlone();
    void setup(ofColor color);
    void draw();
    
    vector<ofPoint> randomPoints;
    
    float opacity;
    ofColor colour;
};


class startCircle{
public:
    startCircle();
    void setup(float timey, float xco, float yco, ofColor color);
    void draw();

    float opacity;
    ofColor colour;
    float bottomR; //radius for bottom circle
    float r;
    float x;
    float y;
    float initTime; //time
    float endtime;
    float timeElapsed;
    bool display = FALSE;
    
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
    
    
    ofSoundPlayer track7;
    ofSoundPlayer track8;
    ofSoundPlayer track2;
    ofSoundPlayer track18;
    ofSoundPlayer track23;
    
    float waves = 360;
    float time;
    float arr7[5] = {0.017, 4.390, 8.755, 13.117, 17.482};
    int index7 = 0;
    bool reverse = FALSE;
    float eee = 0;
    float time7; //piano base
    float time8; //bass
    float time23; //drums
    float time18; //snare
    float time2;
    float rotation= 0;
    float clearAlpha = 255;
    
    float arr8[25] = {0.018, 0.595, 1.083, 1.432, 1.719, 1.979, 2.266, 2.815, 3.348, 3.599, 3.892, 4.162, 4.457, 4.988, 5.507, 5.817, 6.093, 6.340, 6.591, 7.131, 7.681, 7.990, 8.261, 8.551, 8.760};
    int index8 = 0;
    
    float arr23[7] = {0.02, 0.5, 1.094, 1.640, 2.188, 2.732, 3.265};
    int index23 = 1;
    
    float arr18[16] = {0.021, 0.294, 0.567, 1.112, 1.539, 1.931, 2.202, 2.476, 2.749, 3.293, 3.468, 3.578, 3.719, 3.837, 4.113, 4.408 };
    int index18 = 0;
    bool snare = FALSE;
    
    
    float arr2[20] = {0.024, 1.150, 1.653, 2.263 , 3.3, 3.596, 3.874, 4.178, 4.452, 5.544, 5.794, 6.081, 6.208, 6.625, 7.662, 7.971, 8.242, 8.576, 8.744, 8.764};
    int index2 = 0;
    

    
    vector<startCircle> circles;
    vector<startCircle> circles2;
    vector<ofPoint> points;
    vector<ofPoint> updatedPoints;
    vector<ofPoint> targetPoints;
    vector<snareAlone> individualSnares;
    
    ofColor drums;
    ofxPanel gui;
    
    ofxFloatSlider bassSlider;
    ofxFloatSlider elaboratePianoSlider;
    ofxFloatSlider basePianoSlider;
    
    ofxToggle snareDrum;
    ofxToggle drumToggle;
    
    ofColor drawColour;
    

    
};
