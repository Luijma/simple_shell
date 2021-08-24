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

char *Take_Input(void);
char **Process_Input(char *input);
void Execute_Commands(char **args);
void Display_Prompt(void);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

#endif /* _HOLBERTON_H_ */
