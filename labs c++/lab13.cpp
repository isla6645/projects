// Author: Nadia Islam

#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Give me an odd number >= 5: ";
	cin >> n;
	while (n % 2 == 0 || n < 5){
		cout << "Give me an odd number >= 5: ";
		cin >> n;
        } 
	for (int r = 1; r <= n; r++){
		for (int c = 1; c <= n; c++){
			if (c == r)
				cout << "X";
			else if (c > 1 && r == 1)
				cout << "O";
			else if (c < n && r == n)
				cout << "O";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
