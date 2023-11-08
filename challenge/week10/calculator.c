#include <stdio.h>


void summation(double *value1, double *value2, double *result) {
	*result = *value1 + *value2;
	return result;

	
}

void subtraction(double* value1, double* value2, double* result) {
	*result = *value1 - *value2;
	return result;
}

void multification(double* value1, double* value2, double* result) {
	*result = *value1 * *value2;
	return result;
}

void division(double* value1, double* value2, double* result) {
	*result = *value1 / *value2;
	return result;
}

int main() {
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %2.lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %2.lf \n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %2.lf \n", a, b, result);

	return 0;
}