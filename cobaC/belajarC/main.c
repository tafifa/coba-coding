#include <stdio.h>

int main()
{
    char username[16] = "user";
    char password[16] = "1234";


    while()
    {
        printf("Username : ");
        scanf("%s", username);
        printf("Password : ");
        scanf("%s", password);

        if (username == "user" && password == "1234")
        {
            printf("YOU SUCCES TO LOGIN");
        }
        else 
        {
            printf("YOU FAIL TO LOGIN");
        }
    }
    
}