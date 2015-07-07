#include <stdio.h>
#include <stdlib.h>

#include "Bmi.h"

static const int MULTIPLIER = 703;
static const double BMI_UNDERWEIGHT = 18.5;
static const double BMI_NORMALWEIGHT = 24.9;
static const double BMI_OVERWEIGHT = 29.9;

// Scans a double from stdin and returns it.
double ParseDouble() {
   double dbl;

   scanf("%lf", &dbl);

   return dbl;
}

// Computes the BMI from |lbs| and |inches|.
double Bmi(double lbs, double inches) {
   return lbs * MULTIPLIER / (inches * inches);
}

// Prints the results of |bmi|.
void PrintOutput(double bmi) {
   printf("Your BMI is: %.1f\n", bmi);

   if (bmi < BMI_UNDERWEIGHT) {
      printf("You are underweight. (<%.1f)\n", BMI_UNDERWEIGHT);
   }
   else if (bmi < BMI_NORMALWEIGHT) {
      printf("You are normal weight. (%.1f-%.1f)\n", BMI_UNDERWEIGHT,
       BMI_NORMALWEIGHT);
   }
   else if (bmi < BMI_OVERWEIGHT) {
      printf("You are overweight. (%.1f-%.1f)\n", BMI_NORMALWEIGHT,
       BMI_OVERWEIGHT);
   }
   else {
      printf("You are obese. (>%.1f)\n", BMI_OVERWEIGHT);
   }
}

int main(int argc, char **argv) {
   double lbs, inches;

   lbs = ParseDouble();
   inches = ParseDouble();
   PrintOutput(Bmi(lbs, inches));

   return EXIT_SUCCESS;
}
