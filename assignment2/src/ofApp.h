#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"

// -------------------------------------------------
class ofApp : public ofBaseApp {
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void resized(int w, int h);
    
    int groundRes;
    float groundSpeed;

    
    ofxBox2d box2d;
    ofPolyline groundLine;
    ofxBox2dEdge ground;
    
    vector <shared_ptr<ofxBox2dCircle> > circles;
    vector <shared_ptr<ofxBox2dRect> > boxes;

    ofPolyline groundLine2;
    ofxBox2dEdge ground2;
    
    ofPolyline groundLine3;
    ofxBox2dEdge ground3;
    
    ofColor color1;
    ofColor color2;
    ofColor color3; //background
    
    bool changeColors;
    bool changeSpeed;
    
    float k;
  
    
};
