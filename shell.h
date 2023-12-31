#ifndef SHELL_H
#define SHELL_H

/*List of standard library function used*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

/*User defined functions*/
int f_fputchar(int filedes, char cc);
int prompt(void);
int f_fputint(int filedes, int numba);
char *find_path(void);
int f_fputstr(int filedes, char *s);
int f_fprintf(int filedes, const char *fomat, char *str1, int nn1, char *str2);
int exitstat(char *exitsta);
int _atoi(const char *s);
int putarray(char *arr[]);
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
int c_s(const char *string1, const char *string2, size_t num);
int run_command(void);
char **conv_strarr(char *string, char str_brk);

/*Global variables used*/
char **cmd;
char *ln;
int run_prompt;
char *first_cmd;
int stat_s;
extern char **environ;

/* Preprocessors directives*/
#define _MIN (1 << (sizeof(int) * 8 - 1))

#endif /*SHELL_H*/
