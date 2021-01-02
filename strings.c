# include <stdio.h>

/*
My c programming journey for 2021,
wouldn't ask for more than learning c
Programming..
*/

int main(){
    printf("Whats your first name...");
    char firstName[9];
    scanf("%s", firstName);

    printf("Whats your last name...");
    char lastname[5];
    scanf("%s", lastname);
    
    printf("Welcome mr %s %s\n", firstName, lastname);
    return 0;
}