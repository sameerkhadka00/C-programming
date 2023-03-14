//Answer of 1
#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter size of first matrix (m x n): ");
    scanf("%d%d", &m, &n);
    printf("Enter size of second matrix (p x q): ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Error: Number of columns in first matrix should be equal to number of rows in second matrix.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter first matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Result after multiplication of two arrays:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//Answer of 2
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers a & b: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping, a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping by pointer, a = %d, b = %d\n", a, b);

    return 0;
}
//Answer of 3
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);
    printf("Result: ");
    puts(str);
    return 0;
}
//Answer of 4
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);

    fact = factorial(n);
    printf("Factorial=%d\n", fact);

    return 0;
}
//Answer of 5
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);

    // Make a copy of the string
    strcpy(rev, str);

    // Reverse the copy
    strrev(rev);

    // Check if the original string and the reversed string are the same
    if (strcmp(str, rev) == 0) {
        printf("yes, it is a palindrome string\n");
    } else {
        printf("not a palindrome string\n");
    }

    return 0;
}
//Answer of 6
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merge[200];
    int size1, size2, size3 = 0;

    printf("Enter the size of 1st array: ");
    scanf("%d", &size1);

    printf("Enter each element: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
        merge[size3++] = arr1[i];
    }

    printf("Enter the size of 2nd array: ");
    scanf("%d", &size2);

    printf("Enter each element: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
        int flag = 0;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            merge[size3++] = arr2[i];
        }
    }

    printf("Result of merging: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}
//Answer of 7
#include <stdio.h>

int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k);
}

void printBinomialCoeff(int n) {
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the order of binomial power expression: ");
    scanf("%d", &n);
    printf("Results of printing on monitor: \n");
    printBinomialCoeff(n);
    return 0;
}
//Answer of 8
#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers for each element: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    removeDuplicates(arr, n);
    printf("Results of removing duplicate: ");
    for (i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[n-1]);
    return 0;
}
//Answer of 9
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    
    for(int j = low; j <= high - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

int kthSmallest(int arr[], int low, int high, int k){
    if(k > 0 && k <= high - low + 1){
        int pos = partition(arr, low, high);
        
        if(pos - low == k - 1){
            return arr[pos];
        }
        
        if(pos - low > k - 1){
            return kthSmallest(arr, low, pos - 1, k);
        }
        
        return kthSmallest(arr, pos + 1, high, k - pos + low - 1);
    }
    
    return -1;
}

int main(){
    int size, k;
    printf("Enter size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter numbers for each element:");
    
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter desired kth smallest element:");
    scanf("%d", &k);
    int kth = kthSmallest(arr, 0, size - 1, k);
    
    if(kth == -1){
        printf("Invalid k value");
    }
    else{
        printf("Result of %dth smallest element: %d", k, kth);
    }
    
    return 0;
}
//Answer of 10
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float arr[100], sum = 0.0, mean, deviation = 0.0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the numbers for each element: ");
    for (i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    for (i = 0; i < n; ++i)
        deviation += pow(arr[i] - mean, 2);

    deviation = sqrt(deviation / n);

    printf("Result of Standard Deviation: %f\n", deviation);

    return 0;
}
