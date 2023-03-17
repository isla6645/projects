// Author: Nadia Islam
// This project creates a simple calculator for users to divide, multiply, add, and subtract 2 integers. 
#include <iostream>
using namespace std;
int main(){
	int x, y;
	string op1; 

	cout << "Enter the arithmetic expression: ";
	cin >> x >> op1 >> y;

	if (op1 == "+")
		cout << x << op1 << y << " = " << x+y << endl;
	else if (op1 == "-")
                cout << x << op1 << y << " = " << x-y << endl;
	else if (op1 == "*" || op1 == "x"|| op1 == "X")
		cout << x << op1 << y << " = " << x*y << endl;
	else if (op1 == "/") {
		cout << x << op1 << y << " = " << endl;
	        cout << "Quotient is " << x/y << " and remainder is " << x%y << endl;
        }
	else 
                cout << "Not a valid arithmetic expression"  << endl;

	return 0;
}
