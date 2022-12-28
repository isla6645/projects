// Author: Nadia Islam
// CUNYID#: 24226645
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

	        	
