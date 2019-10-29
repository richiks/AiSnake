#include "snake.cpp"

/* The main program.  Initializes the world, then runs the simulation. */
int main() {
  gameT game;
  InitializeGame(game);
  RunSimulation(game);
  return 0;
}
