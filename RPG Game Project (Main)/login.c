/*
Login Procedure Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void login(char *username, char *password)
{
    system("cls");
	printf("Login Menu");
	printf("\n\n");
	printf("Username: "); scanf("%s", username);
	printf("Password: "); scanf("%s", password);
}
/*
	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
*/
