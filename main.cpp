#include <iostream>
#include <SFML/Graphics.hpp>
#include "Snake.h"
#include <sys/time.h>

using namespace sf;

int main(){
    RenderWindow window(VideoMode(800, 800), "Snake");

    Snake snake(3, 5, 10);

    int direction = 1;
    timeval old_timer;
    gettimeofday(&old_timer, NULL);

    while(window.isOpen()) {

        Event e;
        while(window.pollEvent(e)) {
            if(e.type == Event::Closed) {
                window.close();
            }
        }

        if(Keyboard::isKeyPressed(Keyboard::Up)) direction = 1;
        if(Keyboard::isKeyPressed(Keyboard::Right)) direction = 2;
        if(Keyboard::isKeyPressed(Keyboard::Down)) direction = 3;
        if(Keyboard::isKeyPressed(Keyboard::Left)) direction = 4;

        window.clear(Color::Black);
        snake.show(window);

        timeval timer;
        gettimeofday(&timer, NULL);

        long int diff = (timer.tv_sec * 1000 + timer.tv_usec / 1000) - (old_timer.tv_sec * 1000 + old_timer.tv_usec / 1000);

        if(diff > 500) {
            old_timer = timer;

            if(direction == 1) snake.move(0, -1);
            if(direction == 2) snake.move(1, 0);
            if(direction == 3) snake.move(0, 1);
            if(direction == 4) snake.move(-1, 0);
        }

        window.display();
    }


}
