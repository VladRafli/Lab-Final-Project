#include "main.h"

//Login
void login()
{
    //Variables
    char user[20];
    char pass[20];
    //Login Heading
    login_header();
    printf("\n");
    //Login
    printf("Username: ");
    gets(user);
    printf("Password: ");
    gets(pass);
    acc_check(user, pass);
    main_menu();
}
//Login Header
void login_header()
{
    int i;
    char head[] = "\t\tLogin";
    for(i = 0; i < strlen(head) + 30; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("%s", head);
    printf("\n");
    for(i = 0; i < strlen(head) + 30; i++)
    {
        printf("-");
    }
}
//Username and Password Checker
void acc_check(char *user, char *pass)
{
    char rep;
    /********************************
     * There will be database refrence
     * By read account data
     * Then compare the input and the data
     ********************************/
    if(strcmp(user, "a") == 0 && strcmp(pass, "a") == 0)
    {
        return;
    }
    else
    {
        printf("Wrong Username or Password\n");
        printf("Re-insert? [y/n] ");
        rep = getch();
        while(rep == 'y')
        {
            clrscr();
            fflush(stdin);
            login();
        }
        if(rep == 'n')
        {
            sleep(1);
            exit(0);
        }
    }
    
}