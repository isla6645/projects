// Author: Nadia Islam
// This program takes in an 8 digit id number from the user.
// Prints a triangular display which has the first 5 digits of the ID# on its top row. 
// Each later row is obtained by omitting the last digit from the number on the previous row.


#include <iostream>
using namespace std;
int main(){
	int id;
	int c = 1;
	cout << "Enter 8 digit CUNYID#: ";
	cin >> id;
	while (c <= 2 && !(id >= 10000000 && id <= 99999999)){
		c++;
		cout << "Enter 8 digit CUNYID#: ";
		cin >> id;
	}
	if (id >= 10000000 && id <= 99999999){
                cout << id / 1000 << endl;
	        cout << id / 10000 << endl;
		cout << id / 100000 << endl;
	        cout << id / 1000000 << endl;
	        cout << id / 10000000 << endl;	
	}
	else if (!(id >= 10000000 && id <= 99999999)){
		id = 23450678;
		cout << id / 1000 << endl;
                cout << id / 10000 << endl;
                cout << id / 100000 << endl;
                cout << id / 1000000 << endl;
                cout << id / 10000000 << endl;
	}
	return 0;
}

	        	
