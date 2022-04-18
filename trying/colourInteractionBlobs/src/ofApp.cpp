#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor(227, 94, 103, 150);
    ofDrawCircle(300*ofNoise(ofGetElapsedTimef()*0.6)+ofGetWidth()/2, 300*ofNoise(ofGetElapsedTimef()*0.2)+ofGetHeight()/2, 100);
    ofSetColor(111   , 74   , 236    , 150);
    
    ofDrawCircle(300*ofNoise(ofGetElapsedTimef()*0.3)+ofGetWidth()/2, 300*ofNoise(ofGetElapsedTimef()*0.9)+ofGetHeight()/2, 100);
    
    ofSetColor(168   , 236   , 136, 150);
    
    ofDrawCircle(300*ofNoise(ofGetElapsedTimef()*0.5)+ofGetWidth()/2, 300*ofNoise(ofGetElapsedTimef()*0.4)+ofGetHeight()/2, 100);
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
