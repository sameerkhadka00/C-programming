//Answer of 1
#include <stdio.h>

void rotate(int arr[], int n, int m) {
    // Determine the number of actual rotations needed
    m = m % n;

    int temp[m];

    // Copy the first m elements to a temporary array
    for (int i = 0; i < m; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by m positions
    for (int i = m; i < n; i++) {
        arr[i - m] = arr[i];
    }

    // Copy the temporary array to the end of the original array
    for (int i = 0; i < m; i++) {
        arr[n - m + i] = temp[i];
    }
}

int main() {
    int n, m;
    printf("Enter an array size: ");
    scanf("%d", &n);
    printf("Enter number of rotations: ");
    scanf("%d", &m);

    int arr[n];
    printf("Enter numbers for your array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rotate(arr, n, m);

    printf("Results: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
//Answer of 2
#include <stdio.h>

int main() {
    int L, n, start, end, i, j, num_trees_to_move = 0;
    printf("Enter the length of the road: ");
    scanf("%d", &L);
    printf("Enter how many areas are needed for new facilities: ");
    scanf("%d", &n);
    int trees[L+1];
    for (i = 0; i <= L; i++) {
        trees[i] = 1;  // Initialize all trees to be present in the first district
    }
    for (i = 0; i < n; i++) {
        printf("area#%d starting point & ending point: ", i+1);
        scanf("%d %d", &start, &end);
        for (j = start; j <= end; j++) {
            trees[j] = 0;  // Mark trees that need to be moved
        }
    }
    for (i = 0; i <= L; i++) {
        if (trees[i] == 0) {
            num_trees_to_move++;  // Count the number of trees that need to be moved
        }
    }
    printf("Result of number of trees needed to move: %d\n", num_trees_to_move);
    return 0;
}
//Answer of 3
//Answer of 3
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("3");
        if (num % 5 == 0) {
            printf(", 5");
            if (num % 7 == 0) {
                printf(", 7\n");
            } else {
                printf("\n");
            }
        } else if (num % 7 == 0) {
            printf(", 7\n");
        } else {
            printf("\n");
        }
    } else if (num % 5 == 0) {
        printf("5");
        if (num % 7 == 0) {
            printf(", 7\n");
        } else {
            printf("\n");
        }
    } else if (num % 7 == 0) {
        printf("7\n");
    } else {
        printf("NOT\n");
    }

    return 0;
}
//Answer of 4
#include <stdio.h>

int main() {
    int lakes[4];
    int b, d, t, h;

    // Get lake sizes from students
    printf("Enter the size of lake d: ");
    scanf("%d", &d);
    printf("Enter the size of lake h: ");
    scanf("%d", &h);
    printf("Enter the size of lake b: ");
    scanf("%d", &b);
    printf("Enter the size of lake t: ");
    scanf("%d", &t);

    // Store sizes in array
    lakes[0] = b;
    lakes[1] = d;
    lakes[2] = t;
    lakes[3] = h;

    // Sort array in descending order
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (lakes[j] < lakes[j + 1]) {
                int temp = lakes[j];
                lakes[j] = lakes[j + 1];
                lakes[j + 1] = temp;
            }
        }
    }

    // Print sorted array with corresponding lake names
    printf("The size sequence from big to small is:\n");
    for (int i = 0; i < 4; i++) {
        if (lakes[i] == b) {
            printf("Lake b: %d\n", lakes[i]);
        } else if (lakes[i] == d) {
            printf("Lake d: %d\n", lakes[i]);
        } else if (lakes[i] == t) {
            printf("Lake t: %d\n", lakes[i]);
        } else if (lakes[i] == h) {
            printf("Lake h: %d\n", lakes[i]);
        }
    }

    return 0;
}
//Answer of 5
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    printf("%d ", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d ", n);
    }
    printf("\n");
    return 0;
}
