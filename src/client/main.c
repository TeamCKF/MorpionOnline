/*
** main.c for morpion in /home/gomel_f/Documents/MorpionOnline/src/client
**
** Made by Frédéric GOMEL
** Login   <gomel_f@epitech.net>
**
** Started on  Fri Jun  3 01:03:51 2016 Frédéric GOMEL
** Last update Sat Jun  4 04:17:01 2016 Mineshot03
*/

#include <ncurses.h>
#include "morpion_client.h"

char	*terrain[] = {"       |       |       ",
		      "       |       |       ",
		      "   1   |   2   |   3   ",
		      "       |       |       ",
		      "       |       |       ",
		      "-------|-------|-------",
		      "       |       |       ",
		      "       |       |       ",
		      "   4   |   5   |   6   ",
		      "       |       |       ",
		      "       |       |       ",
		      "-------|-------|-------",
		      "       |       |       ",
		      "       |       |       ",
		      "   7   |   8   |   9   ",
		      "       |       |       ",
		      "       |       |       ",};

char	*X[] = {"o    o ",
		" o  o  ",
		"  oo   ",
		" o  o  ",
		"o    o ",};

char	*O[] = {" oooo  ",
		"o    o ",
		"o    o ",
		"o    o ",
		" oooo  ",};

int	coord[9][2] = {{0, 0}, {0, 8}, {0, 16},
		     {6, 0}, {6, 8}, {6, 16},
		     {12, 0}, {12, 8}, {12, 16}};

int	main(int ac, const char *av[])
{
  int	i = 0;
  int	ix = 0;
  int	cursor[2];
  char	c;
  int	tour = 0;

  initscr();
  raw();
  noecho();
  curs_set(0);
  while (terrain[i])
    printw("%s\n", terrain[i++]);
  while ((c = getch()) != 'q')
    {
      if (c > '0' && c <= '9')
	{
	  cursor[0] = coord[c - 49][0];
	  cursor[1] = coord[c - 49][1];
	  if (tour)
	    while (X[ix])
	      mvprintw(cursor[0]++, cursor[1], "%s", X[ix++]);
	  else
	    while (O[ix])
	      mvprintw(cursor[0]++, cursor[1], "%s", O[ix++]);
	  ix = 0;
	  if (tour)
	    tour = 0;
	  else
	    tour = 1;
	}
      refresh();
    }
  endwin();
  return (0);
}
