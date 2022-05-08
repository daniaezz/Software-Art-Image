#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    track7.load("7.mp3");
    track7.setLoop(TRUE);
    track7.play();
    track8.load("8.mp3");
    track8.setLoop(TRUE);
    track8.play();
    track9.load("9.mp3");
    track9.setLoop(TRUE);
//    track9.play();
    track15.load("23.3.mp3");
    track15.setLoop(TRUE);
//    track15.play();

 
 

}

//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef();
    time7 = track7.getPositionMS();
    time8 = track8.getPositionMS();
    eee = fmod(time,5);
    
    if(time7/1000 >= arr7[index7]){
        points.clear();
            circles.clear();
            circles2.clear();
        if(reverse && waves>180){
            reverse = FALSE;
        }
        
        if(waves>20 && !reverse){
            waves/=2;
        } else{
            reverse = TRUE;
            waves*=2;
        }
        
        index7++;
        
        if (index7>=5) {
            index7 = 0;
//            index7Inc++;
        }

        for (int j  = 0; j < 360; j += waves ){
            startCircle temp2;
            temp2.setup(time, cos(ofDegToRad(j))*ofGetHeight()/3,  sin(ofDegToRad(j))*ofGetHeight()/3);
            circles2.push_back(temp2);
        }

//        ofLog(OF_LOG_NOTICE, "the wave is " + ofToString(waves));
//        ofLog(OF_LOG_NOTICE, "circles " + ofToString(circles2.size()));
//
        
        
        
        
        }

    if(time8/1000 >= arr8[index8]){
        targetPoints.clear();
        if (index8<=0){
            points.clear();
//            ofLog(OF_LOG_NOTICE, ofToString(index8));
            for (int i = 0; i<360; i+=30){
                
                ofPoint temp;
                temp = ofPoint(i-ofGetHeight()/5,  ofRandom(50, 150) * sin(i*0.01*eee));
                points.push_back(temp);
            }
//            index8++;
        } else {
            for (int i = 0; i < 360; i+=30){
                ofPoint tempPoint2 = ofPoint(i-ofGetHeight()/5,  ofRandom(50, 150) * sin(i*0.01*eee));
                targetPoints.push_back(tempPoint2);
            }
            
            for (int i = 0; i<targetPoints.size(); i++) {
                time = ofGetElapsedTimef();
                
//                float percentage = time-arr8[index8]/(arr8[index8+1]-arr8[index8]);
//            ofPoint updated = ofPoint(ofLerp(points[i].x, newPoints[i].x, 0.5), ofLerp(points[i].y, newPoints[i].y, 0.5));
                ofPoint updated = ofPoint(targetPoints[i]);
                
                updatedPoints.push_back(updated);
//                ofLog(OF_LOG_NOTICE, ofToString(percentage));
            }
            points.clear();
//                points = updatedPoints;
            
            for (int i = 0; i< updatedPoints.size(); i++){
                points.push_back(updatedPoints[i]);
            }
            updatedPoints.clear();
//                ofLog(OF_LOG_NOTICE, ofToString(updatedPoints.size()));
//            index8++;
        }
        index8++;
        ofLog(OF_LOG_NOTICE, ofToString(index8));
        
        
        if(index8 >= 25 ){
            index8 = 0 ;
//            index8Inc++;
//            ofLog(OF_LOG_NOTICE, ofToString(index8));
        }
    }
    

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetLineWidth(3);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

    for (int i = 0; i<circles2.size(); i++){
        circles2[i].draw();
    }
    
    ofSetColor(210);
    ofNoFill();
    
    
    for (int j  = 0; j < 360; j += waves ){
        ofPushMatrix();
        ofRotateZDeg(j);
        
    ofBeginShape();
    ofCurveVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
    ofCurveVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
    for(int i = 0; i<points.size(); i++){
        ofCurveVertex(points[i]);
    }
    
    // rip lerp function idk how to use you
//    for(int i = 0; i<points.size(); i++){
//        if(index8>1){
//            ofCurveVertex(points[i].x, ofLerp(points[i].y, targetPoints[i].y, 0.5));
//        } else{
//            ofCurveVertex(points[i]);
//        }
//    }
    
    
    ofCurveVertex(circles2[0].x, circles2[0].y);
    ofCurveVertex(circles2[0].x, circles2[0].y);
    ofEndShape();
        
        ofPushMatrix();
        ofRotateZDeg(180);
        
        
        ofBeginShape();
        ofCurveVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
        ofCurveVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
        for(int i = 0; i<points.size(); i++){
            ofCurveVertex(points[i]);
        }
        ofCurveVertex(circles2[0].x, circles2[0].y);
        ofCurveVertex(circles2[0].x, circles2[0].y);
        ofEndShape();
        ofPopMatrix();
    ofPopMatrix();
    
    }
//    points.clear();
    
    
    
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
startCircle::startCircle(){
    
}

void startCircle::setup(float timey, float xco, float yco){
    initTime = timey;
    
//    timeElapsed = initTime - ofGetElapsedTimef();
    timeElapsed = 0;
    x = xco;
    y = yco;
    r = 0;
    bottomR = 3;
    opacity = 150;
    colour.setHsb(ofRandom(250), 80, 250);

}

void startCircle::draw(){
    ofSetColor(255);
    if(r <= 10 && !display){
        r++;
    }
//    else if(r >=5 && timeElapsed<=2 and timeElapsed>1.5){
//        r--;
//    }
    
    if(bottomR<=1000 && !display){
        bottomR++;
        opacity--;
    }
//    ofSetColor(255, 255, 255);
    ofDrawCircle(x, y, r);
    
    ofSetColor(255,255,255, opacity);
    ofDrawCircle(x, y, bottomR);
    
//    display = TRUE;
    
    
    
}




//notes to self: remove the thing in the very very beiging meaning index 0 and add one to the end and let the other  points take the values of the point before them so that the curve looks like its moving in a smooth manner. i hope this works ughfuhgufhguhrnughruedkjghnerukdlhjerimdklfjmewidkxlhfjmcilk
