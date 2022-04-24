#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    ofNoFill();
//    for(int i = 0; i<10; i++){
//        ofPoint temp = ofPoint((cos(i)+pow(cos(60), 2))*ofGetWidth()/3-ofGetHeight()/3.5,(sin(i)+pow(sin(60), 2))*ofGetHeight()/3 );
//        vert.push_back(temp);
//    }
//
//    randx = ofRandom(50);
//    randy = ofRandom(50);

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  // drawing some shape
// -------------------------------------------------------------
    
//    float time = ofGetElapsedTimef();
//
//  if (fmod(time, 0) == 0){
//        rot += 45;
//    }
//    rot += 45;
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofRotateZDeg(rot);
//    x += ofGetElapsedTimef()*2;
//    ofDrawCircle(x, ofGetHeight()/2, 100);
//    ofNoFill();
//    for (int i =0; i<100; i++){
//        ofPoint temp = ofPoint(ofNoise(ofGetElapsedTimef()*0.6)*ofGetWidth()/2- ofGetWidth()/4, ofNoise(ofGetElapsedTimef()*0.09)*ofGetHeight()/2-ofGetHeight()/4);

//        vert.push_back(temp);
//    }
//
//    ofBeginShape();
//    for (int i =0; i<vert.size(); i++){
//        ofVertex(vert[i]);
//    }
//    ofEndShape();

// -------------------------------------------------------------
    
// trying to draw a swiggly circle
    
    //the below code gives a pulsing circle
//    float time = ofGetElapsedTimef();
//    for (int i = 0; i<360; i++){
//        ofDrawCircle(ofNoise(time)*cos(i)*ofGetWidth()/3, ofNoise(time)*sin(i)*ofGetHeight()/3, 10);
//    }
    
// -------------------------------------------------------------
    //swiggly circle attempt 2
    
    float time = ofGetElapsedTimef();
    
//    for(int i = 0; i<360*2; i++){
//        ofPoint temp = ofPoint((cos(i)+pow(sin(60), 2)+sin(i))*ofGetWidth()/3,(sin(i)+pow(sin(60), 2)+sin(i))*ofGetHeight()/3 );
//        vert.push_back(temp);
//    }
//
//    ofBeginShape();
//    for (int i = 0; i<vert.size(); i++){
//        ofVertex(vert[i]);
//    }
//    ofEndShape();
//    ofBeginShape();
//    for (int i = 0; i<vert.size(); i++){
//        ofVertex(vert[i]);
//    }
//    ofEndShape();
//

//--------------------------------------------------------------
    // attempt 3
    
//    for (int i = 0; i<360; i++){
//        ofDrawCircle(ofRandom(10)+cos(i)*ofGetWidth()/3, ofRandom(10)+sin(i)*ofGetHeight()/3, 5);
//    }
    
//    for (int i = 0; i<360; i++){
//        ofDrawCircle(ofNoise(time*ofRandom(50)*0.05)*10+cos(i)*ofGetWidth()/3, ofNoise(time*ofRandom(50)*0.7)*10+sin(i)*ofGetHeight()/3, 5);
//
//    }
//

//--------------------------------------------------------------
//    ATTEMPT 4
    
//    if (fmod(time, 2) == 0) {
        rot ++ ;
//    }
    
    ofRotateZDeg(rot/2);
    
    for (int i = 0; i<180; i++){
//        ofPoint temp = ofPoint(-1*ofGetWidth()/3*pow(sin(5*i), 2)+ 10, ofGetHeight()/3*-1*pow(sin(5*i), 2)+ 10);
//
//        vert.push_back(temp);

        ofDrawCircle(-cos(ofDegToRad(i))*ofGetWidth()/60*(pow(sin(5*ofDegToRad(i+rot)), 2)+ 20), ofGetHeight()/60*-sin(ofDegToRad(i))*(pow(sin(5*ofDegToRad(i+rot)), 2)+20), 3);
    }
    
    for (int i = 0; i<180; i++){
//        ofPoint temp = ofPoint(-1*ofGetWidth()/3*pow(sin(5*i), 2)+ 10, ofGetHeight()/3*-1*pow(sin(5*i), 2)+ 10);
//
//        vert.push_back(temp);

        ofDrawCircle(ofGetHeight()/60*-cos(ofDegToRad(i))*(pow(cos(5*ofDegToRad(i+rot)), 2)+20), -sin(ofDegToRad(i))*ofGetWidth()/60*(pow(cos(5*ofDegToRad(i+rot)), 2)+ 20), 3);
    }
    
    for (int i = 0; i < 180; i++){
        ofDrawCircle(cos(ofDegToRad(i))*ofGetWidth()/3, ofGetHeight()/3*sin(ofDegToRad(i)), 3);
    }
////
//    ofDrawCircle(cos(PI)*ofGetWidth()/3, ofGetHeight()/3*sin(PI), 10);
//    ofDrawCircle(cos(0)*ofGetWidth()/3, ofGetHeight()/3*sin(0), 10);
//    ofBeginShape();
//    for (int i = 0; i<vert.size(); i++){
//        ofVertex(vert[i]);
//    }
//    ofEndShape(TRUE);
    
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
