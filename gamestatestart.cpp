#include "gamestatestart.h"

GameStateStart::GameStateStart(Game *game)
{
    this->game = game;
}

void GameStateStart::draw(const float dt)
{
  this->game->window.setView(this->view);
  this->game->window.clear(sf::Color::Black);
  return;
}

void GameStateStart::update(const float dt)
{

}

void GameStateStart::handleInput()
{
  sf::Event event;

  while(this->game->window.pollEvent(event))
  {
      switch(event.type)
      {
      case sf::Event::Closed:
          game->window.close();
          break;
      case sf::Event::KeyPressed:
          if (event.key.code == sf::Keyboard::Escape) this->game->window.close();
          break;
      default: break;
      }
  }
  return;
}

