//Answer of 2
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a; // Store the value of *a in a temporary variable
    *a = *b;       // Swap the values of *a and *b
    *b = temp;     // Store the value of *a in *b
}

// Bubble sort function to sort an array in ascending order
void bubble_sort(int arr[], int n) {
    bool swapped; // Flag to check if any elements were swapped in the inner loop

    // Loop through the array n-1 times
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        // Loop through the array n-i-1 times to sort the largest elements to the end
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // If no elements were swapped, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[MAX_SIZE];  // Array to store the elements
    int n;              // Number of elements

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);  // Sort the array

    // Print the sorted odd numbers
    printf("Sorted odd numbers: \n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d\n", arr[i]);
        }
    }

    // Print the sorted even numbers
    printf("Sorted even numbers: \n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}

//Answer of 3
#include <stdio.h>

int main() {
    int n;      // Number of cuts
    int pieces; // Number of pieces

    printf("Enter the number of cuts: ");
    scanf("%d", &n);

    // Initialize the number of pieces to 1
    pieces = 1;

    // Multiply the number of pieces by 2 for each cut
    for (int i = 0; i < n; i++) {
        pieces *= 2;
    }

    // Print the result
    printf("The number of pieces after %d cuts is %d\n", n, pieces);

    return 0;
}


//Answer of 4
#include <stdio.h>

int main() {
    int number; // Decimal number
    int ones = 0; // Number of 1s

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    // Loop until the number is not 0
    while (number > 0) {
        // Check if the last digit is 1
        if (number % 10 == 1) {
            ones++;
        }
        // Remove the last digit from the number
        number /= 10;
    }

    // Print the result
    printf("The number of 1s in the given decimal number is %d\n", ones);

    return 0;
}
//Answer of 1
#include <stdio.h>

int main() {
    int n;        // Number of elements in the array
    int a[100];   // Array to store the numbers
    int min;      // Index of the minimum element
    int temp;     // Temporary variable for swapping

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read in the numbers from the keyboard
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Perform the selection sort
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        // Swap the minimum element with the first unsorted element
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    // Print the sorted numbers
    printf("The sorted numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
