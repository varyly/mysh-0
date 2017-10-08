#include "utils.h"
#include <stdlib.h>
#include <string.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
int count=0;
 (*argv)=(char**)malloc(sizeof(char**)*50);
(*argv)[count]=(char*)malloc(sizeof(char*)*50);
char* cmd=(char*)malloc(sizeof(char)*strlen(command));
strcpy(cmd,command);
char* token;
token=strtok(cmd,"' ', \n\t");
if(token==NULL)
{
(*argc)=1;
strcpy((*argv)[0],"");
return;
}
while(token!=NULL)
{
strcpy((*argv)[count],token);
(*argv)[++count]=(char*)malloc(sizeof(char)*50);
token=strtok(NULL, "' ', \n\t");

}
*argc=count;
free(cmd);

}
