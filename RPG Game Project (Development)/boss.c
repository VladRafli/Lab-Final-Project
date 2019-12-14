/*
Boss Fight Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"
#include "boss_data.h"

void boss()
{
	system("cls");
	srand(time(0));
	int choice;
	//Boss Profile
	boss_dt.win_flag = 0;
	boss_dt.boss_hp = 1000;

	while (boss_dt.boss_hp > 0)
	{
	    printf("Wild Boss appeared!\n");
        printf("Status:\n");
        printf("HP: %d\tDamage: 10 - 20\n", boss_dt.boss_hp);
        printf("Action:\n");
        printf("1. Attack ");
        printf("2. Defend ");
        printf("3. Run Away ");
        if (ply_dat.player_hp > 0)
		{
		    while (boss_dt.boss_hp > 0 && ply_dat.player_hp > 0)
            {
                printf("\nChoice: "); scanf("%d", &choice);
                switch (choice)
                {
                    case 1:
                        boss_dt.boss_hp -= ply_dat.player_damage;
                        ply_dat.player_hp -= boss_dt.boss_dmg = (rand() % (20 - 10 + 1)) + 10; //(rand() % (max - min + 1)) + min
                        printf("Boss Damage: %d Boss HP: %d Player HP: %d", boss_dt.boss_dmg, boss_dt.boss_hp, ply_dat.player_hp);
                        break;
                    case 2:
                        boss_dt.boss_dmg = (rand() % (20 - 10 + 1)) + 10;
                        //Damage Reducer for defense logic
                        if (ply_dat.player_defense > boss_dt.boss_dmg)
                        {
                            dmg_reducer.dmg_red = boss_dt.boss_dmg * 75 / 100;
                            printf("dmg_red = %d ", dmg_reducer.dmg_red);
                        }
                        else if (ply_dat.player_defense > boss_dt.boss_dmg + 3 || ply_dat.player_defense < boss_dt.boss_dmg + 3)
                        {
                            dmg_reducer.dmg_red = boss_dt.boss_dmg * 50 / 100;
                            printf("dmg_red = %d ", dmg_reducer.dmg_red);
                        }
                        else if (ply_dat.player_defense < boss_dt.boss_dmg)
                        {
                            dmg_reducer.dmg_red = boss_dt.boss_dmg * 25 / 100;
                            printf("dmg_red = %d ", dmg_reducer.dmg_red);
                        }
                        //End of Logic
                        dmg_reducer.reduced_dmg = boss_dt.boss_dmg - dmg_reducer.dmg_red;
                        ply_dat.player_hp -= boss_dt.boss_dmg - dmg_reducer.dmg_red;
                        printf("Boss Damage: %d  Reduced Damage: %d Boss HP: %d Player HP: %d", boss_dt.boss_dmg, dmg_reducer.reduced_dmg, boss_dt.boss_hp, ply_dat.player_hp);
                        break;
                    case 3:
                        printf("You ran away...");
                        sleep(2);
                        system("cls");
                        fflush(stdin);
                        game_menu();
                }
            }
		}
		else
		{
			died();
		}
	}
	//If Boss Defeated
	if (boss_dt.boss_hp <= 0 && ply_dat.player_hp > 0 && boss_dt.win_flag == 0)
    {
        boss_dt.win_flag = 1;
        printf("\nYou Win!!!\n");
        printf("Reward:\n");
        printf("Next Update...!\n");
        sleep(3);
        printf("You will redirected to main menu...");
        sleep(2);
        system("cls");
        fflush(stdin);
        game_menu();
    }
    //If the boss hp = 0, but player_hp = 0
    else if(boss_dt.boss_hp <= 0 && ply_dat.player_hp <= 0 && boss_dt.win_flag == 0)
    {
        died();
    }
    //If the boss was already defeated
    else if (boss_dt.win_flag == 1)
    {
        printf("The Boss is already defeated!");
        sleep(1);
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
