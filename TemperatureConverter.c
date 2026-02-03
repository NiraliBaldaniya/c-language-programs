#include<stdio.h>

int main()
{
    int choice;
    float celsius, fahrenheit;
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f",&celsius);
            fahrenheit= (celsius * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n",fahrenheit);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f",&fahrenheit);
            celsius= (fahrenheit - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2f\n",celsius);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
