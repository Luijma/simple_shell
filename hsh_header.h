#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Libraries */

#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/* Prototypes */

/* processinput.c */
char *take_input(void);
char **process_input(char *input, char *separator);
char **path_convert(char **env);
void display_prompt(void);

/* ex_commands.c */
void execute(char *file_name, char **env);
char *get_path(char *arg, char **env);
int check_if_path(char *command);

/* string_handling.c */
int _putchar(char c);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int num);
char *str_concat(char *s1, char *s2);

/* free.c */
void free_2D(char **array);

/* _putchar.c */

#endif /* _HOLBERTON_H_ */
