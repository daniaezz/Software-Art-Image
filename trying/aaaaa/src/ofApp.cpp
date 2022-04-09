#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<groupOfLines.size(); i++){
        groupOfLines[i].update();
    }
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
    groupOfLines[index].addpts(x, y);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    line.clear();
    Lines tempLine;
    tempLine.setup();
    groupOfLines.push_back(tempLine);
    
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    index++;
//    groupOfLines.push_back(tempLine);
//    tempLine.setup();
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
Lines::Lines(){
    
};

void Lines::setup(){
    line.clear();
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Lines::addpts(float _x, float _y){
    ofPoint pt;
    pt.set(_x,_y);
    line.curveTo(pt);
//    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
   
}

void Lines::draw(){
    ofSetColor(color);
    line.draw();
}

void Lines::update(){
    for (auto &vert : line.getVertices()){
//        for (int deg = 0; deg < 360; deg++) {
        vert.x += ofRandom(-0.5,0.5);
        vert.y += ofRandom(-0.5,0.5);
//        }
        
    }
}
