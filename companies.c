#include <stdio.h>
#include <string.h>

struct Company{
    char name[100];
    char location[100];
};
struct Product{
    char name[100];
    float price;
    int quantity;
    struct Company Product;
};
int main(){
    int total;
    printf("Nechta kompaniya kiritmoqchisiz: ");
    scanf("%d", &total);

    struct Company company[total];
    for (int i = 0; i < total; i++){
        printf("------------------\n%d-Company:\n------------------\n%d.Company name: ",i + 1, i + 1);
        scanf("%s", company[i].name);

        printf("%d.Company location: ", i + 1);
        scanf("%s", company[i].location);
    }
    
    int total02;
    printf("Mahsulotlar sonini kiriting: ");
    scanf("%d", &total02);

    struct Product products[total02];
    for (int i = 0; i < total02; i++)
    {
        printf("%d-mahsulot nomi: ", i + 1 );
        scanf("%s", products[i].name);

        printf("%d-mahsulot narxi: ", i + 1);
        scanf("%f", &products[i].price);

        printf("%d-mahsulotning miqdori: ", i + 1);
        scanf("%d", &products[i].quantity);
    }

    printf("AQShda ishlab chiqarilgan mahsulotlar:\n     Name     | Price  | Quantity | Company Name | Company Location\n-------------------------------------------------------------------\n");
    for (int i = 1; i < total02; i++){

        if (!strcmp(company[i].location, "USA"))
        {
            printf("%9s", products[i].name);

            printf("| %7f", products[i].price);

            printf("| %9d", products[i].quantity);

            printf("| %13s", company[i].name);

            printf("| %s", company[i].location);

            printf("\n");
        }
    }
    return 0;
}