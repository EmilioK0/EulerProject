/* Project Euler 
 * Problem number 4
 * Largest palindrome product
 *
 * Resolved by EmilioK
 */
 
#include <iostream>
 
bool isPalindrome(int n);
 
int main(int argc, char *argv[]) {
	int result = 0, product;
	
	// i > 100 because 100 * 100 is not a palindrome
 	for (int i = 999; i > 100; i--) {
 		// j = i because i * j == j * i
 		for (int j = i; j > 100; j--) {
 			product = i * j;
 			
 			// Check if is palindrome
 			if (isPalindrome(product)) {
 				result = std::max(result, product);
 				
 				// The first palindrome in the loop will be the largest for that i
 				break;
 			}	
 		}
 	}
	
	std::cout << result;
}

bool isPalindrome(int n) {
	int number = n;
	int dig, rev = 0;
	
	while (n > 0) {
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}
	
	return number == rev;	
}
