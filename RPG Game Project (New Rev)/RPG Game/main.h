#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/*******************************
 * Header file for main.c file *
 * Storing Headers             *
 * Macros                      *
 * Global Variables            *
 * Function Prototypes         *
 * Function                    *
********************************/
//Headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>
#include <ctype.h>
//Macros
#define MAX_ACC 10 //Max of Account details
#define MAX_UPS 20 //Max of Username and Password
#define MAX_GOLD 2147483647 //Max of int number size
//Global Variables
static unsigned int player_gold = 10000;
static int player_damage = 5;
static int player_hp = 100;
static int player_defense = 5;
//Function Prototype
/***********************
 * Global Function     *
 ***********************/
//Clear Screen
void clrscr()
{
    system("cls");
}
/************************
 * Main.c Function      *
 ************************/
//Login Header
void login_header()
{
    int i;
    char text[] = "     RPG Game (Alpha Build)      ";
    for(i = 0; i <= strlen(text); i++)
        printf("=");
    printf("\n");
    printf("%s", text);
    printf("\n");
    for(i = 0; i <= strlen(text); i++)
        printf("=");
    printf("\n");
}
//Login Menu
void login(char *username, char *password);
//Main Menu Header
void main_menu_header()
{
    int i;
    char text[] = "     Welcome to RPG Game      ";
    for(i = 0; i <= strlen(text); i++)
        printf("=");
    printf("\n");
    printf("%s", text);
    printf("\n");
    for(i = 0; i <= strlen(text); i++)
        printf("=");
    printf("\n");
}
//Main Menu
void main_menu();
//Game Menu
void game_menu();
//Pause Menu
void pause_menu();
/************************
 * Weapon_shop.c        *
 ************************/
//Alpha Build Weapon Shop
void weapon_shop();
//Buy Weapon
void alpha_buy_weapon();
//Sell Weapon
void alpha_sell_weapon();
/************************
 * Global Function      *
 ************************/
//Quit
void quit()
{
    printf("Thank you for playing!!!");
    sleep(1);
    exit(0);
}
/*********************************
 * Code Reserved for maintenance *
 *********************************/
//Main.c Main Menu Maintenance
void maintenance()
{
    //Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	clrscr();
	main_menu();
}

#endif // MAIN_H_INCLUDED
