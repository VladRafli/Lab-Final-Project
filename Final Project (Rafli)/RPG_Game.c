/**********************************************************************************
 * RPG Game Project Source Code
 * Copyright (C) 2019  Rafli Athala J., Yodhatama Giri S., M. Irza D.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 * Created by:
 * Rafli Athala Jasakndi (2301943402)
 * Yodhatama Giri Sasmita (NULL)
 * Muhammad Irza D. (NULL)
 * Bina Nusantara University
 * 
 * For laboratory Final Project Assignment BE-20
 * Have Fun :)
 **********************************************************************************/

#include "RPG_Game.h"

/********************
 * Main Program
 ********************/

//Main Function
int main()
{
    login();
}

/********************
 * Useful Function
 ********************/

//Clear Screen
void clrscr()
{
    system("cls");
}
//Quit Program
void quit()
{
    sleep(1);
    exit(0);
}
//Player Died
void died()
{
    clrscr();
    sleep(1);
    printf("\aYou died!");
    sleep(2);
    printf("\nBecause still under development\nYou can't load to the last checkpoint");
    sleep(2);
    printf("\nRedirected to main menu!");
    sleep(1);
    fflush(stdin);
    main_menu();
}

/********************
 * Login Mechanism
 ********************/

//Login
void login()
{
    //Variables
    char user[20];
    char pass[20];
    //Login Heading
    login_header();
    printf("\n");
    //Login
    printf("Username: ");
    gets(user);
    printf("Password: ");
    gets(pass);
    acc_check(user, pass);
    main_menu();
}
//Login Header
void login_header()
{
    int i;
    char head[] = "\t\tLogin";
    for(i = 0; i < strlen(head) + 30; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("%s", head);
    printf("\n");
    for(i = 0; i < strlen(head) + 30; i++)
    {
        printf("-");
    }
}
//Username and Password Checker
void acc_check(char *user, char *pass)
{
    char rep;
    /********************************
     * There will be database refrence
     * By read account data
     * Then compare the input and the data
     ********************************/
    if(strcmp(user, "a") == 0 && strcmp(pass, "a") == 0)
    {
        return;
    }
    else
    {
        printf("Wrong Username or Password\n");
        printf("Re-insert? [y/n] ");
        rep = getch();
        while(rep == 'y')
        {
            clrscr();
            fflush(stdin);
            login();
        }
        if(rep == 'n')
        {
            sleep(1);
            exit(0);
        }
    }
}

/********************
 * Main Menu
 ********************/

//Main Menu
void main_menu()
{
    int choice;
    clrscr();
    //Main Menu Header
    main_header();
    printf("\n");
    //Menu
    printf("1. New Game\n");
    printf("2. Load Game\n");
    printf("3. About\n");
    printf("4. Quit\n");
    //Input
    do
    {
        printf("Your choice: ");
        scanf("%d", &choice);
        //Switch Case
        switch(choice)
        {
            case 1:
                clrscr();
                fflush(stdin);
                new_game();
            case 2:
                //clrscr();
                //fflush(stdin);
                //load_game();
                continue;
            case 3:
                clrscr();
                fflush(stdin);
                about();
                continue;
            case 4:
                quit();
        }
    }
    while (1);
}
//Main Menu Header
void main_header()
{
    int i;
    char text[] = "\t\t\tWelcome to RPG Game\n\t\t\tAlpha Build v.1.19.12.19";
    for(i = 0; i <= strlen(text) + 20; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("%s", text);
    printf("\n");
    for(i = 0; i <= strlen(text) + 20; i++)
    {
        printf("=");
    }
}
//About
void about()
{
    //About Header
    about_header();
    printf("\n");
    //About Content
    printf("RPG Game Project Copyright (C) 2019  Rafli Athala J., Yodhatama Giri S., M. Irza D.\n\n");
    printf("This program comes with ABSOLUTELY NO WARRANTY.\n");
    printf("This is free software, and you are welcome to redistribute it\n");
    printf("under certain conditions.\n\n");
    printf("Created by:\n");
    printf("Rafli Athala Jaskandi (2301943402)\n");
    printf("Yodhatama Giri Sasmita (NULL)\n");
    printf("Muhammad Irza D. (NULL)\n");
    printf("Bina Nusantara University\n\n");
    printf("For laboratory Final Project Assignment BE-20\n");
    printf("Have Fun :)\n");
    getch();
    clrscr();
    fflush(stdin);
    main_menu();
}
//About Header
void about_header()
{
    int i;
    char text[] = "\t\t\tAbout Program\t\t\t";
    for(i = 0; i <= strlen(text) + 60; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("%s", text);
    printf("\n");
    for(i = 0; i <= strlen(text) + 60; i++)
    {
        printf("=");
    }
}

/**********************************************************************************
 * Game starts here!
 * Game is under Alpha development
 * No save and load game
 * And player available in guest mode only
 **********************************************************************************/

/********************
 * New Game Mechanism
 ********************/

//New Gane
void new_game()
{
    //Set Player Data
    player_hp = 100;
    player_dmg = 5;
    player_def = 5;
    player_gold = 10000;
    game_menu();
}

/********************
 * Game Menu
 ********************/

//Game Menu
void game_menu()
{
    int choice;
    //Menu
	printf("Menu\n");
	printf("1. Buy Weapon\n");
	printf("2. Inventory\n");
	printf("3. Fight the boss\n");
	printf("4. Rest\n");
	printf("5. Pause Menu\n");
    //Desk Checking
	printf("\n");
    printf("Player Name: \"%s\" ", player_name);
    printf("Player Weapon: \"%s\" ", player_weapon);
    printf("Player HP: %d ", player_hp);
	printf("Player damage: %d ", player_dmg);
    printf("Player Defense: %d ", player_def);
	printf("Player gold: %d", player_gold);
    //Note and Input
    printf("\nNote: Don't\' forget to buy a weapon\n");
	printf("Answer = ");
	scanf("%d", &choice);
    //Switch Case
    switch(choice)
	{
		case 1:
			buy_weapon();
			fflush(stdin);
		case 2:
			//inventory();
			fflush(stdin);
		case 3:
			boss();
			fflush(stdin);
		case 4:
			rest();
			fflush(stdin);
		case 5:
			pause_menu();
			fflush(stdin);
	}
}
//Pause Menu
void pause_menu()
{
    int choice;
    clrscr();
    fflush(stdin);
    //Heading
    printf("Paused...\n");
    printf("Menu\n");
    //List
    printf("1. Resume\n");
    printf("2. Achievement\n");
    printf("3. Save / Load Game\n");
    printf("4. Exit to main menu\n");
    printf("Answer: ");
    scanf("%d", &choice);
    //Menu Selection
    switch (choice)
    {
        case 1:
            clrscr();
            game_menu();
            fflush(stdin);
        case 2:
            clrscr();
            achievement();
        case 3:
            //save_load_menu();
            fflush(stdin);
        case 4:
            main_menu();
            fflush(stdin);
    }
}
//Achievement Menu
void achievement()
{
    printf("List of achievement: \n");
    //Bought first weapon
    if(flag_buy_weapon == 1)
    {
        printf("Bought your first weapon (Completed!)\n");
    }
    else
    {
        printf("Bought your first weapon (Not Completed!)\n");
    }
    //Kill the boss
    if(flag_boss_defeated == 1)
    {
        printf("Kill the boss... (Completed!)\n");
    }
    else
    {
        printf("Kill the boss... (Not Completed!)\n");
    }
    //Kill the boss with fist
    if(flag_boss_defeated == 1 && flag_fist_weapon == 1)
    {
        printf("Kill the boss with fist? Wow (Completed!)\n");
    }
    else
    {
        printf("Kill the boss with fist? Wow (Not Completed!)\n");
    }
    //Excalibur Sword
    if(flag_excalibur_boughted == 1)
    {
        printf("You are cheating! Excalibur should not be touched! (Completed!)\n");
    }
    else
    {
        printf("Something (Not Completed!)\n");
    }
    getch();
    clrscr();
    fflush(stdin);
    pause_menu();
}

/********************
 * Buy Weapon
 * (Alpha Build)
 ********************/

//Buy Weapon
void buy_weapon()
{
    int choice;
    clrscr();
    //NPC
    printf("Weapon Dealer: Welcome!");
    printf("\n\n");
    //Menu
    printf("Weapon List:\n");
	printf("1. Wooden Sword 10 dmg (500 gold)\n");
	printf("2. Stone Sword 30 dmg (2.000 gold)\n");
	printf("3. Iron Sword 75 dmg (5.000 gold)\n");
	printf("4. Diamond Sword 150 dmg (10.000 gold)\n");
	printf("5. Excalibur 999999 dmg (2.147.483.647 gold)\n");
	printf("99. Exit to Main Menu\n");
	printf("Which weapon you prefered? ");
	scanf("%d", &choice);
    //Switch Case
    switch(choice)
    {
        case 1:
            if(player_gold >= 500)
            {
                strcpy(player_weapon, "Wooden Sword");
                player_dmg = 10;
                player_gold -= 500;
                printf("Successfully Bought Wooden Sword!");
                flag_buy_weapon = 1;
                sleep(1);
                clrscr();
                fflush(stdin);
                game_menu();
            }
            else
            {
                printf("Weapon Dealer: Not enough gold you dumb!");
                sleep(1);
                clrscr();
                fflush(stdin);
                buy_weapon();
            }
        case 2:
            if(player_gold >= 2000)
            {
                strcpy(player_weapon, "Stone Sword");
                player_dmg = 30;
                player_gold -= 2000;
                printf("Successfully Bought Stone Sword!");
                flag_buy_weapon = 1;
                sleep(1);
				clrscr();
				fflush(stdin);
				game_menu();
            }
            else
            {
                printf("Weapon Dealer: Not enough gold you dumb!");
                sleep(1);
                clrscr();
                fflush(stdin);
                buy_weapon();
            }
        case 3:
            if(player_gold >= 5000)
            {
                strcpy(player_weapon, "Iron Sword");
                player_dmg = 75;
                player_gold -= 5000;
                printf("Successfully Bought Iron Sword!");
                flag_buy_weapon = 1;
                sleep(1);
				clrscr();
				fflush(stdin);
				game_menu();
            }
            else
            {
                printf("Weapon Dealer: Not enough gold you dumb!");
                sleep(1);
                clrscr();
                fflush(stdin);
                buy_weapon();
            }
        case 4:
            if(player_gold >= 10000)
            {
                strcpy(player_weapon, "Diamond Sword");
                player_dmg = 150;
                player_gold -= 10000;
                printf("Successfully Bought Diamond Sword!");
                flag_buy_weapon = 1;
                sleep(1);
				clrscr();
				fflush(stdin);
				game_menu();
            }
            else
            {
                printf("Weapon Dealer: Not enough gold you dumb!");
                sleep(1);
                clrscr();
                fflush(stdin);
                buy_weapon();
            }
        case 5:
            if(player_gold >= 2147483647)
            {
                strcpy(player_weapon, "Excalibur Sword");
                player_dmg = 999999;
                player_gold -= 2147483647;
                printf("You are cheating!\n Because Successfully Bought A Excalibur Sword!");
                flag_buy_weapon = 1;
                flag_excalibur_boughted = 1;
                sleep(1);
				clrscr();
				fflush(stdin);
				game_menu();
            }
            else
            {
                printf("Weapon Dealer: Not enough gold you dumb!");
                sleep(1);
                clrscr();
                fflush(stdin);
                buy_weapon();
            }
        case 99:
            clrscr();
                fflush(stdin);
                game_menu();
    }
}

/********************
 * Boss Fight
 * (Alpha Build)
 ********************/

//Boss
void boss()
{
    clrscr();
    fflush(stdin);
    //Random Set for every Run
    srand(time(0));
    //
    int choice;
    static int win_flag = 0, boss_hp = 1000, boss_dmg, reduced_dmg;
    //Achievement Flags
    if(player_weapon == "Fist")
    {
        flag_fist_weapon = 1;
    }
    //Boss Fight
    if(player_hp > 0)  //Ensure the Player not dead yet
    {
        printf("Wild Boss appeared!\n");
        printf("Status:\n");
        printf("HP: %d\tDamage: 10 - 20\n", boss_hp);
        printf("Action:\n");
        printf("1. Attack ");
        printf("2. Defend ");
        printf("3. Run Away ");
        while(boss_hp > 0 && player_hp > 0) //Input loop if Boss and Player not defeated yet
        {
            boss_dmg = (rand() % (20 - 10 + 1)) + 10;
            printf("\nChoice: ");
            scanf("%d", &choice);
            switch(choice)  //Mechanism for each choice
            {
                case 1:
                    atk_boss(&boss_hp, &boss_dmg);
                    break;
                case 2:
                    def_boss(&boss_hp, &boss_dmg);
                    break;
                case 3:
                    printf("You ran away...");
                    sleep(1);
                    clrscr();
                    fflush(stdin);
                    game_menu();
            }
        }
    }
    if(boss_hp <= 0 && player_hp > 0 && win_flag == 0) //If Boss Defeated
    {
        win_flag = 1;
        flag_boss_defeated = 1;
        printf("\nYou Win!!!\n");
        printf("Reward:\n");
        printf("Next Update...!\n");
        sleep(2);
        printf("You will redirected to game menu...");
        sleep(1);
        clrscr();
        fflush(stdin);
        game_menu();
    }
    else if(boss_hp > 0 && player_hp <= 0 && win_flag == 0) //If player_hp <= 0
    {
        died();
    }
    else if(boss_hp <= 0 && player_hp <= 0 && win_flag == 0) //If the boss hp <= 0, but player_hp is <= 0
    {
        died();
    }
    else if(win_flag == 1)
    {
        printf("The Boss is already defeated!");
        sleep(1);
        clrscr();
        fflush(stdin);
        game_menu();
    }
}
//Attack the Boss
void atk_boss(int *boss_hp, int *boss_dmg)
{
    *boss_hp -= player_dmg;
    player_hp -= *boss_dmg;
    printf("Boss Damage: %d Boss HP: %d Player HP: %d", *boss_dmg, *boss_hp, player_hp);
}
//Defend from Boss
void def_boss(int *boss_hp, int *boss_dmg)
{
    int reduced_dmg, red_ply_dmg;
    //Damage Reducer for Defense Logic
    reduced_dmg = damage_reducer(boss_dmg);
    //End of Logic
    //Player Counter Attack
    red_ply_dmg = player_dmg * 50 / 100;
    //End of Counter Attack
    *boss_hp -= red_ply_dmg;
    player_hp -= reduced_dmg;
    printf("Reduced Damage: %d Boss HP: %d Player HP: %d", reduced_dmg, *boss_hp, player_hp);
}
//Damage Reducer
int damage_reducer(int *boss_dmg)
{
    if(player_def > *boss_dmg)
    {
        *boss_dmg = *boss_dmg * 75 / 100;
        return *boss_dmg;
    }
    else if(player_def > *boss_dmg + 3 || player_def < *boss_dmg + 3)
    {
        *boss_dmg = *boss_dmg * 50 / 100;
        return *boss_dmg;
    }
    else if(player_def < *boss_dmg && player_def > 0)
    {
        *boss_dmg - *boss_dmg * 25 / 100;
        return *boss_dmg;
    }
    else if(player_def == 0)
    {
        return *boss_dmg;
    }
}
//Rest
void rest()
{
    clrscr();
    if(player_hp < 100 && player_hp > 0)
    {
        player_hp = 100;
        printf("You are resting...");
        sleep(2);
        if(player_hp == 100)
        {
            clrscr();
            fflush(stdin);
            printf("Your health was restored...");
            sleep(1);
            clrscr();
            game_menu();
        }
    }
    else
    {
        printf("Your HP is still full!");
        sleep(1);
        clrscr();
        fflush(stdin);
        game_menu();
    }
}