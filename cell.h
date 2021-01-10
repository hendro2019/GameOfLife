#ifndef CELL_H
#define CELL_H

#include <SFML/Graphics.hpp>
#include <vector>

class Cell {
    public:
        Cell(int i, int j, int w);
        ~Cell();
        bool isAlive() {return this->alive;}
        int getX() {return x;}
        int getY() {return y;}
        void draw(sf::RenderWindow& window);
        void setPosition(sf::Vector2f pos);
        void kill();
        void born();
        void update(sf::RenderWindow &window, sf::Clock &clockActivating, sf::Time &elapsedActivated);
    private:
        sf::RectangleShape shape;
        bool alive;
        int x;
        int y;
        int cellSize;


};
#endif
