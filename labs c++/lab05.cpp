// Author: Nadia Islam

#include <iostream>
using namespace std;
int main(){
	int pin = 2022;
	

	cout << "Please enter your 4-digit pin: " << endl;
	cin >> pin;

	if ( pin == 2022 )
		cout << "Correct Pin" << endl;
	else {
		cout << "Incorrect Pin" << endl;
	}
	return 0;
}

