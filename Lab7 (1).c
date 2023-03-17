// Answer of 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q, c, d, k;
    int **first, **second, **multiply;

    printf("Enter size of the first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter size of the second matrix (p x q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    // Allocate memory for the matrices
    first = (int **)malloc(m * sizeof(int *));
    for (c = 0; c < m; c++)
        first[c] = (int *)malloc(n * sizeof(int));

    second = (int **)malloc(p * sizeof(int *));
    for (c = 0; c < p; c++)
        second[c] = (int *)malloc(q * sizeof(int));

    multiply = (int **)malloc(m * sizeof(int *));
    for (c = 0; c < m; c++)
        multiply[c] = (int *)malloc(q * sizeof(int));

    // Read input elements for the matrices
    printf("Enter the elements of first matrix:\n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the elements of second matrix:\n");
    for (c = 0; c < p; c++)
        for (d = 0; d < q; d++)
            scanf("%d", &second[c][d]);

    // Perform matrix multiplication
    for (c = 0; c < m; c++) {
        for (d = 0; d < q; d++) {
            multiply[c][d] = 0;

            for (k = 0; k < n; k++) {
                multiply[c][d] += first[c][k] * second[k][d];
            }
        }
    }

    // Print the result
    printf("Result after multiplication of two matrices:\n");
    for (c = 0; c < m; c++) {
        for (d = 0; d < q; d++) {
            printf("%d\t", multiply[c][d]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (c = 0; c < m; c++)
        free(first[c]);
    free(first);

    for (c = 0; c < p; c++)
        free(second[c]);
    free(second);

    for (c = 0; c < m; c++)
        free(multiply[c]);
    free(multiply);

    return 0;
}
//Answer of 2
#include <stdio.h>

void swap(int *ptr1, int *ptr2);

int main() {
    int a, b;

    printf("Enter two numbers a & b: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping, a = %d, b = %d\n", a, b);

    // Pass the addresses of a and b to the swap() function
    swap(&a, &b);

    printf("After swapping by pointer, a = %d, b = %d\n", a, b);

    return 0;
}

// Function to swap two integers using pointers
void swap(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}
//Answer of 3
#include <stdio.h>

int main() {
    char c;

    printf("Enter any string: ");

    while ((c = getchar()) != '\n') {
        putchar(c);
    }

    printf("\n");

    return 0;
}
//Answer of 4
#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
//Answer of 5
#include <stdio.h>
#include <string.h>

int is_palindrome(char str[], int start, int end);

int main() {
    char str[100];
    int len;
    
    printf("Enter any string: ");
    scanf("%s", str);
    
    len = strlen(str);
    if (is_palindrome(str, 0, len-1)) {
        printf("%s is a palindrome.\n", str);
    }
    else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}

int is_palindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (str[start] == str[end]) {
        return is_palindrome(str, start+1, end-1);
    }
    return 0;
}
//Answer of 6
#include <stdio.h>

int main() {
    int size1, size2, i, j, k, flag;
    printf("Enter the size of 1st array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter each element: ");
    for(i=0; i<size1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the size of 2nd array: ");
    scanf("%d", &size2);
    int arr2[size2], arr3[size1+size2];
    printf("Enter each element: ");
    for(i=0; i<size2; i++)
        scanf("%d", &arr2[i]);
    // copy all elements of the first array to the third array
    for(i=0; i<size1; i++)
        arr3[i] = arr1[i];
    k = size1;
    // merge elements of the second array to the third array
    for(i=0; i<size2; i++) {
        flag = 0;
        for(j=0; j<size1; j++) {
            if(arr2[i] == arr1[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            arr3[k] = arr2[i];
            k++;
        }
    }
    // print the result
    printf("Result of merging: ");
    for(i=0; i<k; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}
//Answer of 7
#include <stdio.h>

// function to calculate binomial coefficient
int binomial_coefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
    }
}

// function to print binomial coefficient table
void print_binomial_coefficient(int order) {
    for (int n = 0; n <= order; n++) {
        for (int k = 0; k <= n; k++) {
            printf("%d ", binomial_coefficient(n, k));
        }
        printf("\n");
    }
}

// main function
int main() {
    int order;
    printf("Enter the order of binomial power expression: ");
    scanf("%d", &order);
    printf("Results of printing on monitor:\n");
    print_binomial_coefficient(order);
    return 0;
}
//Answer of 8
#include <stdio.h>

void removeDuplicates(int arr[], int size)
{
    int i, j, k;

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<size-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
}

int main()
{
    int size, i;

    printf("Enter size of the array:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter numbers for each element:");

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, size);

    printf("Results of removing duplicate:");

    for(i=0; i<size; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
//Answer of 9
#include <stdio.h>

int find_kth_smallest(int arr[], int n, int k) {
    int freq[1000] = {0}; // assuming max element value is 1000
    int i, count = 0;
    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            count += freq[i];
            if (count >= k) {
                return i;
            }
        }
    }
    return -1; // kth smallest not found
}

int main() {
    int n, arr[1000], k;
    printf("Enter size of the array:");
    scanf("%d", &n);
    printf("Enter numbers for each element:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter desired kth smallest element:");
    scanf("%d", &k);
    int kth_smallest = find_kth_smallest(arr, n, k);
    if (kth_smallest == -1) {
        printf("Kth smallest element not found.\n");
    } else {
        printf("Result of %dth smallest element: %d\n", k, kth_smallest);
    }
    return 0;
}
//Answer of 10
#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main() {
    int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}
