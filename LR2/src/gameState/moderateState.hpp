#pragma once

#include <SDL2/SDL.h>
#include "gameState.hpp"
#include <memory>

namespace gameEngine
{
    class engine;
}

class moderateState : public gameState::state
{
private:

public:
    moderateState(/* args */)
    {
    }

    ~moderateState() override
    {
        cleanup();
    }

    int init() override;
    void cleanup() override;

    void pause() override;
    void resume() override;

    void events(gameEngine::engine * game) override;
    void update(gameEngine::engine * game) override;
    void draw(gameEngine::engine * game) override;
};