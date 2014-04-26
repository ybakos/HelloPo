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
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "HelloPo", 100, 100, 1024, 768);
}

void cleanupApplication() {
}