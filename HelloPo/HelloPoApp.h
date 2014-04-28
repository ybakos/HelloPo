/*	Created by Yong Bakos on 4/26/14.
 *	Copyright 2014 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"

class poOvalShape;

class HelloPoApp : public poObject {
public:
    static const int NUMBER_OF_PARTICLES = 6000;
    
	HelloPoApp();
	virtual ~HelloPoApp();
    virtual void update();
    virtual void draw();
    virtual void eventHandler(poEvent *event);
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());

};

