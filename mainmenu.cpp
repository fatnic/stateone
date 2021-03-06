#include "mainmenu.hpp"
#include "maingame.hpp"

MainMenu::MainMenu(Game *game)
{
    this->game = game;
}

void MainMenu::draw()
{

    sf::Font font;
    font.loadFromFile("assets/font.ttf");

    sf::Text title("F**K YEAH!", font, 120);
    title.setOrigin(title.getGlobalBounds().width/2, 0);
    title.setPosition(this->game->window.getSize().x/2+60, 30);
    title.setRotation(-3);

    sf::Text start("Press [SPACE] to start", font, 30);
    start.setOrigin(start.getGlobalBounds().width/2, 0);
    start.setPosition(this->game->window.getSize().x/2, title.getPosition().y+350);

    sf::Text quit("Press [ESC] to quit", font, 30);
    quit.setOrigin(quit.getGlobalBounds().width/2, 0);
    quit.setPosition(this->game->window.getSize().x/2, start.getPosition().y+100);

    this->game->window.clear(sf::Color::Black);
    this->game->window.draw(title);
    this->game->window.draw(start);
    this->game->window.draw(quit);
    return;
}

void MainMenu::update()
{

}

void MainMenu::handleInput()
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
          if (event.key.code == sf::Keyboard::Space) this->loadGame();
          break;

      default: break;
      }
  }
  return;
}

void MainMenu::loadGame()
{
    this->game->pushState(new MainGame(this->game));
    return;
}
