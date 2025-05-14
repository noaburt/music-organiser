
/* -- main.h --
 *
 * LetsPlay - Noa Burt, 2025
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int flag_num;
  
  int help;
  int listtype;
  int viewer;

  char* arg_listtype;
  char* arg_viewer;
}

int main(int argc, char** argv);

char show_help();

flags* parse_flags(int argc, char** argv);
