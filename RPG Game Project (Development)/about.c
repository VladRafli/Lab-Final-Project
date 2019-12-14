/*
About Developer / Credits Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void about()
{
	system("cls");
	fflush(stdin);
	char ans;
	printf("About Game");
	printf("\n\n");
	printf("Creator     : Rafli \"Ryfx\" Jaskandi\n");
	printf("Contributor :\n");
	printf("- None");
	//Go to Main
	printf("\n\n");
	printf("Press enter for back to main menu..."); ans = getchar();
	if (ans == '\n')
	{
		system("cls");
		fflush(stdin);
		main_menu();
	}
	else
	{
		system("cls");
		fflush(stdin);
		about();
	}
}
/*
	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
*/
