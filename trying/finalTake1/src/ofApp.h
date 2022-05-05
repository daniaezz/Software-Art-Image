#pragma once

#include "ofMain.h"
#include <math.h>

class Sine {
public:
    void setup(float timey);
    void update();
    void draw();
    
    Sine();
    
    float amplitude;
    float timeStamp;
    float frequency;
    float opacity;
    ofColor colour;
    

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
    
    ofSoundPlayer soundPlayer;
    ofSoundPlayer soundPlayer2;
    ofSoundPlayer soundPlayer3;
    ofSoundPlayer soundPlayer4;
    ofSoundPlayer soundPlayer5;
    ofSoundPlayer soundPlayer6;
    ofSoundPlayer soundPlayer7;
    
    
    float var = 0; //misc
    float oop = 0; //misc
    int smth = 1; //controls something with the amount, the number of waves;
    int amount = 2; //controls the frequency of the waves
    float waves = 180; // controls the number of waves through rotation
    float eee = 0; //not sure tbh but its needed
    bool yes = TRUE; //checks if the no. of waves should increase or decrease
    float tempWave=35; //not sure but for now it controls the degree of rotation of the whole thing
    float arr7[5] = {0.017, 4.390, 8.755, 13.117, 17.482}; // array containg the timings for track 7
    
    int no7 = 1; //iterates through arr7
    int no77 = 1; //multiplies arr7 depending on the position the track is in?
    
    float time;
    int rot = 1; 
    
    ofColor colour;
    ofColor tempCol;
    ofColor newCol; 
};
