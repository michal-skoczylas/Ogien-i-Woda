#include "SFML/Graphics.hpp" 

class GraphicalObject: public sf::Sprite 
{
protected:
sf::Texture m_texture;
sf::Sprite m_sprite;

public:
GraphicalObject();
GraphicalObject(std::string texturePath,sf::Vector2f position = sf::Vector2f(0,0),bool is_repeat = false);
void setTexture(std::string texturePath);
void setSprite();
sf::Texture getTexture();
virtual void display(sf::RenderWindow &window);
virtual bool collision(GraphicalObject *object)=0;
};