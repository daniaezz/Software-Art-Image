#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    float oop = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    float eee = fmod(time, 2);;
//    if (fmod(time,2)==0 and oop == 0){
//        eee = fmod(time, 2);
//        ofSleepMillis(200);
//        oop = 1;
//    } else if (oop == 1 and fmod(time,2)!=0){
//        eee = -fmod(time, 2);
//    }
//    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofRotate(time, 1, 0, 0);
    for (int i = 0; i<342; i+=1){
        
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){

        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }
        ofPopMatrix();

    ofPushMatrix();
    ofRotateZ(90);
    for (int i = 0; i<342; i+=1){
        
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){

        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }
        ofPopMatrix();

    
    
    
    ofPushMatrix();
    ofRotateZ(45);
    for (int i = 0; i<342; i+=1){
        
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){

        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }
        ofPopMatrix();
    
    ofPushMatrix();
    ofRotateZ(-45);
    for (int i = 0; i<342; i+=1){
        
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }

    
        ofPushMatrix();
        ofRotateZ(180);

    for (int i = 0; i<342; i+=1){

        ofDrawCircle(i-ofGetWidth()/3,  100 * -sin(i*0.01*eee), 3);
        ofDrawCircle(i-ofGetWidth()/3,  100 * sin(i*0.01*eee), 3);
//        ofDrawCircle(i-ofGetWidth()/3,  100 * -1 *sin(i*0.00874*fmod(time, 2)), 3);
    }
        ofPopMatrix();

    

    
    
    
//    for (int i = 0; i <400; i++){
////        ofDrawCircle(ofMap(cos(i)*ofGetWidth(), 0, 10, 0, ofGetWidth()), ofMap(sin(i), 0, 10, 0, ofGetWidth()), 10);
//
//        ofDrawCircle(cos(i*0.01*time)*ofGetWidth()/3+ofGetWidth()/2, sin(i*0.05)*ofGetHeight()/3+ofGetHeight()/2, 5);
//    }
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

//void ofSleepMillis(int millis){
//    if (oop == 0){
//        oop =1;
//    } else{
//        oop = 0;
//    }
//}
