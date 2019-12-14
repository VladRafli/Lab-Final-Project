/*
Pause Menu Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void pause_menu()
{
    int choice;
    system("cls");
    fflush(stdin);
    //Heading
    printf("Paused...\n");
    printf("Menu\n");
    //List
    printf("1. Resume\n");
    printf("2. Exit to main menu\n");
    printf("Answer: ");
    scanf("%d", &choice);
    //Menu Selection
    switch (choice)
    {
        case 1:
            game_menu();
            fflush(stdin);
        case 2:
            main_menu();
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
