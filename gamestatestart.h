#pragma once

#include <SFML/Graphics.hpp>
#include "gamestate.hpp"

class GameStateStart : public GameState
{
private:
  sf::View view;
public:

  GameStateStart(Game* game);
  virtual void draw(const float dt);
  virtual void update(const float dt);
  void handleInput();
};
