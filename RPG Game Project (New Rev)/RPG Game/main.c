#include "main.h"
//Main Program
int main()
{
    char user[20], pass[20];
    login(user, pass);
}
//Login
void login(char *username, char *password)
{
    int flag;
    do
    {
        flag = 0;
        login_header();
        printf("\n");
        printf("Username: ");
        gets(username);
        printf("Password: ");
        gets(password);
        //Checker
        if(strcmp(username, "a") == 0 && strcmp(password, "a") == 0)
        {
            fflush(stdin);
            clrscr();
            main_menu();
        }
        else
        {
            puts("Wrong Username or Password");
            sleep(1);
            clrscr();
            fflush(stdin);
            flag = 1;
        }
    } while (flag == 1);
}
//Main Menu
void main_menu()
{
    int choice;
    //Header
    main_menu_header();
    printf("\n");
    printf("Menu\n");
	printf("1. New Game\n");
	printf("2. Load Game\n");
	printf("3. About\n");
	printf("4. Quit\n");
	//Choice
	printf("Answer = ");
	scanf("%d", &choice);
    fflush(stdin);
	//Menu Selection
	switch (choice)
	{
        case 1:
            clrscr();
            game_menu();
            fflush(stdin);
        case 2:
            clrscr();
            //load_game();
            maintenance();
            fflush(stdin);
        case 3:
            clrscr();
            //about();
            maintenance();
            fflush(stdin);
        case 4:
            clrscr();
            quit();
            fflush(stdin);
	}
}
//Game Menu
void game_menu()
{
    clrscr();
    int choice;
    //Player Profile
    printf("Player Name: %s\n", "Unknown Name");
    printf("Player damage: %d ", player_damage);
	printf("Player gold: %d ", player_gold);
	printf("Player HP: %d ", player_hp);
    printf("Player defense: %d", player_defense);
	//Menu
	printf("\nMenu\n");
	printf("1. Buy Weapon\n");
	printf("2. Inventory\n");
	printf("3. Fight the boss\n");
	printf("4. Rest\n");
	printf("5. Pause Menu\n");
    //Note
	printf("\nNote: Don't\' forget to buy a weapon\n");
	printf("Answer = ");
	scanf("%d", &choice);
	//Menu Selection
	switch(choice)
	{
		case 1:
			weapon_shop();
			fflush(stdin);
		case 2:
			//inventory();
			fflush(stdin);
		case 3:
			//boss();
			fflush(stdin);
		case 4:
			//rest();
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
    printf("2. Save / Load Game\n");
    printf("3. Exit to main menu\n");
    printf("Answer: ");
    scanf("%d", &choice);
    //Menu Selection
    switch (choice)
    {
        case 1:
            game_menu();
            fflush(stdin);
        case 2:
            //save_load_menu();
            fflush(stdin);
        case 3:
            clrscr();
            main_menu();
            fflush(stdin);
    }
}