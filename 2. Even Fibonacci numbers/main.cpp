/* Project Euler 
 * Problem number 2
 * Even Fibonacci numbers
 *
 * Resolved by EmilioK
 */
 
#include <iostream>
#include <math.h>
 
int main(int argc, char *argv[]) {
	int result = 0;
	
	int maxNumber = 4000000;
	
	// We calculate the last number in the fibonacci sequence below 4000000
	// F(n) = (golden section) ^ n / sqrt(5), then:
	// n = log(F(n) * sqrt(5)) / log(golden section);
	int limit = log(maxNumber * sqrt(5)) / log((1 + sqrt(5)) * 0.5);
	
	int lastFibonacci = 0;
	int fibonacci = 1;
	
	// We start our for loop from the first value
	int nextSum = 1;
	
	for (int i = 1; i < limit; i++) {
		int aux = fibonacci;
		fibonacci = fibonacci + lastFibonacci;
		lastFibonacci = aux;
		
		// The even-valued numbers in the fibonacci sequence are placed on the 3n + 2 position
		if (nextSum == 2) {
			result += fibonacci;
			nextSum = 0;
		} else { nextSum++; }
	}
	
	std::cout << result;
}

