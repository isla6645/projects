// Author: Nadia Islam

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* Implementing the functions that are called by the given main function.
 * You are not allowed to change any code in the main function.
 * Note: use the best function title lines.
 *
 * All functions must be written in a recursive way except the hasFiveMoreDigits and has3 functions.
 * The hasFiveMoreDigits and has3 functions must be written in a non-recursive way
*/

bool hasFiveMoreDigits (int n) {
	if (n >= 10000 && n <= 1000000)
		return true;
	else
		return false;
}
int secondDigit (int n) {
	if (n >= 10 && n <= 99)
		return n % 10;
	return secondDigit (n / 10);
}
int sumFirst2Digits (int n) {
       if (n <= 99) {
               int second = n % 10;
               int first = n / 10;
               return first + second;
       }
       return sumFirst2Digits (n/10);
}
bool hasTwo (int n) {
	if (n%10==2)  return true;
	return hasTwo(n/10);
}
bool has3 (int n) {
	while (n > 0){
                if (n%10 == 3) return true;
		n/=10;
	}
		return false;
}
int replaceTwo (int n){
	if (n < 10) {
		if (n%10 == 2) return 5;
		return n;
	}
	if (n%10  == 2) return 5 + 10 * replaceTwo (n/10);
	return n % 10 + 10 * replaceTwo (n/10);
}
int removeThree (int n){
        if (n < 10) {
                if (n%10 == 3) return 0;
                return n;
        }
        if (n%10 == 3) return 10 * removeThree(n/10);
        return n % 10 + 10 * removeThree(n/10);
}


 

int main(){
	srand(time(0));

	int x, y;

	cout << "Enter an integer that is between 10,000 and 1,000,000: ";
	cin >> x;

	/* hasFiveMoreDigits returns true if the parameter is between 10,000 and 1,000,000
	 * otherwise, returns false
	 */
	if (!hasFiveMoreDigits(x)) x = 10000 + rand() % (1000000-10000+1);

	cout << x << endl;
	
	/* secondDigit that takes a positive integer parameter
	 * and returns the second digit of the parameter
	 */
        cout << "The second digit is " << secondDigit(x) << endl;

	/* sumFirst2Digits that takes a positive integer parameter
	 * and returns the sum of the first 2 digits of the parameter
	 */
	cout << "Sum of the first 2 digits: " << sumFirst2Digits(x) << endl;

	/* hasTwo that takes a positive integer parameter
	 * and returns true if the parameter contains the digit 2
	 * otherwise, return false
	 */
	if (hasTwo(x)){
		// replaceTwo that takes a positive integer parameter
		// and replaces every occurrence of the digit 2 with a 5
		y = replaceTwo(x);
		cout << "Replace every occurrence of the digit 2 with 5: " << y << endl;
	}

	/* has3 that takes a positive integer parameter
	 * and returns true if the parameter has the digit 3
	 * otherwise, return false
	 *
	 * Write the function has3 in a non-recursive way
	 */
	if (has3(x)){
		// removeThree that takes a positive integer parameter
		// and deletes all occurrences of the digit 3
		y = removeThree(x);
		cout << "Remove all occurrences of the digit 3: " << y << endl;
	}

	return 0;
}
