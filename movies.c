#include <stdio.h>
#include <string.h>

struct Genre
{
    char name[100];
    char description[100];
};
struct Movie
{
    char name[100];
    float rating;
    int release_year;
    struct Genre Movie;
};
int main(){
    int total;
    printf("Nechta janr kiritmoqchisiz: ");
    scanf("%d", &total);

    struct Genre genre[total];
    for (int i = 0; i < total; i++){

        printf("-------------------\n%d-Janr:\n-------------------\n%d. Name: ",i + 1, i + 1);
        scanf("%s", genre[i].name);

        printf("%d. Description: ", i + 1);
        scanf("%s", genre[i].description);
        
    }
    
    int total02;
    printf("Nechta kino kiritmoqchisiz: ");
    scanf("%d", &total02);

    struct Movie movies[total02];
    for (int i = 0; i < total02; i++){

        printf("%d-kinoning nomini kiritng: ", i + 1 );
        scanf("%s", movies[i].name);

        printf("%d-kinoning reytingi kiriting: ", i + 1);
        scanf("%f", &movies[i].rating);

        printf("%d-kinoning yilini kiriting: ", i + 1);
        scanf("%d", &movies[i].release_year);
    }

    printf("Action janridagi kinolar:\nName           | Rating | Release Year | Genre Name  | Genre Description\n--------------------------------------------------------------------------\n");
    for (int i = 1; i < total02; i++)
    {
        if (!strcmp(genre[i].name, "Action"))
        {
            printf("%15s", movies[i].name);

            printf("| %7f", movies[i].rating);

            printf("| %13d", movies[i].release_year);

            printf("| %12s", genre[i].name);

            printf("| %s", genre[i].description);

            printf("\n");
        }
    }

    return 0;
}