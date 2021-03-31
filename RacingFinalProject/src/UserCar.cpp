//
//  UserCar.cpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/18/19.
//

#include "GameHeader.hpp"
#include "UserCar.hpp"

// Function Definitions //
/*
 * Name:
 * Use:
 * Parameters:
 *
 * Return:
 */
UserCar::UserCar() {
    // Car is not moving when initialized
    isMovingLeft = false;
    isMovingRight = false;
    isMovingUp = false;
    isMovingDown = false;
    
    scoreString = "0";
    scoreNum = 0;
    
    if (!carTexture.loadFromFile("assets/racer.png")) {    // Loads racer.png
        cerr << "Error: No file found for userCar" << endl;
    }
}


/*
 * Name:
 * Use:
 * Parameters:
 *
 * Return:
 */
void UserCar::playerInput(Keyboard::Key key, bool isPressed) {
    if (key == Keyboard::Up) {
        isMovingUp = isPressed;
    } else if (key == Keyboard::Down) {
        isMovingDown = isPressed;
    } else if (key == Keyboard::Left) {
        isMovingLeft = isPressed;
    } else if (key == Keyboard::Right) {
        isMovingRight = isPressed;
    }
}


/*
 * Name:
 * Use:
 * Parameters:
 *
 * Return:
 */
void UserCar::updatePlayer() {
    Vector2f move(0,0);
    Vector2f carPosition = gameSprite.getPosition();        // gets current position of player's car
    
    if (isMovingLeft) {
        
        // Check if player's car is at the left boundry
        if (carPosition.x != 10) {
            move.x = moveSpeed;
        }
    }
    if (isMovingRight) {
        
        // Check if player's car is at the right boundry
        if (carPosition.x != 750) {
            move.x = moveSpeed;
        }
    }
    if (isMovingUp) {
        
        // Check if player's car is at the top boundry
        if (carPosition.y != 10) {
            move.y = moveSpeed;
        }
    }
    if (isMovingDown) {
        
        // Check if player's car is at the bottom boundry
        if (carPosition.y != 632) {
            move.y = moveSpeed;
        }
    }
    
    
    gameSprite.move(move);
}


/*
 * Name:
 * Use:
 * Parameters:
 *
 * Return:
 */
void updatePlayerScore(int timeElapsed);
