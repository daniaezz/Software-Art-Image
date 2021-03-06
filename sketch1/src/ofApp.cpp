#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //Some of this code was adapted from https://www.youtube.com/watch?v=XbiAGyodS3U&t=560s&ab_channel=LewisLepton
    
    ofBackground(255);
    gui.setup();
    gui.add(lines.setup("numb of lines", 30, 1, 1000));
    gui.add(opacity.setup("opacity of line", 80, 20, 255));
    gui.add(thick.setup("line thickness", 3.0, 0.1, 15.0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    float yconst = 0.1;
    float xconst = 0.03;
    ofSetLineWidth(thick);
    yvar = ofNoise(yconst*time);
    xvar = ofNoise(xconst*time);

    for (int i = 0; i < lines; i++){
        ofDrawLine(xvar*ofGetWidth(),ofGetHeight()*ofNoise(time*0.3*(i+1)/2), ofGetWidth()* ofNoise(time*0.2*(i+1)/2),yvar*ofGetHeight() );
    }
    
    ofSetColor(ofNoise(time)*300, yvar*300, xvar*300, opacity);
    gui.draw();
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
