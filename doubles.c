# include <stdio.h>

int main(){

    int breadth;
    printf("values for breadth: \n");
    scanf("%i", &breadth);

    double height = 3.14159 * (breadth * breadth);
    printf("The value with %i breadth is %f\n", breadth, height);
    return 0;
}