/**********************************************************************************
 * RPG Game Project
 * Created by:
 * Rafli Athala Jasakndi (2301943402)
 * Yodhatama Giri Sasmita (NULL)
 * Muhammad Irza D. (NULL)
 * Bina Nusantara University
 * For laboratory Final Project Assignment BE-20
 * Under GNU 3.0 License
 * Have Fun :)
 **********************************************************************************/
#include "main.h"

//Main Program
int main()
{
    login();
}
//Main Menu
void main_menu()
{
    int choice;
    clrscr();
    //Main Menu Header
    main_header();
    printf("\n");
    //Menu
    printf("1. New Game\n");
    printf("2. Load Game\n");
    printf("3. About\n");
    printf("4. Quit\n");
    //Input
    do
    {
        printf("Your choice: ");
        scanf("%d", &choice);
        //Switch Case
        switch(choice)
        {
            case 1:
                //clrscr();
                //fflush(stdin);
                //new_game();
                continue;
            case 2:
                //clrscr();
                //fflush(stdin);
                //load_game();
                continue;
            case 3:
                //clrscr();
                //fflush(stdin);
                //about();
                continue;
            case 4:
                quit();
        }
    }
    while (1);
}