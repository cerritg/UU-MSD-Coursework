//
//  Background.hpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/19/19.
//

#ifndef Background_hpp
#define Background_hpp

#include "GameHeader.hpp"

using namespace std;
using namespace sf;

class Background {
private:
    Texture backgroundTexture;
    Sprite background;
    
public:
    Background();
    void drawBackground(RenderWindow& window);
};

#endif /* Background_hpp */
