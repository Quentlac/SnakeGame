//
// Created by quent on 17/10/2022.
//

#ifndef UNTITLED1_SNAKE_H
#define UNTITLED1_SNAKE_H

#include <vector>
#include "Case.h"
#include <SFML/Graphics.hpp>

class Snake {
public:
    Snake(int x, int y, int taille = 4);
    void move(int dx, int dy);
    void show(sf::RenderWindow& window) const;

private:
    void showCase(sf::RenderWindow& window, const Case& c, bool head = false) const;
    Case head;
    std::vector<Case> body;
};


#endif //UNTITLED1_SNAKE_H
