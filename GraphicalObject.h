#include "SFML/Graphics.hpp" 

class GraphicalObject: public sf::Sprite 
{
protected:
sf::Texture m_texture;
sf::Sprite m_sprite;

public:
GraphicalObject();
GraphicalObject(std::string texturePath);
void setTexture(std::string texturePath);
void setSprite();
sf::Texture getTexture();
virtual void display(sf::RenderWindow &window);
};