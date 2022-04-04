#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    gui.setup();
    gui.add(intSlider.setup("int slider", 64, 3, 64));
    gui.add(floatSlider.setup("float slider", 30.0, 0.0, 300.0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    float yey = 0.05;
    float xex = 0.03;
    ofSetLineWidth(8);
//    ofDrawLine(100, 100, 100, 300);
    for (int i = 0; i < 50; i++){

        float yconst = ofNoise(yey*time);
        float xconst = ofNoise(xex*time);
        ofSetColor(ofNoise(time)*300, yconst*300, xconst*300, 80);
        //        ofDrawCircle(mouseX, mouseY, 50);
        ofDrawLine(xconst*ofGetWidth(),ofGetHeight()*ofNoise(time*0.3*(i+1)/2), ofGetWidth()* ofNoise(time*0.2*(i+1)/2),yconst*ofGetHeight() );
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
//    ofDrawCircle(mouseX, mouseY, 50);
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
