#include "GraphicalObject.h"
#include <iostream>
GraphicalObject::GraphicalObject(std::string texturePath, sf::Vector2f position, bool is_repeat=false){
    m_texture.setRepeated(is_repeat);
    if(!m_texture.loadFromFile(texturePath)){
        std::cout << "Error loading texture" << std::endl;
    }
    m_sprite.setTexture(m_texture);
    this->setPosition(position);
}
void GraphicalObject::setTexture(std::string texturePath)
{
    if(!m_texture.loadFromFile(texturePath)){
        std::cout << "Error loading texture" << std::endl;
    
    }
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