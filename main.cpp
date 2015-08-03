#include "game.hpp"
#include "gamestatestart.h"
// a comment
// another comment
int main()
{
  Game game;
  game.pushState(new GameStateStart(&game));
  game.gameLoop();
  return 0;
}
