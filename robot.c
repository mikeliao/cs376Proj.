/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw and Michael Liao
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
   int i= 0;

  printf("Michael Liao ");

  for(i; i < num; i++)
    {
      printf("really ultra MEGA ");
    }

  printf("loves robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
  int i = 0;

  char * spaces[3] = {"", "        ", "             "};

  for ( i; i != 3; i++){

    printf("%s    i_i    \n", spaces[i]);
    printf("%s   [!_!]   \n", spaces[i]);
    printf("%s  /|___|\\  \n", spaces[i]); 
    printf("%s   d   b    \n" , spaces[i]); 

  }
}
