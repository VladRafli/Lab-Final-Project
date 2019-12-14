/*
Quitting Program Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void rest()
{
	system("cls");
	if (ply_dat.player_hp < 100 && ply_dat.player_hp > 0)
	{
		while (ply_dat.player_hp < 100)
		{
			ply_dat.player_hp = 100;
		}
			printf("You are resting...");
			sleep(2);
		do
		{
			system("cls");
			fflush(stdin);
			printf("Your health was restored...");
			sleep(1);
			game_menu();
		}
		while (ply_dat.player_hp == 100);
	}
	else
	{
		printf("Your HP is still full!");
		sleep(1);
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
