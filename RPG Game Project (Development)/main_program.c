/*
run this program using the console pauser or add your own getch, system("pause") or input loop
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

int main(int argc, char *argv[])
{
	//Login
	char user[20], pass[20];
	login(user, pass);
	if (strcmp(user, "a") == 0 && strcmp(pass, "a") == 0)
	{
		main_menu();
	}
    else
    {
        printf("Wrong Username or Password");
        sleep(1);
        main(argc, argv);
    }
}
/*
	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
*/
