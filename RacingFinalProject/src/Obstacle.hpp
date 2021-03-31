//
//  Obstacle.hpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/19/19.
//

#ifndef Obstacle_hpp
#define Obstacle_hpp

#include "GameHeader.hpp"
#include "gameObject.hpp"

using namespace std;
using namespace sf;

class Obstacle : public gameObject
{
public:
    Obstacle(); //constructor
    ~Obstacle() //destructor
    {
        
    }
    Texture obstacleTexture;
    Sprite obstacleSprite;
    FloatRect getCoordinates() const;
    void loadRandomObstacle(float x,float y); //loads the obstacle randomly in the window
    void updateObstacle(float moveSpeed);
    
    bool loadObstacle; //boolean variable to check whether to draw enemy or not
    
private:
    float obstacleX; //sets the initial X position of obstacle
    float obstacleY; // sets the intial Y position of obstacle
    
};

#endif /* Obstacle_hpp */
