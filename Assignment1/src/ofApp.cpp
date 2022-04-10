#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    rows = 5;
    cols = 5;
    for (int i = 0; i<rows; i++ ){
        for(int j=0; j<cols; j++){
//            ofFill(0);
            ofNoFill();
            ofSetColor(255);
            ofSetLineWidth(5);
            
            ofDrawRectangle(j*ofGetWidth()/cols, i*ofGetHeight()/rows, ofGetWidth()/cols, ofGetHeight()/rows);
            if(j>0){
                prevx = (j-1)*ofGetWidth()/cols;
            } else{
                prevx =0;
            }
            
            if(i>0){
                prevy = (i-1)*ofGetHeight()/rows;
            } else{
                prevy =0;
            }
            
//            prevy = (j-1)*ofGetHeight()/cols;
            xco =(j*ofGetWidth()/cols);
            yco = (i*ofGetHeight()/rows);
            
            std::cout << "xco: " << xco << endl;
            std::cout << "yco: " << yco << endl;
            
            blob hehe;
            hehe.setup(xco, yco, prevx, prevy);
            hehe.draw();
            
        }
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

//--------------------------------------------------------------
blob::blob(){
    
};

void blob::setup(float _x, float _y, float _prevx, float _prevy){
    shape.clear();
    ofSetLineWidth(3);
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
    noPoints = (int)ofRandom(3, 5);
    for (int i=0; i<noPoints; i++){
        shape.addVertex(ofRandom(_prevx, _x), ofRandom(_prevy, _y));
    }
}

void blob::draw(){
    ofSetColor(color);
    shape.draw();
    
    
}
