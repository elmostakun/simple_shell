#ifndef SHELL_H
#define SHELL_H

/*List of standard library function used*/
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <sys/wait.h>
#include <errno.h>

/*User defined functions*/
char *_get_env(char *param);
int prompt(void);
char *find_path(void);
int exitstat(char *exitsta);
int _atoi(const char *s);
int builtin(void);
void freeArr(char **array);
ssize_t take_line(char **ln);
char *_cat(char *path, char *stpth);
char *_cpy(char *path, char *stpth);
char *_dup(char *string);
int _compare(char *string1, char *string2);
int _leng(char *string);
void *call_loc(unsigned int numarr, unsigned int si_by);
char *envir_get(char *check);
int run_command(void);

/*Global variables used*/
char **cmd;
char *ln;
int run_prompt;
char *first_cmd;
int stat_s;
extern char **environ;

#endif /*SHELL_H*/
