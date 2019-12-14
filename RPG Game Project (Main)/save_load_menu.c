/*
Pause Menu Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void save_load_menu()
{
    int choice;
    //Heading
    printf("Save / Load\n");
    printf("\n");
    //Menu
    printf("1. Save Game\n");
    printf("2. Load Game\n");
    printf("Answer: ");
    scanf("%d", &choice);
    //Switch Case
    switch (choice)
    {
        case 1:
            save_game();
            fflush(stdin);
        case 2:
            load_game();
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
