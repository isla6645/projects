// Author: Nadia Islam
// CUNYID#: 24226645
#include <iostream>
using namespace std;
int main(){
	int x;
	cout << "Provide a whole number between 4 and 9: ";
	cin >> x;
	while (x < 4 || x > 9){
		cout << "Provide a whole number between 4 and 9: ";
		cin >> x;
	}
	for (int r = 1; r <= x; r++){
		for (int c = 1; c <= x; c++){
			if (r + c >= x + 1)
			       	cout << x+1-c;
			else 
				cout << "*";
	        }
		cout << endl;
	}
        return 0;
}

		        

