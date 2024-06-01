#include "GraphicalObject.h"

GraphicalObject::GraphicalObject(std::string texturePath)
{
    m_texture.loadFromFile(texturePath);
    m_sprite.setTexture(m_texture);
}
void GraphicalObject::setTexture(std::string texturePath)
{
    m_texture.loadFromFile(texturePath);
}
void GraphicalObject::setSprite()
{
    m_sprite.setTexture(m_texture);
}

sf::Texture GraphicalObject::getTexture()
{
    return m_texture;
}
void GraphicalObject::display(sf::RenderWindow &window)
{
    window.draw(m_sprite);
}