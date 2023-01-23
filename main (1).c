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
//Answer of 2
 #include<stdio.h>
int main()
{
int n, reverse=0, r;
printf("Enter a number: ");
scanf("%d", &n);
while(n!=0)
{
r=n%10;
reverse=reverse*10+r;
n/=10;
}
printf("Reversed Number: %d",reverse);
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
//Ansswer of 5
 #include <stdio.h>
int main() {
int num;
printf("Enter any number: ");
scanf("%d", &num);


if(num % 2 == 0)
printf("%d is even.", num);
else
printf("%d is odd.", num);

return 0;
}
//Answer of 4
 #include <stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);


if (year % 400 == 0) {
printf("%d is a leap year.", year);
}
else if (year % 100 == 0) {
printf("%d is not a leap year.", year);
}
else if (year % 4 == 0) {
printf("%d is a leap year.", year);
}
else {
printf("%d is not a leap year.", year);
}

return 0;
}
//Answer of 6
 #include<stdio.h>
int main()
{
int a, b;
printf("Read the integer from keyboard-");
scanf("%d",&a);
printf("\nInteger value = %d ",a);
a<<=3;
b=a;
printf("\nThe left shifted data is = %d ",b);
return 0;
}
//Answer of 7
#include <stdio.h>

int main() {
char day;

printf("Enter first letter of any day\n");
scanf("%c", &day);

switch(day){
case 'm' : printf("Monday\n");
break;
case 't' : printf("Tuesday\n");
break;
case 'w' : printf("Wednesday\n");
break;
case 'h' : printf("Thursday\n");
break;
case 'f' : printf("Friday\n");
break;
case 's' : printf("Saturday\n");
break;
case 'u' : printf("Sunday\n");
break;
default: printf("Invalid Input !!!!\n");
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