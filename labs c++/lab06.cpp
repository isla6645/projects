// Author: Nadia Islam
// CUNYID#: 24226645
#include <iostream>
using namespace std;
int main() {
	int x, y;
	cout << "Enter two whole numbers: " << endl;
	cin >> x >> y;
	if ( x == y ) 
		cout << "1" << endl;
	else if ( x > y)
		cout << "2" << endl;
	else {
		cout << "3" << endl;
	}
	return 0;
}
