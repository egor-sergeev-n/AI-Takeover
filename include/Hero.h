#pragma once

#include "Element.h"

// Class of Hero states
enum class State {STAY, RUN, JUMP, FALL, DIE, FINISH};

// Crate element Hero with his move
class Hero : public Element {

public:

    Hero(const std::string &fileName1, const std::string &fileName); // Create hero from file

    ~Hero();

    void setPosition();

    void handleInput(); // Call from Level and get event (keyboard button push)

    void move(); // Change speed if KeyboardPress::Left or Right

    void jump(); // Change speed if KeyboardPress::Up

    void getNearPlatform(); // Get platform position

    void checkCollision();

    void update(sf::Time);

    void draw(sf::RenderWindow *window);

private:

    bool m_direction; // right or left
    State stay;
};


