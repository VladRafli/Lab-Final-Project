/**********************************************************************************
 * Main Header File
 * Include:
 * C Libraries
 * Macros
 * Global Variables
 * Function Prototypes
 **********************************************************************************/

#ifndef _RPG_GAME_H_INCLUDED
#define _RPG_GAME_H_INCLUDED

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

/********************
 * Player Data
 ********************/
static char player_name[30] = "Guest";
static char player_weapon[30] = "Fist";
static int player_hp;
static int player_dmg;
static int player_def;
static unsigned long int player_gold;

/********************
 * Achievement
 ********************/

/* Buy first weapon*/
//Buy the weapon flag
static int flag_buy_weapon = 0;

/* Kill the boss */
//Boss defeated
static int flag_boss_defeated = 0;

/* Kill the boss with fist */
//Boss defeated
// flag_boss_defeated = 0;
//Fist weapon detection
static int flag_fist_weapon = 0;

/* Excalibur Sword */
//Excalibur boughted
static int flag_excalibur_boughted = 0;

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
//About
void about();
//About Header
void about_header();

/********************
 * Game System
 ********************/

//New Game
void new_game();

/********************
 * In-game Menu
 ********************/

//Game Menu
void game_menu();
//Pause Menu
void pause_menu();
//Achievement Menu
void achievement();
//Rest
void rest();

/********************
 * Buy Weapon (Alpha Build)
 ********************/

//Buy Weapon
void buy_weapon();

/********************
 * Boss Fight (Alpha Build)
 ********************/

//Boss
void boss();
//Attack the Boss
void atk_boss(int *boss_hp, int *boss_dmg);
//Defend from Boss
void def_boss(int *boss_hp, int *boss_dmg);
//Damage Reducer
int damage_reducer(int *boss_dmg);

/********************
 * Died
 ********************/

void died();

#endif //_RPG_GAME_H_INCLUDED