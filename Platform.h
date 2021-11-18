#pragma once

#include "Element.h"

class Platform : public Element {

    Platform(const std::string &fileName1, const std::string &fileName);

    ~Platform();

    void getSize();

    void setPosition();

    void update(sf::Time);

    void draw(sf::RenderWindow *window);

};