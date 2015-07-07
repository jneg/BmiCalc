#ifndef BMI_H
#define BMI_H

// Scans a double from stdin and returns it.
double ParseDouble();

// Computes the BMI from |lbs| and |inche|.
double Bmi(double lbs, double inches);

// Prints the results of |bmi|.
void PrintOutput(double bmi);

#endif
