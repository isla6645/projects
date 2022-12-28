// Author: Nadia Islam
// CUNY ID #: 24226645
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	int a[5][4];

	for (int i = 0; i <= 4; i++){
		for (int j = 0; j <= 3; j++){
			a[i][j] = 10 + rand() % 90;
                        cout << a[i][j] << " ";
                }
                cout << endl;
        }
        cout << endl;
        for (int i = 0; i <= 3; i++){
                int smallGap = a[1][i] - a[0][i];
                        if (smallGap < 0) smallGap = -smallGap;

                for (int j= 0; j <= 3; j++){
			int gap = a[j][i] - a[j+1][i];
                        if (gap < 0) gap = (-1) * gap;
                        if (gap < smallGap) smallGap = gap; 

                }
                cout << "Min gap in a column " << i << ": " << smallGap << endl;
        }

        cout << "The average of even numbers in each column: ";
        for (int i = 0; i < 5; i++) {
		int c = 0, sum = 0;
                for (int j = 0; j < 4; j++){
                        if (a[i][j] % 2 == 0){ 
				c++; 
                                sum += a[i][j];
			}
		}
		cout << sum/(double)c << " "; 
	}
	cout << endl;

        return 0;
}
