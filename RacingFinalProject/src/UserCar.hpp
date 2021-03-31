//
//  UserCar.hpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/18/19.
//

#ifndef UserCar_hpp
#define UserCar_hpp


#include "GameHeader.hpp"
#include "gameObject.hpp"

using namespace std;
using namespace sf;

class UserCar : public gameObject {
private:
    float positionX = 377.0;
    float positionY = 450.0;
    float leftBound = 10.0;
    float rightBound = 750.0;
    
    bool isMovingLeft;
    bool isMovingRight;
    bool isMovingUp;
    bool isMovingDown;
    
public:
    UserCar();
    ~UserCar() {}
    
    Texture carTexture;
    int scoreNum;
    string scoreString;
    
    void playerInput(Keyboard::Key key, bool isPressed);
    void updatePlayer();
    void updatePlayerScore(int timeElapsed);
};

#endif /* UserCar_hpp */
