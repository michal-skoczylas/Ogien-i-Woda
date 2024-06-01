#include "GraphicalObject.h"

class GameEntity: public GraphicalObject
{
private:
float m_x;
float m_y;
float m_speed;

public:
GameEntity(std::string texturePath, float x, float y, float speed);
void setPosition(float x, float y);
void display(sf::RenderWindow &window) override;
};