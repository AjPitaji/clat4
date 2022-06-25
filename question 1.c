// Write a C program that takes the input from the user as a floating point (real)
// number which represents the centimetres. Print out the equivalent number of feet
// and inches, with feet using function and the inches given to an accuracy of two
// decimal place. Assume 2.54 centimetres per inch, and 12 inches per foot. For
// example, if the input value is 333.3, the output format should be:10.9 feet and 131.2
// inches
// Rubrics for Evaluation:
// Identifying the correct logic (1 mark)
// Syntactically correct code (2 mark)
// Getting proper output (2 marks)

#include <stdio.h>

int main() 
{
  float cm,feet,inches;   
  printf("Enter distance in centimeters\n");
  scanf("%f",&cm);
  feet = cm*0.0328084;
  inches= cm*0.393701;
  printf("distance in feet %.1f\n",feet);
  printf("distance in inches %.1f\n",inches);
  return 0;
}