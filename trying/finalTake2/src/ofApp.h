#pragma once

#include "ofMain.h"
#include <math.h>

class startCircle{
public:
    startCircle();
    void setup(float timey, float xco, float yco);
    void draw();
    void update();
    void dissapear();
    
    float opacity;
    ofColor colour;
    float bottomR; //radius for bottom circle
    float r;
    float x;
    float y;
    float initTime; //instantion time
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
    
    float waves = 360;
    ofSoundPlayer track7;
    ofSoundPlayer track8;
    ofSoundPlayer track9;
    ofSoundPlayer track15;
    float time;
    float arr7[5] = {0.017, 4.390, 8.755, 13.117, 17.482};
    int index7 = 0;
    bool reverse = FALSE;
    float eee = 0;
//    float waves = 360;
    float time7;
    float time8;
    
    float arr8[25] = {0.018, 0.595, 1.083, 1.432, 1.719, 1.979, 2.266, 2.815, 3.348, 3.599, 3.892, 4.162, 4.457, 4.988, 5.507, 5.817, 6.093, 6.340, 6.591, 7.131, 7.681, 7.990, 8.261, 8.551, 8.760};
    int index8 = 0;
    
    //imcrement the index like the array is multiplied by this index depending of the amount of times it played
//    int index7Inc = 0;
//    int index8Inc = 0;
// that was such a dumb idea bec the time used is the time elapsed from playing the song lol
    
    
    vector<startCircle> circles;
    vector<startCircle> circles2;
    vector<ofPoint> points;
    vector<ofPoint> updatedPoints;
    vector<ofPoint> targetPoints;
    
//    float linearInterpolation(float x, float y, float currentX){
//        float linearIntVal;
//
//
//        return linearIntVal;
//    };
};
