<h1 align="center">Simple Shell</h1>

<p align="center"> </p>

## Description
Simple shell interprets and executes basic UNIX commands with arguments. It is a project assigned with certain requirements and restrictions by Holberton School with the goal of recreating a UNIX shell.

The executable displays a prompt, waits for user input, interprets it and executes if it is valid.

## How to compile and use
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

./hsh

$ [command] [arguments]

## Example
$ ls

This will list files in the current directory

$ ls -la

This will list all files in the current directory in long format

$ echo Hello

This will print out input

$ pwd

This will print the working directory
