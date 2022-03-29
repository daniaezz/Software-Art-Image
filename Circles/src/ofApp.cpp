#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    w1 = ofRandomWidth();
    h1 = ofRandomHeight();
    w2 = ofRandomWidth();
    h2 = ofRandomHeight();
    w3 = ofRandomWidth();
    h3 = ofRandomHeight();
    r1 = ofRandom(30, 200);
    r2 = ofRandom(30, 200);
    r3 = ofRandom(30, 200);
    o1 = ofRandom(50, 150);
    o2 = ofRandom(50, 150);
    o3 = ofRandom(50, 150);
    ofSetBackgroundColor(250, 224, 213);
}

//--------------------------------------------------------------
void ofApp::update(){
    if (r1<600){
        r1++;
    }
    if (r2<600){
        r2++;
    }
    if (r3<600){
        r3++;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(145, 126, 170, o1);
    ofDrawCircle(w1, h1, r1);
    ofSetColor(101, 88, 119, o2);
    ofDrawCircle(w2, h2, r2);
    ofSetColor(200,148,186, o3);
    ofDrawCircle(w3, h3, r3);
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
