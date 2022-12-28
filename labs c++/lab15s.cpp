// Author : Nadia Islam
// CUNYID#: 24226645
#include <iostream>
using namespace std;
int main(){
        int n;
        int c = 1;
        cout << "# columns of a triangle: ";
        cin >> n;
        while (c <= 2 && n % 2 == 0 || 3 > n && n > 11){
                cout << "# columns of a triangle: ";
                cin >> n;
                c++;
        }
        if (c > 2)
                n = 3;
	for (int copy = 1; copy <= 2; copy++)
	for (int r = 1; r <= 2 * n - 1; ++r) {
		for (int c = 1; c <= n; c++) {
			if (c <= r && c <= 2 * n - r && r % 2 == 0)
				cout << "*";
			else if (c <= r && c <= 2 * n - r && r % 2 != 0)
				cout << "O";
		}
		cout << endl; 
	}
          
        return 0;
}

