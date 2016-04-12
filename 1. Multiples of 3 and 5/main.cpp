/* Project Euler 
 * Problem number 1
 * Multiples of 3 and 5
 *
 * Resolved by EmilioK
 */
 
#include <iostream>

int sumMultiples(int number, int divisor);
 
int main(int argc, char *argv[]) {
	int number = 1000;
	
	// We sum up the multiples of 3 and 5 inside 1000 and then we extract the commons (multiples of 15)
	int result = sumMultiples(number - 1, 3) + sumMultiples(number - 1, 5) - sumMultiples(number - 1, 15);
	
	std::cout << result;
}

/* Sum the multiples of a number below another number */
int sumMultiples(int number, int divisor) {
	int value = number / divisor;
	
	// Using the Euler formula to get the sum of the first 333, 199 and 66 integers
	// and then making them (the integers) multiples of 3, 5 or 15
	// 3 + 6 + 9 + ... + 999 = 3 * (1 + 2 + 3 + ... + 333)
	return divisor * (value * (value + 1)) / 2;
}


