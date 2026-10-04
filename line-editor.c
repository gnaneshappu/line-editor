#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 200

char lines[MAX_LINES][MAX_LENGTH];
int lineCount = 0;

void insertLine(int lineNumber, char text[]) {
    if (lineNumber < 1 || lineNumber > lineCount + 1) {
        printf("Invalid line number.\n");
        return;
    }

    for (int i = lineCount; i >= lineNumber; i--) {
        strcpy(lines[i], lines[i - 1]);
    }

    strcpy(lines[lineNumber - 1], text);
    lineCount++;

    printf("Line inserted successfully.\n");
}

void deleteLine(int lineNumber) {
    if (lineNumber < 1 || lineNumber > lineCount) {
        printf("Invalid line number.\n");
        return;
    }

    for (int i = lineNumber - 1; i < lineCount - 1; i++) {
        strcpy(lines[i], lines[i + 1]);
    }

    lineCount--;

    printf("Line deleted successfully.\n");
}

void displayLines() {
    if (lineCount == 0) {
        printf("Document is empty.\n");
        return;
    }

    printf("\n--- Document ---\n");

    for (int i = 0; i < lineCount; i++) {
        printf("%d: %s\n", i + 1, lines[i]);
    }
}

int main() {
    int choice;
    int lineNumber;
    char text[MAX_LENGTH];

    while (1) {
        printf("\n===== LINE EDITOR =====\n");
        printf("1. Insert line\n");
        printf("2. Delete line\n");
        printf("3. Display document\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        getchar();

        switch (choice) {

            case 1:
                printf("Enter line number: ");
                scanf("%d", &lineNumber);
                getchar();

                printf("Enter text: ");
                fgets(text, MAX_LENGTH, stdin);

                text[strcspn(text, "\n")] = '\0';

                insertLine(lineNumber, text);
                break;

            case 2:
                printf("Enter line number to delete: ");
                scanf("%d", &lineNumber);
                getchar();

                deleteLine(lineNumber);
                break;

            case 3:
                displayLines();
                break;

            case 4:
                printf("Exiting Line Editor...\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}