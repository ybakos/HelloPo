/*	Created by Yong Bakos on 4/26/14.
 *	Copyright 2014 __MyCompanyName__. All rights reserved.
 */

#include "HelloPoApp.h"
#include "poApplication.h"
#include "poCamera.h"
#include "poShapeBasics2D.h"
#include "Particle.h"

HelloPoApp::HelloPoApp() {
	addModifier(new poCamera2D(poColor::black));
    for (int i = 0; i < NUMBER_OF_PARTICLES; ++i) {
        Particle* p = new Particle();
        addChild(p);
    }
}

HelloPoApp::~HelloPoApp() {
}

void HelloPoApp::update() {
}

void HelloPoApp::draw() {
	
}

void HelloPoApp::eventHandler(poEvent *event) {
	
}

void HelloPoApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
