#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    float oop = 0;
    ofSetBackgroundColor(0);
    soundPlayer.setLoop(TRUE);
//    soundPlayer3.setLoop(TRUE);
//    soundPlayer5.setLoop(TRUE);
//
    soundPlayer.load("7.mp3");
//    soundPlayer3.load("22.mp3");
//    soundPlayer5.load("10.mp3");h
//
    soundPlayer.play();

}

//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef();
    
    float time7 = soundPlayer.getPositionMS();
    //increases the number of waves according to track 7
    if (time7/1000 >= arr7[no7]){
        
        if (!yes && waves>180){
            yes = TRUE;
            
        }
        
        if (waves>20 && yes) {
            waves/=2;
            smth++;
//            rot = 1.5;
            
//            tempWave*=-1;
        } else{
            waves *= 2;
            yes = FALSE;
            smth--;
//            tempWave*=-1;
        }
        no7++;
        if (no7 >= 5){
//            no77++;
            no7 = 0;
            
        }
        
//        float percentageToThird = (time-arr7[no7]*no77)/(arr7[no7+1] - arr7[no7]);
//        // (thirdChangeTime - secondChangeTime);
//
//        tempCol = colour;
//
//        newCol.setHsb(ofRandom(250), 80, 250);
//
//        colour = newCol.getLerped(tempCol, percentageToThird);
        
        colour.setHsb(ofRandom(250), 80, 250);
        
        ofLog(OF_LOG_NOTICE, "the wave is " + ofToString(waves));
        ofLog(OF_LOG_NOTICE, "the time is " + ofToString(time7/1000));
        
//        ofLog(OF_LOG_NOTICE, "7 and 77 " + ofToString(no7)+ " " + ofToString(no77));
        
    }
//    rot = 1;
}

//---------------------------------------------------------------
void ofApp::draw(){
    ofSoundUpdate();
    
//    ofTranslate(ofGetWidth()/4, ofGetHeight()/4);
//    ofScale(0.5);
//    ofLog(OF_LOG_NOTICE, "the time is " + ofToString(time));
    float sec = 4;
    amount = 90*smth;
    
    ofSetColor(colour);
    

//    ofTranslate(ofGetWidth(), ofGetHeight());
//    if (fmod(time, 6.73)<=0.01){
//        if (yes and waves>45) {
//            waves/=2;
////            tempWave*=-1;
//        } else{
//            waves *= 2;
//            yes = FALSE;
////            tempWave*=-1;
//        }
//        if (!yes and waves>=180){
//            yes = TRUE;
//        }
//        ofLog(OF_LOG_NOTICE, "the wave is " + ofToString(waves));
//    }
//
//    if (waves>=20){
//        waves /= 2;
//    } else{
//        waves *= 2;
//    }
//    if (fmod(time, 4.375)<=0.01) {
//        tempWave++;
//        waves= fmod(tempWave, 4);
//    }
//    ofLog(OF_LOG_NOTICE, "the wave is " + ofToString(waves));

//    if (time>2){
//        soundPlayer2.setLoop(TRUE);
//        soundPlayer2.play();
    
//    }
//    if (fmod(time, 4)<=0.01){
//        tempWave = tempWave*-1;
//    }
    
    float animationTime = fmod(time, sec*2); // this makes it go the other direction
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofRotateZDeg(pow(tempWave,rot));
    


    if (animationTime<=sec){
        eee = fmod(time,sec);
//        soundPlayer.play();
    } else{
        eee = -sec+fmod(time, sec);
//        soundPlayer.stop();
    }

    
    for (int j  = 0; j < 360; j += waves ){
        ofPushMatrix();
        ofRotateZDeg(j);
        for (int i = 0; i<amount; i++){
            ofDrawCircle(i-1023/3,  100 * sin(i*0.01*eee), 3);
            ofDrawCircle(i-1023/3,  100 * -sin(i*0.01*eee), 3);
        }

        
            ofPushMatrix();
            ofRotateZDeg(180);

        for (int i = 0; i<amount; i++){
            ofDrawCircle(i-1023/3,  100 * -sin(i*0.01*eee), 3);
            ofDrawCircle(i-1023/3,  100 * sin(i*0.01*eee), 3);
        }
            ofPopMatrix();
        ofPopMatrix();
        
    }
    tempWave++;
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
//    soundPlayer2.play();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
//    soundPlayer2.stop();
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

Sine::Sine(){
}

void Sine::setup(float timey){
    opacity = 0;
    timeStamp = timey;
}
