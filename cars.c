#include <stdio.h>

struct cars{
    char model[100];
    char brand[100];
    int price; 
    int year; 

};
int main(){

    int total;
    printf("Nechta mashina kerak: "); scanf("%d", &total);

    
    struct cars mashinalar[total];
    for(int i = 0; i < total; i++){

        printf("%d. Mashina modelini kiriting: ",i+1);
        scanf("%s", mashinalar[i].model);

        printf("%d. Mashina brandini kiriting: ", i+1);
        scanf("%s", mashinalar[i].brand);

        printf("%d. Mashina narxini kiriting: ", i+1);
        scanf("%d", &mashinalar[i].price);

        printf("%d. Mashina yilini kiriting: ", i+1);
        scanf("%d", &mashinalar[i].year);
    }
    int max = mashinalar[0].price;
    printf("Ma'lumot:\n\n Model      | Brand     | Price    |  Year");

    for (int i = 0; i < total; i++){

        if (max <= mashinalar[i].price )
        {
            printf("\n%12s", mashinalar[i].model);

            printf("| %10s", mashinalar[i].brand);

            printf("| %9d", mashinalar[i].price);

            printf("| %d", mashinalar[i].year);
        }   
    }
    return 0;
}