#include "PauseScene.h"
#include <iostream>

PauseScene::PauseScene(sf::RenderWindow &w,
                       SceneSwitcher &scn_switcher) : m_window(w),
                                                      m_background("../Files/PauseBackground.png"),
                                                      m_gui(w),
                                                      m_sceneSwitcher(scn_switcher)
{
    sf::View view = m_window.getView();
    view.setCenter(sf::Vector2f(m_window.getSize() / 2u));
    m_window.setView(view);

    m_gui.addButton("Continue");
    m_gui.addButton("To Main Menu");
    m_gui.addButton("Exit");
}

PauseScene::~PauseScene()
{
}

void PauseScene::handleEvents(const sf::Event &event) noexcept
{
    if (event.type == sf::Event::MouseButtonPressed)
    {
        if (event.mouseButton.button == sf::Mouse::Left)
        {
            switch (m_gui.getPressedButton())
            {
            case 0:
                m_sceneSwitcher.switchTo(SceneType::GAMEPLAY);
                break;

            case 1:
                m_sceneSwitcher.switchTo(SceneType::MAIN_MENU);
                break;

            case 2:
                m_window.close();
                break;

            default:
                break;
            }
        }
    }
}

void PauseScene::handleInput() noexcept
{
}

void PauseScene::update(const sf::Time dt) noexcept
{
}

void PauseScene::draw() const noexcept
{
    m_window.draw(m_background);
    m_window.draw(m_gui);
}