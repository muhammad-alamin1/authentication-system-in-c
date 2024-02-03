#include <stdio.h>
#include <stdlib.h>
#include "../include/menu.h"
#include "../include/admin.h"
#include "../include/user.h"

void info_screen(void);
void login_page(void);
void exit_screen(void);

// main screen
void info_screen(void)
{
     system("title Authentication System App");
     system("color 60");

     printf("\n\t\t\t\t------------------------------------- \n");
     printf("\t\t\t\t   >>> Authentication System  <<< \n");
     printf("\t\t\t\t------------------------------------- \n");

     system("pause");
     system("cls");
     // login page
     login_page();
}

// main login page
void login_page(void)
{
    unsigned int choice = 0;

    system("title Login Page");
    printf("\n----------------------------------- \n");
    printf("   >>> Login into system as <<< \n");
    printf("----------------------------------- \n");

    printf("[1] Administrator.\n");
    printf("[2] User Profile.\n");
    printf("[3] Exit.\n");
    printf("----------------------------------- \n\n");

    printf("Enter the number & Hit Enter. ");
    scanf("%u", &choice);

    switch(choice)
    {
        case 1:
            admin_page();
            break;
        case 2:
            user_panel();
            break;
        case 3:
            exit_screen();
            break;
        default:
            printf("--------------------------------------- \n");
            perror("ERROR: Invalid input please try again.  \n");
            printf("--------------------------------------- \n");

            system("pause");
            login_page();
    }
}

// exit page
void exit_screen(void)
{
    printf("\t\t\t\t------------------------------------------ \n");
    printf("\t\t\t\t\t\t>>> Thank You. <<<\n");
    printf("\t\t\t\t------------------------------------------ \n\n");

    Sleep(1000);
    exit(0);
}
