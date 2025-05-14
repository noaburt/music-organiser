
/* -- functions.c --
 *
 * LetsPlay - Noa Burt, 2025
 */

#inclulde "main.c"

char* show_help() {
  /* Help message for user interaction */

  char* msg = "Usage: letsplay [OPTION]... [song]\n\tDisplay sheet music of chosen song.\n\n\tOpen sheet music for given argument SONG, in set document viewer. Ability to list songs by type, name etc is also presented.\n\n\tOptions:\n\t\t-l TYPE\tlist all songs matching type, from proceeding argument TYPE\n\t\t-v COMMAND\tset viewing program (or any command) for viewing music documents (default is xreader)\n";

  return msg;
}

flags* parse_flags(int argc, char** argv) {
  /* Parse flags received from command line */

  /* Commands as shown in help function */
}
