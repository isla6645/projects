// Author: Nadia Islam
// CUNYID#: 24226645
#include <iostream>
using namespace std;
int main () {
	int x;

	cout << "Give me an integer: ";
	cin >> x;	
	if ( x % 3 == 0 && x % 5 == 0 )
                cout << "fizz buzz" << endl;
	else if (x % 3 == 0)
		cout << "fizz" << endl;
	else if (x % 5 == 0)   
	        cout << "buzz" << endl;		
       	else
	        cout << x << endl;

        return 0;
}	
