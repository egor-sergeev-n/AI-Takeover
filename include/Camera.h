#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

typedef sf::Vector2<float> vector2f;

// Create camera view, which fallow Hero

class Camera {

private:

    sf::View view;
    vector2f center; // Position of Hero or near Hero

public:

    Camera();

    void handleEvent();

    void getHeroPosition();

    void update();

};