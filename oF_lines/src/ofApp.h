#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Circle.hpp"//allows access circle class

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //ofPolyline myLine;
    //-------------------
//    ofxPanel gui;
    
//    ofxIntSlider intSlider;
//    ofxFloatSlider floatSlider;
//
//    ofxToggle toggle;//toggles between True and False
//    ofxButton button;
//    ofxLabel label;
//
//    //allows user to type int, float, text values instead of using a slider
//    ofxIntField intField;
//    ofxFloatField floatField;
//    ofxTextField textField;
//
//    //vector sliders
//    ofxVec2Slider vec2Slider;
//    ofxVec3Slider vec3Slider;
//    ofxVec4Slider vec4Slider;
    
   //-------------------
    ofxPanel gui;
    ofParameterGroup intSliderGroup;
    ofParameter<int> intSlider1;
    ofParameter<int> intSlider2;
  
    ofParameterGroup floatSliderGroup;
    ofParameter<float> floatSlider1;
    ofParameter<float> floatSlider2;

    
    ofParameterGroup params;
    ofParameter<ofVec3f> color1;
    ofParameter<ofVec3f> color2;
    
    //Circle circle;
    ofParameterGroup mainGroup;
    
    
    
		
};
