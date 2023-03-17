// Author: Nadia Islam

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int n;
	srand(time(0));
	cout << "Enter a 5-digit integer: ";
	cin >> n;
	if (n < 10000 || n > 99999){
		n = 10000 + rand() % (99999-10000+1);
		cout << "n = " << n << endl; 
	}
	else cout << "n = " << n << endl;
	int a[5];
	for (int i = 4; i >= 0; --i){
		a[i] = n % 10;
		n /= 10;
	}
	cout << "All even digits of n from left to right: ";
	for (int i = 0; i <= 4; i++){
		if (a[i] % 2 == 0)
			cout << a[i];
	}
	cout << endl;

	cout << "All odd digits of n from right to left: ";
	for (int i = 4; i >= 0; i--) {
		if (a[i] % 2 == 1)
			cout << a[i];
	}
	cout << endl;

	return 0;
}

