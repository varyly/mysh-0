#include "utils.h"
#include <stdlib.h>
#include <string.h>


void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
  char** ar=(char**)malloc(sizeof(char*));
  int count=0;
  char* token;
char seps[]=" ,\t\n";
char* cmd=(char*)malloc(sizeof(char));
strcpy(cmd,command)
token=strtok(cmd,seps);

}
