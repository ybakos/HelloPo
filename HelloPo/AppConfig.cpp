/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "HelloPoApp.h"

poObject *createObjectForID(uint uid) {
	return new HelloPoApp();
}

void setupApplication() {
    poRandSeed();
	applicationCreateWindow(0, WINDOW_TYPE_FULLSCREEN, "HelloPo", 100, 100, 1024, 768);
}

void cleanupApplication() {
    
}