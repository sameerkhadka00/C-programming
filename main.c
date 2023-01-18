//Answer of 1
	#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("Sum of two numbers is: %d", sum);
    
    
    
    return 0;
}
//Answer of 2
#include<stdio.h>
 
int main() {
 
   int rad;
   float area; 
   float CI;
 
   printf("The radius of the circle is: ");
   scanf("%d", &rad);
 
   area = 3.14 * rad * rad;  //the value of pi is 3.14
   printf("\nArea of circle : %f", area);
 
   CI = 2 * 3.14 * rad;
   printf("\nCircumference of the circle is: %f ", CI);
 
   return (0);
}
//Answer of 3
#include <stdio.h>
 
int main() {
 
   int Principal, Rate, Time, SI;
 
   printf("Principal is: ");
   scanf("%d", &Principal);
   
   printf("Rate of interest is: ");
   scanf("%d", &Rate);
   printf("Time is: ");
   scanf("%d", &Time);
   SI = (Principal*Rate*Time)/100;
   printf("\nThe simple interest is: %d", SI);

 
   return 0;
}
//Answer of 4
#include <stdio.h>
 
int main() {
 
   int C;
   float F;
 
   printf("Temp in centigrade is: ");
   scanf("%d", &C);
   
  
 
   F= 1.8*C+32;
    printf("Temp in Fahernheit is: %f", F);

 
   return 0;
}
//Answer of 5
#include <stdio.h>
 
int main() {
 
   int sum, S1, S2, S3, S4, S5, T;
   float Percentage;
   
   printf("Marks of subject 1 is: ");
   scanf("%d", &S1);
   printf("Marks of subject 2 is: ");
   scanf("%d", &S2);
   printf("Marks of subject 3 is: ");
   scanf("%d", &S3);
   printf("Marks of subject 4 is: ");
   scanf("%d", &S4);
   printf("Marks of subject 5 is: ");
   scanf("%d", &S5);
   printf("Total marks of all subject is: ");
   scanf("%d", &T);
   sum=S1+S2+S3+S4+S5;
    printf("\nSum of 5 subject is:  %d ", sum);
    Percentage=(sum*100)/T;
    printf("\nPercentage is: %f", Percentage);
  

 
   return 0;
}
