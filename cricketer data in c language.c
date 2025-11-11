#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int test_matches;
    float average_runs;
};

int main() {
    struct Cricketer players[10];
    int i, j;
    struct Cricketer temp;

    // Input data for 10 cricketers
    for (i = 0; i < 10; i++) {
        printf("\nEnter details for Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].name);  // To read string with spaces
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &players[i].test_matches);
        printf("Average Runs: ");
        scanf("%f", &players[i].average_runs);
    }

    // Sort by average_runs in ascending order
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (players[i].average_runs > players[j].average_runs) {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    // Display sorted data
    printf("\nCricketers sorted by Average Runs (Ascending Order):\n");
    for (i = 0; i < 10; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Age: %d\n", players[i].age);
        printf("Test Matches: %d\n", players[i].test_matches);
        printf("Average Runs: %.2f\n", players[i].average_runs);
    }

    return 0;
}