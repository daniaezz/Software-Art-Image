#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<groupOfLines.size(); i++){
        groupOfLines[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<groupOfLines.size(); i++){
        groupOfLines[i].update();
        groupOfLines[i].draw();
       
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
    tempx = x;
    tempy = y;
    templine.setup(tempx, tempy);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    Lines templine;
//    Lines templine;
//    templine.setup(x, y);
//    groupOfLines.push_back(templine);
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    Lines templine;
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

void Lines::setup(float _x, float _y){
    colour.set(255);
    points.push_back(ofPoint(_x, _y));
    polyline.addVertex(ofPoint(_x, _y));
};

void Lines::update(){
    for(int i=0; i<points.size(); i++){
        polyline.addVertex(points[i]);
    }
};

void Lines::draw(){
    polyline.draw();
    std::cout << "value: " << points.size() << endl;
}
