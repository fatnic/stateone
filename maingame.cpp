#include "maingame.hpp"

MainGame::MainGame(Game* game)
{
    this->game = game;
}

void MainGame::draw()
{

    sf::Font font;
    font.loadFromFile("assets/font.ttf");

    sf::Text title("F**K main YEAH!", font, 120);
    title.setOrigin(title.getGlobalBounds().width/2, 0);
    title.setPosition(this->game->window.getSize().x/2+60, 30);
    title.setRotation(-3);

    sf::Text start("You did it!", font, 30);
    start.setOrigin(start.getGlobalBounds().width/2, 0);
    start.setPosition(this->game->window.getSize().x/2, title.getPosition().y+350);

    this->game->window.clear(sf::Color::Black);
    this->game->window.draw(title);
    this->game->window.draw(start);
    return;
}

void MainGame::update()
{

}

void MainGame::handleInput()
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

