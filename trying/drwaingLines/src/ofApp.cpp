#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//  if (nPts > 1) {
//    for (int i = 0; i < nPts - 1; i++) {
//      ofDrawLine(pts[i].x, pts[i].y, pts[i + 1].x, pts[i + 1].y);
//    }
//  }
    for( int i = 0; i < 5; i++) {
        path.arc( i * 50 + 20, i * 50 + 20, i * 40 + 10, i * 40 + 10, 0, 360); // creates a new ofSubPath
        path.close();
    }
//  polyline.draw();
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
//  if (nPts < MAXPOINTS) {
//    pts[nPts].x = x;
//    pts[nPts].y = y;
//    nPts++;
//  }
  
  polyline.addVertex(ofPoint(x, y));
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  polyline.addVertex(ofPoint(x, y));
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
//  nPts = 0;
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
