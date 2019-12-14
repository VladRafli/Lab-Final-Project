/*
Died Mechanism (Under Development) Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void died()
{
    fflush(stdin);
    system("cls");
    printf("\n");
    sleep(1);
    printf("\a\nYou died!");
    sleep(3);
	printf("\nYou will redirected to exit the program...\n");
	sleep(3);
	quit();
}
/*
	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
*/
