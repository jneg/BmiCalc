#ifndef BMI_H
#define BMI_H

// Returns one string from stdin up to ARG_MAX length.
double ParseDouble();

// Computes the BMI from |lbs| and |in|.
double Bmi(double ins, double lbs);

// Prints the results of |bmi|.
void PrintOutput(double bmi);

#endif
