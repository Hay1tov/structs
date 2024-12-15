#include <stdio.h>
#include <string.h>

struct Stadium {
    char name[100]; 
    int capacity;   
};

struct Team {
    char team_name[100];  
    char coach[100];    
    int players_count;    
    int founded_year;     
    struct Stadium stadium;  
};

int main(){
    
    int total;
    printf("4: ");
    scanf("%d", &total);

    struct Team teams[total];

    for (int i = 0; i < total; i++) 
    {
        printf("Team name: ", i + 1);
        scanf("%s", teams[i].team_name);

        printf("Team coach: ", i + 1);
        scanf("%s", teams[i].coach);

        printf("Team players count: ", i + 1);
        scanf("%d", &teams[i].players_count);

        printf("Team founded year: ", i + 1);
        scanf("%d", &teams[i].founded_year);

        printf("Stadium name: ");
        scanf("%s", teams[i].stadium.name);

        printf("Stadium capacity: ", i + 1);
        scanf("%d", &teams[i].stadium.capacity);
    }

    int total02 = 0; 

    for (int i = 1; i < total; i++) {
        if (teams[i].founded_year < teams[total02].founded_year) {
            total02 = i;
        }
    }
        printf("\nEng eski jamoa:\nTeam Name    | Coach       | Players Count | Founded Year | Stadium Name\n----------------------------------------------------------------------\n");
        
        printf("%12s",teams[total02].team_name);

        printf ("%11s",teams[total02].coach); 

        printf("%13d",teams[total02].players_count);

        printf("%12d",teams[total02].founded_year);
        
        printf("%s\n",teams[total02].stadium.name);

        printf("\n");

    return 0;
}