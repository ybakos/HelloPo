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
    dot = new poOvalShape(300, 300, 100);
    x = getWindowWidth() / 2;
    y = getWindowHeight() / 2;
    dot->position.set(x, y, 0);
    dot->fillColor = poColor::magenta;
    
    poOvalShape* speck = new poOvalShape(100, 100, 50);
    speck->position.set(0, 0, 0);
    speck->fillColor = poColor::random();
    dot->addChild(speck);
    addChild(dot);
    for (int i = 0; i < 200; ++i) {
        Particle* p = new Particle();
        addChild(p);
    }
}

HelloPoApp::~HelloPoApp() {
    delete dot;
}

void HelloPoApp::update() {
    dot->position.set(++x, ++y, 0);
}

void HelloPoApp::draw() {
	
}

void HelloPoApp::eventHandler(poEvent *event) {
	
}

void HelloPoApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
