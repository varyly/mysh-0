#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "commands.h"
#define BUFSIZE 128
int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

  // TODO: Fill it!
if(chdir(argv[1])) return -1;

  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  // TODO: Fill it!
char buf[BUFSIZE];
getcwd(buf,BUFSIZE);
printf("%s\n",buf);

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
if(strcmp(argv[0],"cd")||argc>2) return 0;

  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
if(argc>1||strcmp(argv[0],"pwd")!=0) return 0;
  return 1;
}
