#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    intSliderGroup.setName("Distribution");
    intSliderGroup.add(intSlider1.set("Lines 1",395, 1, 500));
    intSliderGroup.add(intSlider2.set("Lines 2", 301, 1, 500));

    params.setName("Colors");
    params.add(color1.set("Lines 1", ofVec3f(116,96,160), ofVec3f(0,0,0), ofVec3f(255,255,255)));
    params.add(color2.set("Lines 2", ofVec3f(140,126,190), ofVec3f(0,0,0), ofVec3f(255,255,255)));
    
    mainGroup.add(intSliderGroup);//insert sliderGroup into the main group
    mainGroup.add(params);//insert params into the main group
    gui.setup(mainGroup);//insert main group into the gui
    
}

//--------------------------------------------------------------
void ofApp::update(){
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0,0,0);
    
   ofSetColor(color1->x,color1->y,color1->z);

    for(int i=0; i<intSlider1; i+=20){
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2+i, ofGetHeight()/2-300);
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2-i, ofGetHeight()/2-300);
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2+i, ofGetHeight()/2+300);
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2-i, ofGetHeight()/2+300);
    }
 
    ofSetColor(color2->x,color2->y,color2->z);
        
    for(int i=0; i<intSlider2; i+=20){
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2-400, ofGetHeight()/2+i);
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2-400, ofGetHeight()/2-i);
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2+400, ofGetHeight()/2+i);
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2+400, ofGetHeight()/2-i);
    }
   

    gui.draw();
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
