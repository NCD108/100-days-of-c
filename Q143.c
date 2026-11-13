#include <stdio.h>

int main(void) {
    int n, roll, marks;
    char name[100];

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int topRoll = 0;
    int topMarks = -1;
    char topName[100] = "";

    for (int i = 0; i < n; i++) {
        if (scanf(" %99[^ ,:0-9] %d %d", name, &roll, &marks) != 3) {
            break;
        }

        if (marks > topMarks) {
            topMarks = marks;
            topRoll = roll;
            snprintf(topName, sizeof(topName), "%s", name);
        }
    }

    printf("Topper: %s (Marks: %d)\n", topName, topMarks);
    return 0;
}
