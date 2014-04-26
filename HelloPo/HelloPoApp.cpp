/*	Created by Yong Bakos on 4/26/14.
 *	Copyright 2014 __MyCompanyName__. All rights reserved.
 */

#include "HelloPoApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
HelloPoApp::HelloPoApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
HelloPoApp::~HelloPoApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void HelloPoApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void HelloPoApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void HelloPoApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void HelloPoApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
