//
//  Game.cpp
//  RacingGame
//
//  Created by Jacob Wheeler on 9/20/19.
//

#include "Game.hpp"

Game::Game() : gameWindow(VideoMode(900, 642), "Racing Game!"){
    // previousScore(0);
    gameWindow.setPosition(Vector2i(177,0));
    bgSpeed=0.8;
    
    if(!background.loadFromFile("assets/roada.png")){
        cout<<"No File found for road"<<endl;
    }
    background.setSmooth(true);
    
    roadSprite1.setTexture(background);
    roadSprite1.setPosition(0, 0);
    bg1Y=roadSprite1.getPosition().y;
    
    roadSprite2.setTexture(background);
    roadSprite2.setPosition(0, -642);
    bg2Y=roadSprite2.getPosition().y;
}

void Game::run(){
    
    Clock clock;
    
    while (gameWindow.isOpen()){
        processEvents();
        
        Time playTime=clock.getElapsedTime();
        int ptime=(playTime.asMilliseconds()/1000);  //converts the time in milliseconds to seconds
        
        float x=rand()%750+20;  //gives range of values from 750 to 20
        if((ptime%3==0))        //after each 2 seconds the enemy is generated randomly
        {
            if((ptime%5!=0))
            {
                obstacle.loadRandomObstacle(x,-250);
                obstacle.loadObstacle=true;
            }
        }
        
        update(elapsedTime=0.7,ptime);
        render();
        
    }
}

void Game::processEvents()  //handles user events
{
    Event event;
    while (gameWindow.pollEvent(event))
    {
        switch (event.type)
        {
            case Event::KeyPressed:
                usercar.playerInput(event.key.code, true);
                break;
            case Event::KeyReleased:
                usercar.playerInput(event.key.code, false);
                break;
            case Event::Closed:
                gameWindow.close();
                break;
        }
    }
}

void Game::update(float elapsedTime,int time){   //updates the entities in the game
    
    //////////////collison/////////////////
    if (usercar.gameSprite.getGlobalBounds().intersects(obstacle.gameSprite.getGlobalBounds())) //collison detection with police car
    {
        collision();
        gameWindow.close();        //game window closes when collison occurs
    }
    else
    {
        usercar.updatePlayer();  //updates the player movement with user input
    }
    
    if(obstacle.loadObstacle==true) //whenever loadObstacle variable holds true value, obstacle position is updated
    {
        obstacle.updateObstacle(bgSpeed);
    }
}

void Game::render()  //renders the game
{
    gameWindow.clear();
    gameWindow.draw(roadSprite1); //draws road
    gameWindow.draw(roadSprite2); //draws road
    gameWindow.draw(usercar.gameSprite); //draws the car(player)
    if(obstacle.loadObstacle==true)
        gameWindow.draw(obstacle.gameSprite); //draws the obstacle sprite
    gameWindow.display();
}

void Game::collision()
{
    //gameOver.setString(s);
    sf::Vector2f v;
    v.x = (gameWindow.getSize().x)/8;
    v.y = (gameWindow.getSize().y)/3;
    
    
    sf::RectangleShape rect;
    rect.setFillColor(sf::Color(0,0,0,77));
    rect.setSize(sf::Vector2f(gameWindow.getSize()));
    
    
    
}
