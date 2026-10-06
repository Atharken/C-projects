#include <stdio.h>
#include <math.h>

int main(){
    float r, area, sarea, volume, pi = 3.14;
    printf("enter your radius : ");
    scanf("%f", &r);

    sarea = 4 * pi * pow(r,2);

    area = pi * pow(r, 2);

    volume = (4/3) * pi * pow(r, 3);

    printf("area of circle %.2f \n", area);
    printf("surface area of sphere %.2f \n", sarea);
    printf("volume of sphere %.2f \n", volume);




    return 0;
}