#pragma once
#include "Scene.h"
#include "Button.h"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include <vector>
#include "SceneSwitcher.h"
#include "Background.h"
#include "Gui.h"

class MainMenuScene : public Scene
{
public:
    MainMenuScene(sf::RenderWindow &, SceneSwitcher &);
    ~MainMenuScene();
    MainMenuScene(const MainMenuScene &) = delete;
    MainMenuScene(MainMenuScene &&) noexcept = delete;
    MainMenuScene &operator=(const MainMenuScene &) = delete;
    MainMenuScene &operator=(MainMenuScene &&) noexcept = delete;

    void handleEvents(const sf::Event &event) noexcept;
    void handleInput() noexcept;
    void update(const sf::Time) noexcept;
    void draw() const noexcept;

private:
    sf::RenderWindow &m_window;
    Background m_background;
    Gui m_gui;
    SceneSwitcher &m_sceneSwitcher;
};