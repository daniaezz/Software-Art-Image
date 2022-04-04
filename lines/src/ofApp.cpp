#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    float heh = 0.05;
    
//    ofDrawLine(100, 100, 100, 300);
    for (int i =0; i< 10; i++){
        float yconst = ofNoise(heh);
//        ofDrawCircle(ofGetWidth()*ofNoise(time*0.3*(i+1)/2), ofGetHeight()* ofNoise(time*0.2*(i+1)/2), 50);
        ofDrawLine(ofGetWidth()*ofNoise(time*0.3*(i+1)/2), ofGetHeight()*ofNoise(time*0.3*(i+1)/2), ofGetWidth()* ofNoise(time*0.2*(i+1)/2), yconst);
        heh = heh+ 0.005;
    }
}

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
