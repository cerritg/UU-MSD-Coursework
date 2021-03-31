//
//  Background.cpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/19/19.
//

#include "GameHeader.hpp"
#include "Background.hpp"

/*
 * Name:        - Background
 * Use:         - Background constructor
 *              - Creates a background texture that is given to background sprite
 */
Background::Background() {
    // Load backgroundTexture
    // If it can't load, cerr
    if (!backgroundTexture.loadFromFile("Road.png")) {
        cerr << "Error: No File Found" << endl;
    }
    
    // Give background sprite texture
    // Rotate texture
    // Upscale
    background.setTexture(backgroundTexture);
    background.rotate(90);
    background.scale(1.28, 1.28);
    
    // Get size of texture
    // Move the origin point to the center
    // Set position so that it fills screen (x & y are .5 * window size);
    Vector2u size = backgroundTexture.getSize();
    background.setOrigin(size.x / 2, size.y / 2);
    background.setPosition(960, 540);
}


/*
 * Name:        - drawBackground
 * Use:         - Draw the background on the game window
 * Parameters:  - RenderWindow&
 *
 * Return:      - void
 */
void Background::drawBackground(RenderWindow& window) {
    window.draw(background);
}
