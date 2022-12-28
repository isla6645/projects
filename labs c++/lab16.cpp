// Author: Nadia Islam
// CUNYID#: 24226645
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
	srand(time(0));
	int n = 2 +rand() % (8 - 2 + 1);
	cout << n << endl;
	cout << sqrt(n * n *n) << endl;

	return 0;
}

