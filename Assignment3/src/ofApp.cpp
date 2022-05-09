#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //code adapted from http://openframeworks.kr/ofBook/chapters/intro_to_graphics.html
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofBackground(0);
    
    
    track2.load("2.1.mp3");
    track2.setLoop(TRUE);
    track2.play();
    track7.load("7.mp3");
    track7.setLoop(TRUE);
    track7.play();
    track8.load("8.mp3");
    track8.setLoop(TRUE);
    track8.play();
    track18.load("18.mp3");
    track18.setLoop(TRUE);
    track18.play();
    track23.load("23.4.mp3");
    track23.setLoop(TRUE);
    track23.play();
    
    
    track2.setVolume(0);
    track7.setVolume(0);
    track8.setVolume(0);
    track18.setVolume(0);
    track23.setVolume(0);
    
    drums.set(255);
    
    
    gui.setup();
    gui.add(snareDrum.setup("Snare Drum?", false));
    gui.add(bassSlider.setup("bass guitar", 0, 0, 100));
    gui.add(elaboratePianoSlider.setup("elaborate Piano", 0, 0, 100));
    gui.add(basePianoSlider.setup("base piano (soft)", 100, 0, 100));
    gui.add(drumToggle.setup("drums", false));
    
    //adds two circles to the vector to avoid errors
    for (int j  = 0; j < 360; j += 180 ){
        startCircle temp2;
        temp2.setup(time, cos(ofDegToRad(j))*ofGetHeight()/3,  sin(ofDegToRad(j))*ofGetHeight()/3, drums);
        circles2.push_back(temp2);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef();
    time7 = track7.getPositionMS();
    time8 = track8.getPositionMS();
    time18 = track18.getPositionMS();
    time23 = track23.getPositionMS();
    
    eee = fmod(time,5);
    
    //volume is based on the gui
    track2.setVolume(elaboratePianoSlider/10);
    track7.setVolume(basePianoSlider/10);
    track8.setVolume(bassSlider/10);
    
    //displays the snare drum effect depending on the beat of the sound if the bass sound is not playing and clears the array if bass is playing
    if(!snareDrum){
        individualSnares.clear();
    }
    
    if (snareDrum && time18/1000 >= arr18[index18] && bassSlider == 0){
        snareAlone tempSnare;
        tempSnare.setup(drums);
        individualSnares.push_back(tempSnare);
        
        index18++;
        if (index18>=16) {
            index18 = 0;
        }
    }
    
    if (snareDrum){
        track18.setVolume(1);
    } else{
        track18.setVolume(0);
    }
    
    if (drumToggle){
        track23.setVolume(1);
    } else{
        track23.setVolume(0);
        drums.set(255);
    }
    
    //displayes the base piano circles over time, the number of circles increases and decreases with the beat
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
            //decreases the number of circles on screen
            reverse = TRUE;
            waves*=2;
        }
        
        index7++;
        
        if (index7>=5) {
            index7 = 0;
        }

        for (int j  = 0; j < 360; j += waves ){
            startCircle temp2;
            temp2.setup(time, cos(ofDegToRad(j))*ofGetHeight()/3,  sin(ofDegToRad(j))*ofGetHeight()/3, drums);
            circles2.push_back(temp2);
        }
    }

    //displays the bass effect (shape in the middle of the screen) based on the beat of the sound
    if(time8/1000 >= arr8[index8]){
        targetPoints.clear();
        if (index8<=0){
            points.clear();
            for (int i = 0; i<360; i+=30){
                
                ofPoint temp;
                temp = ofPoint(i-ofGetHeight()/5,  ofRandom(50, 100) * sin(i*0.01*eee));
                points.push_back(temp);
            }
        } else {
            for (int i = 0; i < 360; i+=30){
                ofPoint tempPoint2 = ofPoint(i-ofGetHeight()/5,  ofRandom(50, bassSlider + 51) * sin(i*0.01*eee));
                targetPoints.push_back(tempPoint2);
            }
            
            for (int i = 0; i<targetPoints.size(); i++) {
                time = ofGetElapsedTimef();
                ofPoint updated = ofPoint(targetPoints[i]);
                
                updatedPoints.push_back(updated);
            }
            points.clear();
            
            for (int i = 0; i< updatedPoints.size(); i++){
                points.push_back(updatedPoints[i]);
            }
            updatedPoints.clear();
        }
        index8++;
        
        
        if(index8 >= 25 ){
            index8 = 0 ;
        }
    }
    
    //triggers snare effect
    if (track18.getVolume()>=0.01){
        snare = TRUE;
    } else{
        snare = FALSE;
    }

    //changes the colour of veerything every other drum beat and changes it to white in between
    if (time23/1000 >= arr23[index23] && drumToggle){
        

        if(fmod(index23, 2) == 0){
            drums.setHsb(ofRandom(250), 80, 250);

        }
        

        else{
            drums.set(255);
        }
        
        index23++;
        if (index23>=7){
            index23 = 0;
        }
    }

    //roatates the shape based on the value from the piano slider
    if (track2.getVolume()>=0.01){
        rotation+=elaboratePianoSlider/150;
        clearAlpha = 50;
    } else{
        clearAlpha = 255;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0, clearAlpha);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    gui.draw();
    ofFill();
    ofSetLineWidth(3);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZDeg(rotation);
    

    ofSetColor(drums);
    
    //draws the circles that are accompanied by the base piano sound
    if (track7.getVolume()>=0.01){
        for (int i = 0; i<circles2.size(); i++){
            circles2[i].draw();
        }
    }
    
    ofNoFill();
    
    //chnages the shape edges to be jaggered if the snare sound is playing and smooth if its not playing
    if (snare && track8.getVolume()>=0.01){
        for (int j  = 0; j < 360; j += waves ){
            ofPushMatrix();
            ofRotateZDeg(j);
            
        ofBeginShape();
        ofVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
        ofVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
        for(int i = 0; i<points.size(); i++){
            ofVertex(points[i]);
        }
        
        ofVertex(circles2[0].x, circles2[0].y);
        ofVertex(circles2[0].x, circles2[0].y);
        ofEndShape();
            
            ofPushMatrix();
            ofRotateZDeg(180);
            
            
            ofBeginShape();
            ofVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
            ofVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
            for(int i = 0; i<points.size(); i++){
                ofVertex(points[i]);
            }
            ofVertex(circles2[0].x, circles2[0].y);
            ofVertex(circles2[0].x, circles2[0].y);
            ofEndShape();
            ofPopMatrix();
        ofPopMatrix();
        }
    }else if(track8.getVolume()>=0.01){
        for (int j  = 0; j < 360; j += waves ){
            ofPushMatrix();
            ofRotateZDeg(j);
            
        ofBeginShape();
        ofCurveVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
        ofCurveVertex(circles2[circles2.size()/2].x, circles2[circles2.size()/2].y);
        for(int i = 0; i<points.size(); i++){
            ofCurveVertex(points[i]);
        }

        
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
    }
    
    //displays the snares if the bass is not playing
    for (int i = 0; i< individualSnares.size(); i++){
        individualSnares[i].draw();
        
        if (individualSnares[i].opacity<=0){
            individualSnares.erase(individualSnares.begin() + i);
        }
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

void startCircle::setup(float timey, float xco, float yco, ofColor color){
    initTime = timey;

    timeElapsed = 0;
    x = xco;
    y = yco;
    r = 0;
    bottomR = 3;
    opacity = 150;
    colour.set(color);

}

void startCircle::draw(){

    if(r <= 3){
        r++;
    }

    
    if(bottomR<=1000){
        bottomR++;
        opacity--;
    }

    ofDrawCircle(x, y, r);
    
    ofPushStyle();
    ofSetColor(colour, opacity);
    
    ofDrawCircle(x, y, bottomR);
    ofPopStyle();

}



snareAlone::snareAlone(){
    
}

void snareAlone::setup(ofColor color){
    for(int i = 0; i<360; i+=360/ofRandom(1, 10)){
        ofPoint temp = ofPoint(cos(ofDegToRad(i))*ofGetHeight()/3,  sin(ofDegToRad(i))*ofGetHeight()/3);
        randomPoints.push_back(temp);
    }
    colour = color;
    opacity = 100;
}

void snareAlone::draw(){
    ofSetColor(colour, opacity);
    opacity--;
    ofBeginShape();
    
    for (int i = 0; i<randomPoints.size(); i++) {
        ofVertex(randomPoints[i]);
    }
    ofEndShape(TRUE);
}

