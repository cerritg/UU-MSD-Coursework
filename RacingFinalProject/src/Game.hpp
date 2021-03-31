//
//  Game.hpp
//  RacingGame
//
//  Created by Jacob Wheeler on 9/20/19.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "GameHeader.hpp"
#include "UserCar.hpp"
#include "Obstacle.hpp"

using namespace std;
using namespace sf;


class Game
{
public:
    Game(); //game constructor
    void run();
    ~Game(){}  //game destructor
    void collision();
    void saveScore();
    
public:
    int previousScore;
    float bgSpeed;
    
private:
    void processEvents();
    void update(float elapsedTime,int time);
    void render();
    
private:
    RenderWindow gameWindow;
    Texture background;
    Sprite  roadSprite1, roadSprite2;
    
    Font scoreFont,oFont;
    Text scoreText,updateScoreText;
    
    UserCar usercar; //car object from UserCar Class
    Obstacle obstacle; //obstacle object from Obstacle Class
    
    float diff;
    float bg1Y;
    float bg2Y;
    float elapsedTime;
  
};
#endif /* Game_hpp */
