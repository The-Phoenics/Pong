#include <iostream>
#include "./headers/Game.h"
#include <SFML/Graphics.hpp>


int main()
{
    Game game;

    while (true)
    {
        game.renderGameStateBeforePLayingState();
        if (game.spaceBarPressed())
        {
            game.run();
        }
    }
}