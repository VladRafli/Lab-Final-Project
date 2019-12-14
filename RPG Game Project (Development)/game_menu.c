/*
Game Menu Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void game_menu()
{
	fflush(stdin);
	system("cls");
	int choice;
	//Menu
	printf("Menu\n");
	printf("1. Buy Weapon\n");
	printf("2. Inventory\n");
	printf("3. Fight the boss\n");
	printf("4. Rest\n");
	printf("5. Pause Menu\n");

	//Desk Checking
	printf("\n\n");
	printf("Player damage: %d ", ply_dat.player_damage);
	printf("Player gold: %d ", ply_dat.player_gold);
	printf("Player HP: %d", ply_dat.player_hp);

	printf("\nNote: Don't\' forget to buy a weapon\n");
	printf("Answer = ");
	scanf("%d", &choice);
	//Menu Selection
	switch(choice)
	{
		case 1:
			buy_weapon();
			fflush(stdin);
		case 2:
			inventory();
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
/*
	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
*/
