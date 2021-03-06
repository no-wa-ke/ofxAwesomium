#pragma once

#include "ofMain.h"
#include <Awesomium/WebCore.h>


class testApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	void exit();
	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	
	
private:
	Awesomium::WebView* webView;
	Awesomium::WebCore* webCore;
	
	int webTexWidth;
	int webTexHeight;
	ofTexture webTex;
};
