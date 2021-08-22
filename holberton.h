#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

char *Take_Input();
char **Process_Input(char *input);
void Execute_Commands(char **args);
void Display_Prompt();

#endif /* _HOLBERTON_H_ */
