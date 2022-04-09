#include "ofApp.h"
#include "Ball.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    for(int i=0; i<groupOfBalls.size(); i++){
        groupOfBalls[i].setup(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(10,20));
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<groupOfBalls.size(); i++){
        groupOfBalls[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<groupOfBalls.size(); i++){
        groupOfBalls[i].draw();
    }}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    Ball tempBall;                            // create the ball object
        tempBall.setup(x,y, ofRandom(10,40));    // setup its initial state
        groupOfBalls.push_back(tempBall);                // add it to the vector
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

//--------------------------------------------------------------
Ball::Ball(){
    
}
void Ball::setup(float _x, float _y, int _dim){
    x = _x;      // give some random positioning
    y = _y;

    speedX = ofRandom(-5, 5);           // and random speed and direction
    speedY = ofRandom(-5, 5);

    dim = _dim;

    color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by addressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}

void Ball::update(){
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }

    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }

    x+=speedX;
    y+=speedY;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}
