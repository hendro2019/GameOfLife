#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Cell.h"

int main(int argc){
    sf::RenderWindow window(sf::VideoMode(800, 600), "Conways Game of Life");

    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            else if (event.type == sf::Event::MouseButtonPressed) {

            }
        }
    }
}