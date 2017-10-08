#include "utils.h"
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
 *argv=(char**)malloc(sizeof(char*)*MAXSIZE);
 int count=0;
 char* token;
char seps[]=" ,\t\n";
char* cmd=(char*)malloc(sizeof(char)*MAXSIZE);
strcpy(cmd,command);
token=strtok(cmd,seps);

while(token!=NULL)
{
(*argv)[count]=(char*)malloc(sizeof(char));
strcpy(*argv[count],token);
token=strtok(NULL,seps);
count++;
}
*argc=count;


}
