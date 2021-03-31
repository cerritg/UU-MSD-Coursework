//
//  gameObject.hpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/20/19.
//

#ifndef gameObject_hpp
#define gameObject_hpp

#include "GameHeader.hpp"
using namespace std;
using namespace sf;

// Class that will house the sprites, their speed, their globalLocation, and whether or not they are active
class gameObject {
    
public:
    Sprite gameSprite;
    RectangleShape rect;
    float moveSpeed;
    bool active;
    bool deleteObject;
};

#endif /* gameObject_hpp */
