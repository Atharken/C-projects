#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    char d;
    printf("Enter your first number\n:");
    scanf("%d",&a);
    
    printf("Enter your sexond number\n:");
    scanf("%d",&b);
    
    printf("Enter your operator +,-,*,/\n:");
    scanf(" %c",&d);
    
    switch(d){
       case '+':
          c = a + b;
          break;
       case '-':
          c = a - b;
          break;
       case '*':
          c = a * b;
          break;
       case '/':
          c = a / b;
          break;
           }
    
    
    printf("%d",c);
    return 0;
}