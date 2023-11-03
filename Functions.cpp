#include <cmath>
#include "Functions.h"


int add(int num1, int num2) {
	return num1 + num2;
}

int substraction(int num1, int num2) {
	return num1 - num2;
}

int multiplication(int num1, int num2) {
	return num1 * num2;
}

double division(int num1, int num2) {
	return static_cast<double>(num1) / static_cast<double>(num2);
}

int exponentiation(int num1, int num2) {
	return pow(num1, num2);
}