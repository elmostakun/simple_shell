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
int _atoi(const char *s);
int builtin(void);
ssize_t take_line(char **ln);
char *_cat(char *path, char *stpth);
char *_cpy(char *path, char *stpth);
char *_dup(char *string);
int _compare(char *string1, char *string2);
int _leng(char *string);

/*Global variables used*/
char **cmd;
char *ln;
int run_prompt;
char *first_cmd;
int stat_s;

#endif /*SHELL_H*/
