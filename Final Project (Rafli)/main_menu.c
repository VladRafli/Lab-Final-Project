#include "main.h"

void main_header()
{
    int i;
    char text[] = "\t\t\tWelcome to RPG Game\n\t\t\tAlpha Build v.1.63";
    for(i = 0; i <= strlen(text) + 20; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("%s", text);
    printf("\n");
    for(i = 0; i <= strlen(text) + 20; i++)
    {
        printf("=");
    }
}