/*
Main Menu Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void new_game()
{
    /*The changed value didn't reach to game_menu or other sub-program*/
    data->player_hp = 100;
    data->player_gold = 10000;
    data->player_damage = 5;
    data->player_defense = 5;
    printf("%d %d %d %d", ply_dat.player_hp, ply_dat.player_gold, ply_dat.player_damage, ply_dat.player_defense);
    sleep(3);
}
/*
	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
*/
