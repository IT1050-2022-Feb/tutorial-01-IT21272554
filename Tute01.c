/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1, m2;
  float ave;

  printf("Enter mark of 1st subject:");
  scanf("%d", &m1);

  printf("Enter mark of 2nd subject:");
  scanf("%d", &m2);

  ave = (m1 + m2) / 2.0;

  printf("Your Average mark is : %.2f", ave);
  
  return 0;
}

