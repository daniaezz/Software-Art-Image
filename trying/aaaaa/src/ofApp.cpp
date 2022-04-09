#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofSetColor(ofNoise(ofGetElapsedTimef())*ofGetWidth(), ofNoise(ofGetElapsedTimef()*0.3)*ofGetWidth(), ofNoise(ofGetElapsedTimef()*0.8)*ofGetWidth());
    
    for (int i=0; i<groupOfLines.size(); i++){
        groupOfLines[i].draw();
    }
    
    std::cout << "line: "<< groupOfLines.size() << endl;
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
    ofPoint pt;
    pt.set(x,y);
    line.addVertex(pt);
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    line.clear();}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    groupOfLines.push_back(line);
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
