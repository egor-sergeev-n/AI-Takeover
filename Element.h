#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

typedef sf::Vector2<float> vector2f;

class Level {}; // Only for compiling

//Parent class for elements of game (hero, platforms, finish)
class Element {

public:

    Element(const std::string &fileName);

    virtual ~Element();

    virtual void setPosition(); // Set start position of hero

    void getPosition(); // Get current position

    void getSpeed();

    virtual void update(sf::Time);

    virtual void draw(sf::RenderWindow *window);

private:

    sf::Sprite m_sprite;
    vector2f m_speed;
    Level* m_level;

};