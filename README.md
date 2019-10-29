# AiSnake

 * An implementation of the game "Snake" with a
 * rudimentary computer AI player.  The computer
 * controls a snake that tries to eat as much food
 * as possible.  Every time it eats a food pellet,
 * its length increases by one.  The snake loses if
 * it hits a wall or crashes into itself.
 *
 * The AI in this program is extremely simple.  The
 * snake moves forward, turning with probability 1/5
 * at each step.  If the snake's next step will
 * certainly hit a wall, it tries to turn.
 *
 * In order to run this program, you will need to use
 * a level file.  A set of sample files are included
 * in this directory.
