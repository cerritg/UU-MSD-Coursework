//
//  main.cpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/17/19.
//  Copyright © 2019 Gabe Cerritos & Jacob Wheeler. All rights reserved.
//


#include "GameHeader.hpp"
#include "Game.hpp"
#include "UserCar.hpp"
#include "Background.hpp"
#include "Obstacle.hpp"

int main() {
    
    // Set the size of our game window
    RenderWindow gameWindow(VideoMode(900,642), "Racing Game!");
    // Set the frame limit
    gameWindow.setFramerateLimit(60);
    
    //gameWindow.setPosition(Vector2i(177, 0));
    
    
    while(gameWindow.isOpen()){
        Event event;
        Game game;
        
        while (gameWindow.pollEvent(event)) {
            if (event.key.code == Keyboard::Escape) {
                gameWindow.close();
            } else if (event.type == Event::Closed) {
                gameWindow.close();
            }
        }
        
        game.run();
    }
}
