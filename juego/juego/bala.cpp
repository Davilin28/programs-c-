#include <stdio.h>
#include <stdlib.h>

#define DIM 2
#define delta 0.1
#define X 0
#define Y 1

double vx (double v, double x, double s){
   for(int i=0; i<=s; i++){
   printf("En el segundo %i, la velocidad de X es: %.2lf\n",i,v);
       v += x * delta;
   }
   return v;
}
double vy (double v, double y, double s){
    for(int i=0; i<=s; i++){
        printf("En el segundo %i, la velocidad de Y es: %.2lf\n", i,v);
        v += y * delta;
        }
    return v;
}

int main(int argc, char *argv[]){

    double s, x, y;
    double a[DIM] = {0,-10};

    printf("Introducir los segundos: \n");
    scanf(" %lf", &s);

    printf("Introducir la velocidad de x \n");
    scanf(" %lf", &x);

    printf("Introducir la velocidad de y: \n");
    scanf(" %lf", &y);

    system("clear");

    vx (x, a[X], s), vy (y, a[Y], s);

    return EXIT_SUCCESS;
}
