# include <stdio.h>

int main(){
   int g;
   printf("Provide the value for G...");
   scanf("%i", &g);

   double h = (double) g / 12;
   printf("%f\n", h);
   return 0;
}

