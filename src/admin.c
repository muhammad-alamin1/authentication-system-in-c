#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/menu.h"

#define MAX_LENGTH 255
#define ENTER 13 // ASCII Value
#define TAB 9   // ASCII Value
#define BKSP 8 // ASCII Value

// Admin login
void admin_page(void)
{
    char input_password[MAX_LENGTH];
    char admin_password[MAX_LENGTH] = "admin";
    char ch;
    unsigned int i = 0;

    system("cls");
    system("title Administrator Login");

    printf("----------------------------------- \n");
    printf("   >>> Administrator Login  <<< \n");
    printf("----------------------------------- \n\n");

    printf("Enter Your Password & Hit Enter. ");
    while(1) // run infinite times until break
    {
        ch = getch();
        if(ch == ENTER || ch == TAB)
        {
            input_password[i] = '\0';
            break;
        }
        else if(ch == BKSP)
        {
            if(i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            input_password[i++] = ch;
            printf("* \b");
        }
    }

    // verifies the password
    if(strcmp(admin_password, input_password) == 0)
        admin_panel();
    else
    {
        printf("------------------------------------------ \n");
        perror("ERROR: Invalid password please try again.  \n");
        printf("------------------------------------------ \n");

        system("pause");
        login_page();
    }
}

// Admin Panel
void admin_panel(void)
{
    system("cls");
    system("title Admin Panel");

    printf("------------------------------------ \n");
    printf("\t>>> Admin Panel <<< \n");
    printf("------------------------------------ \n");

    printf(" [1] Add New Contact. \n");
    printf(" [2] Update Contact. \n");
    printf(" [3] Display All Contact. \n");
    printf(" [4] Search By Name. \n");
    printf(" [5] Search By Number. \n");
    printf(" [6] Search By City. \n");
    printf(" [7] Delete Contact. \n");
    printf(" [8] Delete All Contact. \n");
    printf(" [9] Back to Login. \n");
    printf("[10] EXIT. \n");
    printf("------------------------------------ \n\n");


}
