// Author: Nadia Islam
// CUNYID# : 24226645
#include <iostream>
using namespace std;
int main(){
	int n;
	int c = 1;
	cout << "Give me a positive integer < 10: ";
	cin >> n;

	while (n <=  0 || n >= 10 && c <= 2){
		cout << "Give me a positive integer < 10: ";
	        cin >> n;
	if (n <=  0 || n >= 10 && c == 2){
	        return 0;
	}
	        c++;	
	}


	int sum;
	for (int s = 1; s <= n; s++){
		sum = sum + s*s*s;
	}
	if (n == 1)
		cout << "1^3 = " << sum;
	else if (n == 2)
		cout << "1^3 + 2^3 = " << sum;

	else 
		cout << "1^3 + ... + " << n << "^3 = " << sum;

	

	cout << endl;
	return 0;
}
