#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    rows = 6;
    cols = 6;
//    groupOfShapes.clear();
    ofBackground(255);
//    ofSetCircleResolution(100);
    for( int i=1; i<rows-1; i++){
        for(int j=1; j<cols-1; j++){
            
            xedge = j*ofGetWidth()/cols;
            yedge = i*ofGetHeight()/rows;
            rr = ofGetWidth()/rows/2;
            xmid = xedge+rr;
            ymid = yedge+rr;
            
            Shape tempShape;
            tempShape.setup(xmid, ymid, xedge, yedge, rr );
            
            groupOfShapes.push_back(tempShape);
            
            std::cout << rr << endl;
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

//    for( int i=0; i<rows+1; i++){
//        for(int j=0; j<cols+1; j++){
//            ofNoFill();
//            ofSetColor(255);
//            ofSetLineWidth(5);
//
//            ofDrawRectangle(j*ofGetWidth()/cols, i*ofGetHeight()/rows, ofGetWidth()/cols, ofGetHeight()/rows);
//        }
//    }
    ofFill();
//    ofNoFill();
//    ofSetColor(255, 100, 79);
    for (int i = 0; i<groupOfShapes.size(); i++){
        groupOfShapes[i].draw();
//        std::cout <<"supposed to work"<<endl;
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
Shape::Shape(){
    
}

void Shape::setup(float _midx, float _midy, float _edgex, float _edgey, float r){
    type = (int)ofRandom(4);
    semi = (int)ofRandom(4);
    midx = _midx;
    midy = _midy;
    edgex = _edgex;
    edgey = _edgey;
    radius = r;
//    std::cout<<"type "<<type<<endl;
//    std::cout<<"semi "<<semi<<endl;
    colour.set(ofRandom(200, 255), ofRandom(150, 200), ofRandom(50));
}

void Shape::draw(){
    ofSetLineWidth(10);
    ofSetColor(colour);
    if(type == 0){
        ofDrawCircle(midx, midy, radius);
    } else if(type == 1){
        ofDrawRectangle(edgex, edgey, radius*2, radius*2);
    } else{
        if (semi == 0){
            //rect on left
            ofDrawCircle(midx, midy, radius);
            ofDrawRectangle(midx, edgey, radius, radius*2);
        } else if(semi == 1){
            //rect on right
            ofDrawCircle(midx, midy, radius);
            ofDrawRectangle(edgex, edgey, radius, radius*2);
        } else if(semi == 2){
//            rect on top
            ofDrawCircle(midx, midy, radius);
            ofDrawRectangle(edgex, edgey , radius*2, radius);
        } else{
            //rect on bottom
            ofDrawCircle(midx, midy, radius);
            ofDrawRectangle(edgex, midy, radius*2, radius);
        }
    }
}