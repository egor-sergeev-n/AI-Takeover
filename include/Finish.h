#pragma once

#include "Element.h"

class Finish : public Element {

public:

    Finish(const std::string &fileName1, const std::string &fileName);

    ~Finish();

    void setPosition();

    void update(sf::Time);

    void draw(sf::RenderWindow *window);

private:

    bool m_isReach; // Checking that Hero reach the finish

};