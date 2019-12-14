
/**********************************************************************************
 * Main Header File
 * Include:
 * C Libraries
 * Macros
 * Global Variables used in main.c
 * Function Prototypes
 **********************************************************************************/
#ifndef _MAIN_H_INCLUDED
#define _MAIN_H_INCLUDED

/**********************************************************************************
 * C Libraries
 **********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>
#include <conio.h>
/**********************************************************************************
 * Macros
 **********************************************************************************/

/**********************************************************************************
 * Global Variables
 **********************************************************************************/

/**********************************************************************************
 * Function Prototypes
 **********************************************************************************/

/********************
 * Useful Functions
 ********************/

//Clear Screen
void clrscr();
//Quit
void quit();
/********************
 * Login System
 ********************/

//Login Header
void login_header();
//Login
void login();
//Username and Password check
void acc_check(char *user, char *pass);
/********************
 * Main Menu
 ********************/

//Main Menu
void main_menu();
//Main Menu Header
void main_header();
#endif //_MAIN_H_INCLUDED