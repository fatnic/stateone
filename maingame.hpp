#pragma once

#include <SFML/Graphics.hpp>
#include "gamestate.hpp"

class MainGame : public GameState
{
public:

  MainGame(Game* game);
  virtual void draw();
  virtual void update();
  void handleInput();
};
