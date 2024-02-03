#include <stdio.h>

int valid_gender(char *gender)
{
    switch(*gender)
    {
        case "MALE":
        case "male":
        case "Male":
            *gender = "Male";
            return 1;
        case "FEMALE":
        case "female":
        case "Female":
            *gender = "Female";
            return 1;
        default:
            printf("--------------------------------------- \n");
            perror("ERROR: Invalid gender try again later.  \n");
            printf("--------------------------------------- \n");
            return 0;
    }

    return 0;
}
