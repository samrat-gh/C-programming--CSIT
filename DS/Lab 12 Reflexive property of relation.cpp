#include <stdio.h>

int main() {
    int n, y;

    printf("Enter the no. of elements of Set: ");
    scanf("%d", &n);

    int set[n];
    int i;

    printf("\nEnter elements of set A = ");
    for (i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    printf("\nSet A = {");
    for (i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d,", set[i]);
        } else {
            printf("%d", set[i]);
        }
    }
    printf("}\n\n");

    printf("Enter how many ordered pairs you want to enter: ");
    scanf("%d", &y);

    int a[y], b[y];

    printf("\nEnter the ordered pair of sets in the format a b: ");
    for (i = 0; i < y; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    printf("\nThe Relation is : {");
    for (i = 0; i < y; i++) {
        if (i < y - 1) {
            printf("(%d,%d) , ", a[i], b[i]);
        } else {
            printf("(%d,%d)", a[i], b[i]);
        }
    }
    printf("}\n");

    // Reflexive
    int r = 0;

           for (i = 0; i < y; i++) {
            if (a[i] == b[i]) {
                r++;
            }
        }
        if (r == n) {
            printf("\nThe above relation is reflexive\n");
        } else {
            printf("\nSorry, the above relation isn't reflexive\n");
        }
    }
        
    



