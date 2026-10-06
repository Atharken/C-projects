#include <stdio.h>
#include <math.h>

int main(){
    float r, area, sarea, volume, pi = 3.14;
    printf("enter your radius : ");
    scanf("%f", &r);

    sarea = 4 * pi * r * r;

    area = pi * r * r;

    volume = 4/3 * pi * r * r *r ;

    printf("area of circle %.2f \n", area);
    printf("surface area of sphere %.2f \n", sarea);
    printf("volume of sphere %.2f \n", volume);




    return 0;
}