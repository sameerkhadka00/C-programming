//Answer 1
 	#include <stdio.h>
#include <stdlib.h>

#define MIN_DIFF 0.1
#define A 1
#define B 2

struct Bacterium {
  int label;
  int original;
  int new_num;
  double PR;
  int subspecies;
};

void sort_bacterium(struct Bacterium *arr, int size);
int classify_bacterium(struct Bacterium *arr, int size);

int main() {
  int i, n;
  printf("Enter total number of Petri dishes: ");
  scanf("%d", &n);
  struct Bacterium arr[n];

  printf("Enter Petri dish label, original bacterial number, new bacterial number after one hour reproduction:\n");
  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &arr[i].label, &arr[i].original, &arr[i].new_num);
    arr[i].PR = (double) arr[i].new_num / arr[i].original;
  }

  sort_bacterium(arr, n);
  int num_a = classify_bacterium(arr, n);

  printf("Running results:\n");
  printf("%d in A sub-species and Petri dish labels from smaller PR to bigger PR are ", num_a);
  for (i = 0; i < num_a; i++) {
    printf("%d ", arr[i].label);
  }
  printf("\n%d in B sub-species and Petri dish labels from smaller PR to bigger PR are ", n - num_a);
  for (i = num_a; i < n; i++) {
    printf("%d ", arr[i].label);
  }

  return 0;
}

void sort_bacterium(struct Bacterium *arr, int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = i + 1; j < size; j++) {
      if (arr[i].PR > arr[j].PR) {
        struct Bacterium temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int classify_bacterium(struct Bacterium *arr, int size) {
  int i, num_a = 1;
  arr[0].subspecies = A;
  for (i = 1; i < size; i++) {
    if (arr[i].PR - arr[i - 1].PR > MIN_DIFF) {
      arr[i].subspecies = arr[i - 1].subspecies == A ? B : A;
      if (arr[i].subspecies == A) {
        num_a++;
      }
    } else {
      arr[i].subspecies = arr[i - 1].subspecies;
    }
  }
  return num_a;
}
//Answer 2
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, num, min_even = 1000000000, max_odd = -1000000000;

    printf("Enter a series of integer numbers: ");

    while (scanf("%d", &num) == 1) {
        // Check if the number is even or odd
        if (num % 2 == 0) {
            // Update the minimum even number
            if (num < min_even) {
                min_even = num;
            }
        } else {
            // Update the maximum odd number
            if (num > max_odd) {
                max_odd = num;
            }
        }
    }

    int result = abs(max_odd - min_even);
    printf("Result is: %d\n", result);

    return 0;
}
//Answer 3
#include <stdio.h>

#include <stdlib.h>

// Function to find the king of monkeys
int findKing(int n, int m)
{
    // array to store the status of each monkey
    int *monkeys = (int*)malloc(n * sizeof(int));
    int count = n; // count of remaining monkeys
    int i, j;

    // initialize the status of each monkey to 1 (present in the competition)
    for (i = 0; i < n; i++)
        monkeys[i] = 1;

    // loop until only one monkey is left
    i = -1;
    while (count > 1)
    {
        for (j = 0; j < m;)
        {
            i = (i + 1) % n;
            if (monkeys[i] == 1)
                j++;
        }

        // remove the monkey from the competition
        monkeys[i] = 0;
        count--;
    }

    // find the index of the remaining monkey
    for (i = 0; i < n; i++)
        if (monkeys[i] == 1)
            break;

    // return the number of the king monkey
    return i;
}

int main()
{
    int n, m, king;

    // input number of monkeys and value of m
    printf("Enter total number of monkeys in a group: ");
    scanf("%d", &n);
    printf("Enter m value: ");
    scanf("%d", &m);

    // find the king of the monkeys
    king = findKing(n, m);

    // print the result
    printf("The king will be %d\n", king);

    return 0;
}
//Answer 4
#include <stdio.h>


int main() {
    int payment, numOfBills = 0;
    int billValues[] = {100, 50, 20, 10, 5, 1}; // bills available
    int numOfEachBill[6] = {0}; // number of each bill used

    // getting the payment amount
    printf("Enter total payment: ");
    scanf("%d", &payment);

    // loop through each bill value
    for (int i = 0; i < 6; i++) {
        // divide the payment amount by bill value and store the result
        numOfEachBill[i] = payment / billValues[i];
        // add the number of bills used to total number of bills
        numOfBills += numOfEachBill[i];
        // update the payment amount by taking out the bill value multiplied by number of bills used
        payment = payment - billValues[i] * numOfEachBill[i];
    }

    // print the result
    printf("Result of minimum number of bills: %d\n", numOfBills);
    printf("$100 bill: %d\n", numOfEachBill[0]);
    printf("$50 bill: %d\n", numOfEachBill[1]);
    printf("$20 bill: %d\n", numOfEachBill[2]);
    printf("$10 bill: %d\n", numOfEachBill[3]);
    printf("$5 bill: %d\n", numOfEachBill[4]);
    printf("$1 bill: %d\n", numOfEachBill[5]);

    return 0;
}
//Answer 5
#include <stdio.h>


int main() {
   int bestCar = 0;
   int correctExpert = 0;

   // Expert A says car #2 is the best
   for (int i = 1; i <= 4; i++) {
      if (i != 2) {
         int count = 0;
         if (i != 3) count++;
         if (i != 4) count++;
         if (count == 2) {
            bestCar = i;
            correctExpert = 1;
            break;
         }
      }
   }

   // Expert B says car #4 is the best
   if (!bestCar) {
      for (int i = 1; i <= 4; i++) {
         if (i != 4) {
            int count = 0;
            if (i != 2) count++;
            if (i != 3) count++;
            if (count == 2) {
               bestCar = i;
               correctExpert = 2;
               break;
            }
         }
      }
   }

   // Expert C says car #3 is NOT the best
   if (!bestCar) {
      for (int i = 1; i <= 4; i++) {
         if (i != 3) {
            int count = 0;
            if (i != 2) count++;
            if (i != 4) count++;
            if (count == 2) {
               bestCar = i;
               correctExpert = 3;
               break;
            }
         }
      }
   }

   // Expert D says Expert B is wrong
   if (!bestCar) {
      for (int i = 1; i <= 4; i++) {
         if (i != 4) {
            int count = 0;
            if (i != 2) count++;
            if (i != 3) count++;
            if (count == 2) {
               bestCar = i;
               correctExpert = 4;
               break;
            }
         }
      }
   }

   printf("The best car is #%d\n", bestCar);
   printf("The correct expert is Expert #%d\n", correctExpert);

   return 0;
}
//Answer 6
#include <stdio.h>

#define MAX_ROW 100
#define MAX_COL 100

int main() {
    int row, col;
    int image[MAX_ROW][MAX_COL];
    int malignant = 0;
    int i, j;

    printf("Enter size of row & column: ");
    scanf("%d %d", &row, &col);

    printf("Enter each element:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    for (i = 1; i < row - 1; i++) {
        for (j = 1; j < col - 1; j++) {
            if (image[i][j] < 50 && (image[i - 1][j] >= 50 || image[i + 1][j] >= 50 ||
                image[i][j - 1] >= 50 || image[i][j + 1] >= 50)) {
                malignant++;
            }
        }
    }

    printf("Result of malignant cell detection: %d\n", malignant);
    return 0;
}
