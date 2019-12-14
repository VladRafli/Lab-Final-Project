/*
Main Menu Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void main_menu()
{
    int choice;
    system("cls");
    fflush(stdin);
    //Heading
	printf("Welcome to an RPG Game!\n\n");
	printf("This program used to:\n");
	printf("-learn how pointer works\n");
	printf("-learn pointer and function works\n");
	printf("For learn it, you can read the codes and understand the logic\n\n");
	//Menu
	printf("Menu\n");
	printf("1. New Game\n");
	printf("2. Load Game\n");
	printf("3. About\n");
	printf("4. Quit\n");
	//Choice
	printf("Answer = ");
	scanf("%d", &choice);
	//Menu Selection
	switch (choice)
	{
        case 1:
            new_game();
            game_menu();
            fflush(stdin);
        case 2:
            load_game();
            fflush(stdin);
        case 3:
            about();
            fflush(stdin);
        case 4:
            quit();
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
