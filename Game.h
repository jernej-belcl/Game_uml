
#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "GameState.h"
#include "vector"
#include "GameObject.h"

class Game {
private: GameState state;
    std::vector<GameObject*> gameObjects;
public:
    Game();
    void addPlayer(float x,float y,float width,float height,const std::string &name);
    void render() const;
    void update();
    void play();
    void pause();
    void gameOver();
};


#endif
