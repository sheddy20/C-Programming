# include <stdio.h>

int main(){
    
    // printf("How Many Dogs do you have....");
    // double dogs;
    // scanf("%lf\n", &dogs);
    // printf("%f\n %e\n %g\n", dogs, dogs, dogs);
    printf("Whats your total ratio....boy: ");
    double ratio;
    scanf("%lf\n", &ratio);

    printf("Whats your total float....boy: ");
    float myFloat;
    scanf("%f\n", &myFloat);

    printf("My double is: %lf, my float is: %f\n", ratio, myFloat);

    /*Coversion Characters

      %f -> Decimal Notation,
      %e -> scientific Notation,
      %g -> computer Decides,

    */
    return 0;
}