#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0);
    for (int i = 0; i < 360; i+=10){
//        ofDrawCircle(cos(ofDegToRad(i))*ofGetWidth()/3, sin(ofDegToRad(i))*ofGetHeight()/3, 10);
        
        ofPoint temp = ofPoint(cos(ofDegToRad(i))*ofGetWidth()/3, sin(ofDegToRad(i))*ofGetHeight()/3);
        
        vert.push_back(temp);
//        ofLog(OF_LOG_NOTICE, "the distance is " + ofToString(temp));
        
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    rot ++;
    float time = ofGetElapsedTimef();
    
    if(exp<=45){
        centre = ofPoint(ofNoise(time*ofNoise(0.8))*ofGetWidth() - ofGetWidth()/2, ofNoise(time*ofNoise(0.4))*ofGetHeight() - ofGetHeight()/2);
    }
    else{
        centre = ofPoint(ofNoise(time*ofNoise(0.8))*ofGetWidth()/2 - ofGetWidth()/3.5, ofNoise(time*ofNoise(0.4))*ofGetHeight() - ofGetHeight()/2);
    }
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofFill();
    ofSetLineWidth(5);
    
    
    
    ofDrawCircle(centre, 10);

    
    ofNoFill();
    
    
   
//    ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    
    
    ofBeginShape();
    ofSetColor(168   , 236   , 136, opacity); //green
    for (int i = 0; i<vert.size(); i++){
        dist = sqrt(pow(vert[i].x-centre.x, 2)+pow(vert[i].y-centre.y, 2));
//        if ()
        if (dist<100) {
//            ofSetLineWidth(5);
            
            opacity +=15;
            float now = ofGetElapsedTimef();
//            float frame = ofGetFrameNum();
            
            if (vert[i].y>=0){
                vert[i].y += 1;
            } else{
                vert[i].y -= 1;
            }
            
            if (vert[i].x>=0){
                vert[i].x +=1;
            } else{
                vert[i].x -=1;
            }

        } else{
            vert[i].x = cos(ofDegToRad(i*10))*ofGetWidth()/3;
            vert[i].y = sin(ofDegToRad(i*10))*ofGetHeight()/3;
            if (opacity>25){
                opacity -- ;
            }
        }
        ofCurveVertex(vert[i]);
    }
//    ofVertex (vert[vert.size()]);
    ofEndShape(TRUE);
    
    
    ofSetColor(111   , 74   , 236    , opacity); //blue
    ofBeginShape();
    
    for (int i = 0; i<vert.size(); i++){
        dist = sqrt(pow(vert[i].x-centre.x, 2)+pow(vert[i].y-centre.y, 2));
//        if ()
        if (dist<100) {
//            ofSetLineWidth(5);
            opacity +=15;
            float now = ofGetElapsedTimef();
//            float frame = ofGetFrameNum();
            
            if (vert[i].y>=0){
                vert[i].y += 5;
            } else{
                vert[i].y -= 5;
            }
            
            if (vert[i].x>=0){
                vert[i].x +=5;
            } else{
                vert[i].x -=5;
            }

        }
        
        ofCurveVertex(vert[i]);
    }
    ofEndShape(TRUE);

    ofSetColor(227, 94, 103, opacity); //red
    
    ofBeginShape();
    
    for (int i = 0; i<vert.size(); i++){
        dist = sqrt(pow(vert[i].x-centre.x, 2)+pow(vert[i].y-centre.y, 2));
//        if ()
        if (dist<100) {
//            ofSetLineWidth(5);
            opacity +=15;
            float now = ofGetElapsedTimef();
//            float frame = ofGetFrameNum();
            
            if (vert[i].y>=0){
                vert[i].y += 3;
            } else{
                vert[i].y -= 3;
            }
            
            if (vert[i].x>=0){
                vert[i].x +=3;
            } else{
                vert[i].x -=3;
            }

        }
        
        ofCurveVertex(vert[i]);
    }
    
    
    ofEndShape(TRUE);
    ofFill();
    if (swigg){
//        ofBeginShape();
//        if(exp>45){
        ofSetColor(249  ,  218  ,  129);
            for (int i = 0; i<360; i++) {
                ofDrawCircle(-cos(ofDegToRad(i))*ofGetWidth()/exp*(pow(sin(5*ofDegToRad(i+rot)), 2)+ 20), ofGetHeight()/exp*-sin(ofDegToRad(i))*(pow(sin(5*ofDegToRad(i+rot)), 2)+20), 3);
            }
        
        ofPushMatrix();
        ofRotateZDeg(rot);
        ofSetColor(242  ,  191  ,  186 );
        for (int i = 0; i<180; i++) {
            ofDrawCircle(cos(ofDegToRad(i))*ofGetWidth()/exp*(pow(cos(5*ofDegToRad(i+rot)), 2)+ 20), ofGetHeight()/exp*sin(ofDegToRad(i))*(pow(cos(5*ofDegToRad(i+rot)), 2)+20), 5);
        }
        ofPopMatrix();
//        }
//        ofEndShape(TRUE);
    }
    
    ofPopMatrix();
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
    if (exp>45) {
        exp--;
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    swigg = TRUE;
    vert.clear();
    opacity = 150;
    for (int i = 0; i < 360; i+=10){
//        ofDrawCircle(cos(ofDegToRad(i))*ofGetWidth()/3, sin(ofDegToRad(i))*ofGetHeight()/3, 10);
        
        ofPoint temp = ofPoint(-cos(ofDegToRad(i))*ofGetWidth()/60*(pow(sin(5*ofDegToRad(i+rot)), 2)+ 20), ofGetHeight()/60*-sin(ofDegToRad(i))*(pow(sin(5*ofDegToRad(i+rot)), 2)+20));
        
        swiggles.push_back(temp);
//        ofLog(OF_LOG_NOTICE, "the distance is " + ofToString(temp));
        
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    swigg  = FALSE;
    exp = 60;
    swiggles.clear();
    vert.clear();
    opacity = 25;
    
    for (int i = 0; i<360; i+=10){
        
        ofPoint temp = ofPoint(cos(ofDegToRad(i))*ofGetWidth()/3, sin(ofDegToRad(i))*ofGetHeight()/3);
        
        vert.push_back(temp);
    }
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
