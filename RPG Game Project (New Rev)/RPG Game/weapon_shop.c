#include "main.h"

void weapon_shop()
{
    int ans;
    clrscr();
    printf("Weapon Shop (Alpha Build)");
    printf("\n");
    printf("Weapon Dealer: Welcome!!!");
    printf("\n");
    //Menu
    printf("1. Buy Weapon\n");
    printf("2. Sell Weapon\n");
    printf("3. Exit\n");
    //Answer
    printf("Answer: ");
    scanf("%d", &ans);
    //Switch Case
    switch(ans)
    {
        case 1:
        alpha_buy_weapon();
        fflush(stdin);
        case 2:
        //alpha_sell_weapon();
        weapon_shop();
        fflush(stdin);
        case 3:
        fflush(stdin);
        clrscr();
        game_menu();
    }
}

void alpha_buy_weapon()
{
    //Weapon List
    clrscr();
    printf("%-4s| %-30s| %-8s", "No", "\tWeapon list", "Price");
    getch();
}