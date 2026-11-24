#include <stdio.h>
#include <string.h>

int main()
{
    char email[50], password[20];

    printf("Enter email: ");
    scanf("%49s", email);

    printf("Enter password: ");
    scanf("%19s", password);

    if (strcmp(email, "user@gmail.com") == 0 &&
        strcmp(password, "12345") == 0)
    {
        printf("Login Successful!");
    }
    else
    {
        printf("Invalid email or password.");
    }

    return 0;
}
