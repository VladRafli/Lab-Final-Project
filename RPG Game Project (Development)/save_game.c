/*
Load Game Sub-Program
Note: For Module Maintenance, the code for maintenance reserved in the bottom of the editor
*/
#include "linker.h"

void save_game()
{
    int choice;
    static char flag_save[10] = "Empty";
    //File Processing
    FILE *ptrsav; //Pointer to File Save
    //Header
   	printf("Save Game\n\n");
   	//Save List
   	printf("1. %s\n", flag_save);
   	printf("Answer: ");
   	scanf("%d", &choice);
   	//Save Switch
   	switch (choice)
   	{
        case 1:
            ptrsav = fopen("save_data_1.txt", "w");
            if (ptrsav == NULL)
            {
                puts("File can't be created #Error 1: Fail to Create File");
                fflush(stdin);
                save_game();
            }
            fwrite(&ply_dat, sizeof(ply_dat), 1, ptrsav);
            printf("\n");
            printf("Your game is successfully saved!");
            strcpy(flag_save, "Save 1");
            sleep(2);
            fflush(stdin);
            save_load_menu();
   	}
   	/*
   	//Code For Maitenance Only
	printf("Under Construction!");
	sleep(1);
	system("cls");
	main_menu();
	*/
}
/*

*/
