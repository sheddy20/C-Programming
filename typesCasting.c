# include <stdio.h>

int main(){
    printf("Number of egss produced today: ");
    int eggs;
    scanf("%i", &eggs);

    double dozen = (double) eggs / 12;
    printf("you have %f dozen eggs for today \n", dozen);
}