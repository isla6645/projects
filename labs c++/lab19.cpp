// Author: Nadia Islam
// CUNYID#: 24226645
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generateRandomNum(){
	return (10 + rand()%(9999-10+1));
}
void swapLast(int &a, int &b){
	int temp = a;
	a = a - a % 10 + b % 10;
	b = b - b % 10 + temp % 10;
}
void printLastDigit(int b){
	cout << b%10 << endl;
}
int secondLastDigit(int n){
	return (n / 10 - ((n / 100) * 10));
}

int main(){
    int x, y;

    srand(time(0));

    x = generateRandomNum(); // generateRandomNum() returns a number between 10 and 9999
    y = generateRandomNum();
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;

    /* swapLast is used to swap the last digits of two positive integers.
     * For example swapping the last digits in 123 and 1987 gives the numbers 127 and 1983.
     */
    swapLast(x, y);
    cout << "After swapping last digits: ";
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;

    printLastDigit(x+y); // prints the last digit of the input number

    // secondLastDigit retruns the second last digit of the input number
    // For example, the second last digit of 1983 is 8
    cout << "The second last digit of " << y << " is " << secondLastDigit(y) << endl;

    return 0;
}

