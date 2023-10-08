#ifndef SHELL_H
#define SHELL_H

/*List of standard library function used*/
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <sys/wait.h>
#include <errno.h>

/*User defined functions*/
int prompt(void);

/*Global variables used*/
char **cmd;
char *ln;
int run_prompt;
char *first_cmd;
int stat_s;

#endif /*SHELL_H*/
