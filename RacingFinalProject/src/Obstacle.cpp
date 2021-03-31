//
//  Obstacle.cpp
//  RacingGame
//
//  Created by Gabe Cerritos on 9/19/19.
//

#include "GameHeader.hpp"
#include "Obstacle.hpp"

Obstacle::Obstacle():loadObstacle(false)
{
    if(!obstacleTexture.loadFromFile("assets/obs1.png"))
    {
        cout<<"Error in loading enemy sprite"<<endl;
    }
    obstacleSprite.setTexture(obstacleTexture);
    moveSpeed = 1.1;

    
    
}

void Obstacle::loadRandomObstacle(float X,float Y)
{
    obstacleX=X;
    obstacleY=Y;
    obstacleSprite.setPosition(obstacleX,obstacleY);
    
}


void Obstacle::updateObstacle(float moveSpeed)
{
    if(loadObstacle==true)
    {
        obstacleY+=moveSpeed; 
        obstacleSprite.setPosition(obstacleX, obstacleY);
        if(obstacleY==700) //when enemy sprite reaches 700 y position then loading of sprite is terminated
            loadObstacle=false;
    }
    
}

FloatRect Obstacle::getCoordinates() const {
    FloatRect boundingBox = obstacleSprite.getGlobalBounds();
    return boundingBox;
}
