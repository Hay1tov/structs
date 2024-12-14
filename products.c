#include <stdio.h>
#include <string.h>

struct contains{
    char name[100];
    char category[100];
    float price;
    int quantity;

};


int main(){

    struct contains Grocery [10] = {

    {"Milk", "Dairy", 2.5, 20},
    {"Cheese", "Dairy", 5.0, 10},
    {"Yogurt", "Dairy", 1.5, 50},
    {"Bread", "Bakery", 1.2, 100},
    {"Butter", "Dairy", 3.0, 15},
    {"Eggs", "Dairy", 2.0, 30},
    {"Apple", "Fruit", 1.5, 40},
    {"Orange Juice", "Beverage", 3.5, 25},
    {"Chicken", "Meat", 7.5, 10},
    {"Ice Cream", "Dairy", 4.5, 12}
};


    printf("Sutli mahsulotlari:\nName            | Category  | Price   | Quantity\n---------------------------------------------------\n");

    for(int i = 0; i < 10; i++){
        if(!strcmp(Grocery[i].category, "Dairy")){

            printf("%16s", Grocery[i].name);

            printf("| %10s", Grocery[i].category);

            printf("| %6f", Grocery[i].price);

            printf("| %3d", Grocery[i].quantity); 

            printf("\n"); 

        }
    }
    return 0;
}