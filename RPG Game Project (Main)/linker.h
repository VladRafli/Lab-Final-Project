/*
This is the header file to link main program with sub programs
Note: I don't know if this really work well... Or just do nothing
*/
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
/*struct player_data
{

} ply_dat; //Structure Variable
*/
//Login
void login(char *username, char *password);
//Main Menu
void main_menu();
//Load Game
void load_game();
//Save Game
void save_game();
//Game Menu
void game_menu();
//Buy Weapon
int buy_weapon(int *ply_dmg, unsigned int *ply_gld);
//Inventory
int inventory();
//Boss
int boss(int *ply_dmg, int *ply_hp, int *ply_def);
//Rest / Healing
void rest(int *ply_hp);
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
