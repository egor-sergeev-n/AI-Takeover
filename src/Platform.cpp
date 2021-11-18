#include "Platform.h"

Platform::Platform(const std::string &fileName1, const std::string &fileName) : Element(fileName1) {}

Platform::~Platform() {}

void Platform::getSize() {}

void Platform::setPosition() {}

void Platform::update(sf::Time) {}

void Platform::draw(sf::RenderWindow *window) {}
