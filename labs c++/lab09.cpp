// Author: Nadia Islam

#include <iostream>
using namespace std;
int main(){
	int in;

	cout << "Enter a number between 5 and 10: ";
	cin >> in;
	while (in < 5 || in > 10) {
		cout << "Enter a number between 5 and 10: ";
	        cin >> in;
	}
	while (in != 0) {
		cout << "*";
		in -= 1;	
	}
	cout << endl;
        return 0;
}	
