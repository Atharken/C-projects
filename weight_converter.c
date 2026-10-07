#include <stdio.h>

int main(){
    int choice ;
    float weight ;


    printf("enter your choice weihght convert \n1.pound\n2.ounce\n :");
    scanf("%d",&choice);

    printf("enter your weight in kg :");
    scanf("%f",&weight);

    if (choice == 1){
        printf("%f pound", weight * 2.20);
    }
    else if(choice == 2){
        printf("%f ounce", weight * 35.20);
    }


    return 0;
}