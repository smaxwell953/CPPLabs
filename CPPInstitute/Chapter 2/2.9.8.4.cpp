#include <iostream>
#include <cmath>
using namespace std;
//2.9.8.4

int main(void) {
double vector[] = { 1., 2., 3., 4., 5. };
int n = sizeof(vector) / sizeof(vector[5]);
double ArithmeticMean;
double HarmonicMean;
double GeometricMean;
double RootMeanSquare;
double x, y;

ArithmeticMean = (vector[0] + vector[1] + vector[2] + vector[3] + vector[4]) / n;

HarmonicMean = n / ((1 / vector[0]) + (1 / vector[1]) + (1 / vector[2]) + (1 / vector[3]) + (1 / vector[4]));

x = (vector[0] * vector[1] * vector[2] * vector[3] * vector[4]);

GeometricMean = pow(x,1.0/n);

y = (pow (vector[0], 2) + pow(vector[1], 2) + pow(vector[2], 2) + pow(vector[3], 2) + pow(vector[4], 2));

RootMeanSquare = pow(y / n,1.0/2);

cout << "Arithmetic Mean = " << ArithmeticMean << endl;
cout << "Harmonic Mean = " << HarmonicMean << endl;
cout << "Geometric Mean = " << GeometricMean << endl;
cout << "RootMean Square = " << RootMeanSquare << endl;
cout << endl;
}
