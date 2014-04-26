/*	Created by Yong Bakos on 4/26/14.
 *	Copyright 2014 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"

class HelloPoApp : public poObject {
public:
	HelloPoApp();
	virtual ~HelloPoApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
};

