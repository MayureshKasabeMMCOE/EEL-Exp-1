#include <stdio.h>
#include <string.h>

int main() {
    int n, i, stat1, stat2;
    char name[50], position[20];

    printf("Enter number of players: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter player name: ");
        scanf("%s", name);
        printf("Enter position (Goalkeeper, Striker, Midfielder, Defender): ");
        scanf("%s", position);

        if (strcmp(position, "Goalkeeper") == 0) {
            printf("Enter saves and goals conceded: ");
            scanf("%d %d", &stat1, &stat2);
            printf("%s (Goalkeeper) - Saves: %d, Goals Conceded: %d\n", name, stat1, stat2);
        } else if (strcmp(position, "Striker") == 0) {
            printf("Enter goals scored and shots on target: ");
            scanf("%d %d", &stat1, &stat2);
            printf("%s (Striker) - Goals: %d, Shots on Target: %d\n", name, stat1, stat2);
        } else if (strcmp(position, "Midfielder") == 0) {
            printf("Enter assists and passes completed: ");
            scanf("%d %d", &stat1, &stat2);
            printf("%s (Midfielder) - Assists: %d, Passes: %d\n", name, stat1, stat2);
        } else if (strcmp(position, "Defender") == 0) {
            printf("Enter tackles and clearances: ");
            scanf("%d %d", &stat1, &stat2);
            printf("%s (Defender) - Tackles: %d, Clearances: %d\n", name, stat1, stat2);
        } else {
            printf("Invalid position entered.\n");
        }
    }
    return 0;
}
