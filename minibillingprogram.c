#include <stdio.h>

int main(){

    int choice,quantity,total=0,discount;
    char add;

    do{

    printf("\n-------------------Menu:-----------------\n");
    
    printf("1. popcorn🍿 =50 rupees\n");
    printf("2. burger🍔 = 80 rupees\n");
    printf("3. pizza🍕 =60 rupees\n");
    printf("----------------------------------------\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter the quantity: ");
    scanf("%d",&quantity);

    if(choice==1)
    {
        total+=quantity*50;
        printf("________________________________________\n");
        printf("Total cost of popcorn: %d\n", quantity*50);
        printf("order added successfully✅\n");
        
    }

    else if(choice==2)
    {
        total+=quantity*80;
        printf("________________________________________\n");
        printf("Total cost of burger: %d\n", quantity*80);
        printf("order added successfully✅\n");
       
    }

    else if(choice==3)
    {
        total+=quantity*60;
        printf("________________________________________\n");
        printf("Total cost of pizza: %d\n", quantity*60);
        printf("order added successfully✅\n");
       
    }

    else
    {
        printf("Invalid choice ❌\n");
    }

    printf("Do you want to add more items? (y/n): ");
    scanf(" %c", &add); 

    }
    while (add == 'y' || add == 'Y');

    printf("thank you for your order!😊\n");
    printf("\nFinal Total Bill = %d rupees", total);
    printf("\n----------------------------------------\n");

    if(total>500)
    {
        printf("\n Congratulations 🎉 You are eligible for a discount of 10%%");
        discount = total * 0.1;
        total = total - discount;
        printf("\nTotal bill after discount = %d rupees", total);
    }
    
    return 0;
}
