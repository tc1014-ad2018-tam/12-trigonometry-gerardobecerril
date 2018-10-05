/*
 * This program takes an angle and returns the sine, cosine, tangent, secant, cosecant and cotangent of said angle.
 *
 * Author: Gerardo González Becerril.
 * Date: October 4th, 2018.
 * E-mail: a01411981@itesm.mx
 */

 // Libraries needed.
#include <stdio.h>
#include <math.h>

// Function that simply prints the sine of a double.
double sine(double x) {
    printf("The sine is: %.4lf.\n", sin(x));
    return 0;
}

// Function that simply prints the cosine of a double.
double cosine(double x) {
    printf("The cosine is: %.4lf.\n", cos(x));
    return 0;
}

// Function that checks whether the original input minus 90 is divisible by 180. If so, the tangent is non-existent.
// Otherwise, it simply prints the tangent of a double.
double tangent(double x, double x2) {
    if (fmod((x - 90), 180) == 0) {
        printf("There is no tangent.\n");
    } else {
        printf("The tangent is: %.4lf.\n", tan(x2));
    }

    return 0;
}

// Function that checks whether the original input minus 90 is divisible by 180. If so, the secant is non-existent.
// Otherwise, it simply prints the secant of a double, by dividing 1 by the cosine of it.
double secant(double x, double x2) {
    if (fmod((x - 90), 180) == 0) {
        printf("There is no secant.\n");
    } else {
        printf("The secant is: %.4lf.\n", 1/cos(x2));
    }

    return 0;
}

// Function that checks whether the original input is divisible by 180. If so, the cosecant is non-existent.
// Otherwise, it simply prints the cosecant of a double, by dividing 1 by the sine of it.
double cosecant(double x, double x2) {
    if (fmod(x, 180) == 0) {
        printf("There is no cosecant.\n");
    } else {
        printf("The cosecant is: %.4lf.\n", 1/sin(x2));
    }

    return 0;
}

// Function that checks whether the original input is divisible by 180. If so, the cotangent is non-existent.
// Otherwise, it simply prints the cotangent of a double, by dividing 1 by the tangent of it.
double cotangent(double x, double x2) {
    if (fmod(x, 180) == 0) {
        printf("There is no cotangent.\n");
    } else {
        printf("The cotangent is: %.4lf.\n", 1/tan(x2));
    }

    return 0;
}

// Main function.
int main() {

    // Two variables for storing the original input and its angle.
    double a, a2;

    // It asks for and scans the value of the angle.
    printf("Give me an angle: \n");
    scanf("%lf", &a);

    // It multiplies the input by 180 and divides it by pi.
    a2 = a*0.0174533;

    // It uses the previously created functions.
    sine(a2);
    cosine(a2);
    tangent(a, a2);
    secant(a, a2);
    cosecant(a, a2);
    cotangent(a, a2);

    return 0;

}