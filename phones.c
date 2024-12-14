#include <stdio.h>

struct Phones{
    char name[100];
    char brand[100];
    int price;
    char ram[100];
    char color[100];

};
int main(){

    int total;
    printf("Nechta telefon kerak: "); scanf("%d", &total);

    
    struct Phones telefonlar[total];
    for(int i = 0; i < total; i++){

        printf("%d- Phone: \n\n%d. Phone name: ",i + 1,i+1);
        scanf("%s", telefonlar[i].name);

        printf("%d. Brand: ", i+1);
        scanf("%s", telefonlar[i].brand);

        printf("%d. Price: ", i+1);
        scanf("%d", &telefonlar[i].price);

        printf("%d. RAM: ", i+1);
        scanf("%s", telefonlar[i].ram);

        printf("%d. Color: ", i+1);
        scanf("%s", telefonlar[i].color);
    }
    printf("500$ dan qimmatlari:\nName    | Brand   | Price | RAM | Color \n---------------------------------------------------------\n");

    for (int i = 0; i < total; i++){
        
        if(500 <= telefonlar[i].price){

            printf("%8s", telefonlar[i].name);

            printf("| %8s", telefonlar[i].brand);

            printf("| %6d", telefonlar[i].price);

            printf("| %4s", telefonlar[i].ram);
            
            printf("| %6s", telefonlar[i].color); 

            printf("\n"); 

        }
    }
    return 0;
}