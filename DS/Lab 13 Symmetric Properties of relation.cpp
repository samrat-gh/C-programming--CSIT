#include <stdio.h>

// Function to check if a relation is symmetric
int isSymmetric(int relation[][2], int n) {
    for (int i = 0; i < n; i++) {
        int a = relation[i][0];
        int b = relation[i][1];
        int found = 0;

        // Check if (a, b) is symmetric
        for (int j = 0; j < n; j++) {
            if (relation[j][0] == b && relation[j][1] == a) {
                found = 1;
                break;
            }
        }

        if (!found) {
            return 0; // Not symmetric
        }
    }
    return 1; // Symmetric
}

int main() {
    int n;

    printf("Enter the number of ordered pairs: ");
    scanf("%d", &n);

    int relation[n][2];

    // Input the relation as a set of ordered pairs
    printf("Enter the ordered pairs (a b):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &relation[i][0], &relation[i][1]);
    }

    if (isSymmetric(relation, n)) {
        printf("The relation is symmetric.\n");
    } else {
        printf("The relation is not symmetric.\n");
    }

    return 0;
}

