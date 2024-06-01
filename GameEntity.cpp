#include "GameEntity.h"

GameEntity::GameEntity(std::string texturePath, float x, float y, float speed)
{   
    m_texture.loadFromFile(texturePath);
    m_x = x;
    m_y = y;
    m_speed = speed;
}
void GameEntity::setPosition(float x, float y)
{
    m_x = x;
    m_y = y;
}
void GameEntity::display(sf::RenderWindow &window)
{
    m_sprite.setPosition(m_x, m_y);
    window.draw(m_sprite);
}