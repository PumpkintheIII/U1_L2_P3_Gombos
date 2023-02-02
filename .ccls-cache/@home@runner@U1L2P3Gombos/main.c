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

  printf("Enter five numbers, and this program will output their sum and average.\n"); //instructions
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

  numSum += num1;
  numSum += num2;
  numSum += num3;
  numSum += num4;
  numSum += num5;
  //^gets the sum of all numbers and stores it in numSum
  
  printf("\nSum: %f", numSum); //prints numSum

  numAvg = numSum/5; //finds the average of the numbers

  printf("\nAverage: %f", numAvg); 
  //prints the average of the numbers, formatted as a float
  
  return 0; //ends the program
}