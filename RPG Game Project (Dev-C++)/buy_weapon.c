/*
Main Menu Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

int buy_weapon(int *ply_dmg, unsigned int *ply_gld)
{
	system("cls");
	int choice;
	//NPC
	printf("Weapon Dealer: Welcome!\n\n");
	//Menu
	printf("Weapon List:\n");
	printf("1. Wooden Sword 10 dmg(500 gold)\n");
	printf("2. Stone Sword 30 dmg(2.000 gold)\n");
	printf("3. Iron Sword 75 dmg (5.000 gold)\n");
	printf("4. Diamond Sword 150 dmg (10.000 gold)\n");
	printf("5. Excalibur 999999 dmg (2.147.483.647 gold)\n");
	printf("99. Exit to Main Menu\n");
	printf("Which weapon you prefered? ");
	scanf("%d", &choice);
	//Menu Selection
	switch (choice)
	{
		case 1:
			if (*ply_gld >= 500)
			{
				*ply_dmg = 10;
				*ply_gld -= 500;
				printf("Successfully Bought Wooden Sword!");
				//Desk Checking
				printf("\n\n");
				printf("Player damage: %d ", *ply_dmg);
				printf("Player gold  : %d", *ply_gld);
				sleep(2);
				system("cls");
				fflush(stdin);
				game_menu();
			}
			else
			{
				printf("Not enough gold you dumb!");
				sleep(1);
				system("cls");
				fflush(stdin);
				buy_weapon(ply_dmg, ply_gld);
			}
		case 2:
			if (*ply_gld >= 2000)
			{
				*ply_dmg = 30;
				*ply_gld -= 2000;
				printf("Successfully Bought Stone Sword!");
				//Desk Checking
				printf("\n\n");
				printf("Player damage: %d ", *ply_dmg);
				printf("Player gold  : %d", *ply_gld);
				sleep(2);
				system("cls");
				fflush(stdin);
				game_menu();
			}
			else
			{
				printf("Not enough gold you dumb!");
				sleep(1);
				system("cls");
				fflush(stdin);
				buy_weapon(ply_dmg, ply_gld);
			}
		case 3:
			if (*ply_gld >= 5000)
			{
				*ply_dmg = 75;
				*ply_gld -= 5000;
				printf("Successfully Bought Iron Sword!");
				//Desk Checking
				printf("\n\n");
				printf("Player damage: %d ", *ply_dmg);
				printf("Player gold  : %d", *ply_gld);
				sleep(2);
				system("cls");
				fflush(stdin);
				game_menu();
			}
			else
			{
				printf("Not enough gold you dumb!");
				sleep(1);
				system("cls");
				fflush(stdin);
				buy_weapon(ply_dmg, ply_gld);
			}
		case 4:
			if (*ply_gld >= 10000)
			{
				*ply_dmg = 150;
				*ply_gld -= 10000;
				printf("Successfully Bought Diamond Sword!");
				//Desk Checking
				printf("\n\n");
				printf("Player damage: %d ", *ply_dmg);
				printf("Player gold  : %d", *ply_gld);
				sleep(2);
				system("cls");
				fflush(stdin);
				game_menu();
			}
			else
			{
				printf("Not enough gold you dumb!");
				sleep(1);
				system("cls");
				fflush(stdin);
				buy_weapon(ply_dmg, ply_gld);
			}
		case 5:
			if (*ply_gld == 2147483647)
			{
				*ply_dmg = 999999;
				*ply_gld -= 2147483647;
				printf("Successfully Bought Excalibur Sword!");
				//Desk Checking
				printf("\n\n");
				printf("Player damage: %d ", *ply_dmg);
				printf("Player gold  : %d", *ply_gld);
				sleep(2);
				system("cls");
				fflush(stdin);
				game_menu();
			}
			else
			{
				printf("Not enough gold you dumb!");
				sleep(1);
				system("cls");
				fflush(stdin);
				buy_weapon(ply_dmg, ply_gld);
			}
		case 99:
			system("cls");
			fflush(stdin);
			game_menu();
	}
}
/*
	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
*/
