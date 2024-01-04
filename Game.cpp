#include "Game.h"
#include "Rectangle.h"
Game::Game() {
    state = GameState::PLAY;
}

void Game::addPlayer(float x, float y, float width, float height, const std::string &name) {
    gameObjects.push_back(new Player(x,y,width,height,name));
}
void Game::render() const {
    for (auto gameObject : gameObjects) {
        gameObject->draw();
    }
    if (state == GameState::GAME_OVER) {
        std::cout << " GAME_OVER" << std::endl;
    }
    if (state == GameState::PAUSE) {
        std::cout << " PAUSE" << std::endl;
    }

}

void Game::update() {
    if (state == GameState::PLAY) {
        for (auto & gameObject : gameObjects) {
            gameObject->update();
        }
    }
}

void Game::play() {
    state = GameState::PLAY;
}

void Game::pause() {
    state = GameState::PAUSE;
}
void Game::gameOver() {
    state = GameState::GAME_OVER;
}