//
// Created by quent on 17/10/2022.
//

#include "Snake.h"

Snake::Snake(int x, int y, int taille)
: head(x, y) {

    for(int i = 0; i < taille; i++) {
        this->body.push_back(Case(x, y));
    }
}

void Snake::move(int dx, int dy) {
    // On décale tout
    for(int i = 0; i < this->body.size() - 1; i++) {
        this->body[i] = this->body[i + 1];
    }

    this->body[this->body.size() - 1] = this->head;
    this->head = Case(this->head.getX() + dx, this->head.getY() + dy);

}

void Snake::showCase(sf::RenderWindow& window, const Case &c, bool head) const {
    sf::RectangleShape rect(sf::Vector2f(80, 80));
    if(head) rect.setFillColor(sf::Color::Red);
    rect.setOutlineColor(sf::Color::Black);
    rect.setOutlineThickness(5);
    rect.setPosition(c.getX() * 80, c.getY() * 80);

    window.draw(rect);
}

void Snake::show(sf::RenderWindow& window) const {

    for(Case c : this->body) {
        showCase(window, c);
    }

    showCase(window, this->head, true);

}