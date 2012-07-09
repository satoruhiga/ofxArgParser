#include "testApp.h"
#include "ofAppGlutWindow.h"

#include "ofxArgParser.h"

//--------------------------------------------------------------
int main(int argc, const char** argv){
	
	ofxArgParser::init(argc, argv);
	
	ofAppGlutWindow window; // create a window
	// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);
	ofRunApp(new testApp()); // start the app
}
