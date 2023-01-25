//NUM 1:
#include<stdio.h>
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("Numbers after swapping: %d %d", a, b);
}
//NUM 2:
#include <stdio.h>

int main() {
    int num, reverse = 0;
    printf("Enter any number to get its reverse: ");
    scanf("%d", &num);
    // loop to reverse the number
    while (num > 0) {
        reverse = reverse * 10 + num % 10; // add last digit of num to reverse
        num = num / 10; // remove last digit from num
    }
    printf("Reverse = %d", reverse);
    return 0;
}
//answer of 3
#include <stdio.h>
int main() {

double num1, num2, num3;

printf("Enter a value for a : ");
scanf("%lf", &num1);
printf("Enter a value for b: ");
scanf("%lf", &num2);
printf("Enter a value for c: ");
scanf("%lf", &num3);

if (num1 >= num2 && num1 >= num3)
printf("%lf is the greatest number.", num1);

else if (num2 >= num1 && num2 >= num3)
printf("%lf is the greatest number.", num2);


else
printf("%lf is the greatest number.", num3);

return 0;
}
//NUM 4:
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year", year);
            } else {
                printf("%d is not a leap year", year);
            }
        } else {
            printf("%d is a leap year", year);
        }
    } else {
        printf("%d is not a leap year", year);
    }
    return 0;
}

//NUM 5:
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
    return 0;
}
//NUM 6:
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int shiftedNum = num << 3;
    printf("The number shifted 3 bits left is: %d\n", shiftedNum);
    return 0;
}

//Num 7:
#include <stdio.h>

int main() {
    char day;
    printf("Enter m for Monday, t for Tuesday, w for Wednesday, h for Thursday, f for Friday, s for Saturday, u for Sunday: ");
    scanf(" %c", &day); // %c is used to read a character input

    switch (day) {
        case 'm': // if day is 'm'
            printf("Monday\n"); // display Monday
            break;
        case 't': // if day is 't'
            printf("Tuesday\n"); // display Tuesday
            break;
        case 'w': // if day is 'w'
            printf("Wednesday\n"); // display Wednesday
            break;
        case 'h': // if day is 'h'
            printf("Thursday\n"); // display Thursday
            break;
        case 'f': // if day is 'f'
            printf("Friday\n"); // display Friday
            break;
        case 's': // if day is 's'
            printf("Saturday\n"); // display Saturday
            break;
        case 'u': // if day is 'u'
            printf("Sunday\n"); // display Sunday
            break;
        default: // if day is not one of 'm', 't', 'w', 'h', 'f', 's' or 'u'
            printf("Invalid input. Please enter m, t, w, h, f, s or u.\n");
    }
    return 0;
}
//Answer of 8
 #include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
int o;
printf("Enter the values of a & b: ");
scanf("%d %d",&a,&b);
printf("Enter:\n 1.for sum\n 2.for subtraction\n 3.for multiply\n 4.for division: ");
scanf("%d",&o);
switch(o)
{
case 1 :
printf("Sum of %d and %d is : %d",a,b,a+b);
break;
case 2 :
printf("Difference of %d and %d is : %d",a,b,a-b);
break;
case 3 :
printf("Multiplication of %d and %d is : %d",a,b,a*b);
break;
case 4 :
printf("Division of Two Numbers is %d : ",a/b);
break;
default :
printf(" Invalid error.");
break;
}
return 0;
}
//Answer of 9
#include <stdio.h>
void main()
{
int i,n,sum=0;
printf("enter any number : ");
scanf("%d",&n);
printf("\nThe first %d numbers are:\n",n);
for(i=1;i<=n;i++)
{
printf("%d ",i);
sum+=i;
}
printf("\nThe Sum of numbers upto %d terms : %d \n",n,sum);

}
//Answer of 10
 #include<stdio.h>
int main()
{
int i, j, row, space;
printf("Enter Number of Rows: ");
scanf("%d", &row);
space = row-1;
for(i=1; i<=row; i++)
{
for(j=1; j<=space; j++)
printf(" ");
space--;
for(j=1; j<=(2*i-1); j++)
printf("*");
printf("\n");
}
space = 1;
for(i=1; i<=(row-1); i++)
{
for(j=1; j<=space; j++)
printf(" ");
space++;
for(j=1; j<=(2*(row-i)-1); j++)
printf("*");
printf("\n");
}
return 0;
}
