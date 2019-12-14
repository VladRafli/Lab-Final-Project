/*
This is the header file to link main program with sub programs
Note: I don't know if this really work well... Or just do nothing
*/
#ifndef LINKER_H_INCLUDED
#define LINKER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>
#include <ctype.h>

#define MAX_GOLD 2147483647 //Max of int number size

//Player Structure
static struct player_data
{
    unsigned int player_gold;
    int player_damage;
    int player_hp;
    int player_defense;
} ply_dat; //Structure Variable

struct ply_dat *data = NULL;

//Memory Allocation
(struct ply_dat*) malloc(sizeof(struct ply_dat));
//End of Allocation

//Login
void login(char *username, char *password);
//Main Menu
void main_menu();
//New Game Setting
void new_game();
//Load Game
void load_game();
//Save Game
void save_game();
//Game Menu
void game_menu();
//Buy Weapon
void buy_weapon();
//Inventory
int inventory();
//Boss
void boss();
//Rest / Healing
void rest();
//Pause Menu
void pause_menu();
// Save and Load Menu
void save_load_menu();
//About / Credits
void about();
//When Player Dies
void died();
//Quitting Program
void quit();

#endif // LINKER_H_INCLUDED
