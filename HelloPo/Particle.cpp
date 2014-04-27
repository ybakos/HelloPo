#include "Particle.h"
#include "poShapeBasics2D.h"

Particle::Particle() {
    velocity.set(poRand(-1, 1), poRand(-1, 1), 0);
    if (velocity.getLength() < 0.3) velocity *= 0.3 / velocity.getLength();
    rotationSpeed = poRand(-1.0, 1.0);
    star = new poStarShape(poRand(10, 50), poRand(10, 50), poRand(5, 10), 10);
    star->fillColor = poColor::random();
    star->alpha = 0.75;
    star->setAlignment(PO_ALIGN_CENTER_CENTER);
    float defaultScale = poRand(0.4, 1);
    star->scale.set(defaultScale, defaultScale, 1);
    star->scaleTween.setTweenFunction(PO_TWEEN_QUAD_OUT_FUNC);
    star->scaleTween.setRepeat(PO_TWEEN_REPEAT_PINGPONG, 1);
    star->scaleTween.setDuration(1);
    star->addEvent(PO_MOUSE_DOWN_EVENT, this, "particle clicked");
    addChild(star);
    float x = poRand(100, 700);
    float y = poRand(200, 500);
    position.set(x, y, 0);
}

void Particle::update() {
    position += velocity;
    if (position.x > 750 || position.x < 50) velocity.x *= -1;
    if (position.y > 750 || position.y < 50) velocity.y *= -1;
    rotation += rotationSpeed;
}

void Particle::eventHandler(poEvent* event) {
    if (event->message == "particle clicked") {
        if (star->scaleTween.isRunning()) return;
        star->scaleTween.set(poPoint(2, 2, 1));
        star->scaleTween.start();
    }
}
