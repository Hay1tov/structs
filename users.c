#include <stdio.h>

struct User{
    char first_name[100];
    char last_name[100];
    int birth_year;
    char location[100];
    char phone[100];

};
int main(){

    int total;
    printf("Nechta foydalanuvchi ma'lumoti kerak: "); scanf("%d", &total);

    
    struct User users[total];
    for(int i = 0; i < total; i++){

        printf("%d- Foydalanuvchi \n\n%d. First name: ",i + 1,i+1);
        scanf("%s", users[i].first_name);

        printf("%d. Last name: ", i+1);
        scanf("%s", users[i].last_name);

        printf("%d. Tug'ilgan yil: ", i+1);
        scanf("%d", &users[i].birth_year);

        printf("%d. Manzil: ", i+1);
        scanf("%s", users[i].location);

        printf("%d. Telefon raqam: ", i+1);
        scanf("%s", users[i].phone);
    }
    printf("Foydalanuvchilar jadvali:\nFirst Name | Last Name | Birth Year | Location | Phone\n---------------------------------------------------------");

    for (int i = 0; i < total; i++){

       
        printf("%16s", users[i].first_name);
        printf("| %10s", users[i].last_name);
        printf("| %11d", users[i].birth_year);
        printf("| %9s", users[i].location);
        printf("| %s", users[i].phone);   
    }
    return 0;
}