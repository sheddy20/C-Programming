# include <stdio.h>

int main(){

    // int radius;
    // printf("please input a number\n");
    // scanf("%i", &radius);
    // printf("The radius of the circle is:%i\n", radius);

    int radius;
    printf("Enter value for radius..");
    scanf("%i", &radius);
    
    int area;
    printf("Enter value for area");
    scanf("%i", &area);
    
    int polygon = radius + area;
    printf("The value of Radius and Area is: %i\n", polygon);
}