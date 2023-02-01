/*
  UB C Programming Unit 1 Lesson 2 Program 3
  Average and Sum of Entered Numbers
  Max Gombos
*/
#include <stdio.h> //imports function

int main(void) {
  float num1, num2, num3, num4, num5, numSum, numAvg;
  //initializes functions
  numSum = 0;
  numAvg = 0;
  
  printf("Enter a number: "); //asks user for a number
  scanf("%f", &num1);
  //collects the users input and formats it as a float
  printf("Enter a number: "); //asks user for a number
  scanf("%f", &num2);
  //collects the users input and formats it as a float
  printf("Enter a number: "); //asks user for a number
  scanf("%f", &num3);
  //collects the users input and formats it as a float
  printf("Enter a number: "); //asks user for a number
  scanf("%f", &num4);
  //collects the users input and formats it as a float
  printf("Enter a number: "); //asks user for a number
  scanf("%f", &num5);
  //collects the users input and formats it as a float

  printf("\nFirst number: %f", num1); //prints first number
  printf("\nSecond number: %f", num2); //prints second number
  printf("\nThird number: %f", num3); //prints third number
  printf("\nFourth number: %f", num4); //prints fourth number
  printf("\nFifth number: %f", num5); //prints fifth number

  numSum += num1;
  numSum += num2;
  numSum += num3;
  numSum += num4;
  numSum += num5;
  //^gets the sum of all numbers and stores it in numSum
  
  printf("\nSum: %f", numSum); //
  
  return 0;
}