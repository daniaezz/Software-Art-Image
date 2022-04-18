#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    float oop = 0;
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float time = ofGetElapsedTimef();
    float eee = fmod(time, 3.94);
    float animationTime = fmod(time, 3.94*2);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    if (animationTime<=3.94){
        eee = fmod(time,3.94);
    } else{
        eee = -3.94+fmod(time, 3.94);
    }
    
    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
    }
        ofPopMatrix();

    ofPushMatrix();
    ofRotateZ(90);
    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
    }
        ofPopMatrix();

    
    
    
    ofPushMatrix();
    ofRotateZ(45);
    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
    }
        ofPopMatrix();
    
    ofPushMatrix();
    ofRotateZ(-45);
    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
    }
        ofPopMatrix();

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

