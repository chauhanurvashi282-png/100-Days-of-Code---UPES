//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    double principal, rate, time;
    double simpleInterest, amount, compoundInterest;

    // Take inputs from the user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    // 1. Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100.0;

    // 2. Calculate Compound Interest (Compounded Annually)
    // Formula: Amount = P * (1 + R/100)^T
    // Formula: CI = Amount - P
    amount = principal * pow((1.0 + (rate / 100.0)), time);
    compoundInterest = amount - principal;

    // Display the calculated results
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount  : %.2lf\n", principal);
    printf("Interest Rate     : %.2lf%%\n", rate);
    printf("Time Period       : %.2lf years\n\n", time);
    
    printf("Simple Interest   : %.2lf\n", simpleInterest);
    printf("Compound Interest : %.2lf\n", compoundInterest);
    printf("Total Amount (CI) : %.2lf\n", amount);

    return 0;
}
