#include <stdio.h>

#define MAX_USERS 10

typedef struct
{
    char username[30];
    char password[30];

} User;

User users[MAX_USERS];
int user_count = 0;

void login();
void sign_up();

int main()
{
    int option;
    while (1)
    {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            sign_up();
            break;
        case 2:
            login();
            break;
        case 3:
            printf("\nExiting program\n");
            return 0;
            break;

        default:
            printf("\nInvalid option. Please try again.\n");
            break;
        }
    }

    return 0;
}

void sign_up()
{
    printf("Register a new user\n");
    printf("Enter username: ");
}

void login()
{
}
