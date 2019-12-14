/*
Boss Fight Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

int boss(int *ply_dmg, int *ply_hp, int *ply_def)
{
	system("cls");
	srand(time(0));
	int choice, dmg_red;
	static int win_flag = 0, boss_hp = 1000, boss_dmg, reduced_dmg;

	while (boss_hp > 0)
	{
	    printf("Wild Boss appeared!\n");
        printf("Status:\n");
        printf("HP: %d\tDamage: 10 - 20\n", boss_hp);
        printf("Action:\n");
        printf("1. Attack ");
        printf("2. Defend ");
        printf("3. Run Away ");
        if (*ply_hp > 0)
		{
		    while (boss_hp > 0 && *ply_hp > 0)
            {
                printf("\nChoice: "); scanf("%d", &choice);
                switch (choice)
                {
                    case 1:
                        boss_hp -= *ply_dmg;
                        *ply_hp -= boss_dmg = (rand() % (20 - 10 + 1)) + 10; //(rand() % (max - min + 1)) + min
                        printf("Boss Damage: %d Boss HP: %d Player HP: %d", boss_dmg, boss_hp, *ply_hp);
                        break;
                    case 2:
                        boss_dmg = (rand() % (20 - 10 + 1)) + 10;
                        //Damage Reducer for defense logic
                        if (*ply_def > boss_dmg)
                        {
                            dmg_red = boss_dmg * 75 / 100;
                            printf("dmg_red = %d ", dmg_red);
                        }
                        else if (*ply_def > boss_dmg + 3 || *ply_def < boss_dmg + 3)
                        {
                            dmg_red = boss_dmg * 50 / 100;
                            printf("dmg_red = %d ", dmg_red);
                        }
                        else if (*ply_def < boss_dmg)
                        {
                            dmg_red = boss_dmg * 25 / 100;
                            printf("dmg_red = %d ", dmg_red);
                        }
                        //End of Logic
                        reduced_dmg = boss_dmg - dmg_red;
                        *ply_hp -= boss_dmg - dmg_red;
                        printf("Boss Damage: %d  Reduced Damage: %d Boss HP: %d Player HP: %d", boss_dmg, reduced_dmg, boss_hp, *ply_hp);
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
	if (boss_hp <= 0 && *ply_hp > 0 && win_flag == 0)
    {
        win_flag = 1;
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
    else if(boss_hp <= 0 && *ply_hp <= 0 && win_flag == 0)
    {
        died();
    }
    //If the boss was already defeated
    else if (win_flag == 1)
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
