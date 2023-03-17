// Author: Nadia Islam

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int c = 0;
	int array[5][4];
	int gap = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
		      array[i][j] = 10 + rand() % (99-10+1);
		      cout << array[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i <= 4; i++) {
		gap = array[i][1] - array[i][0];
		if (gap < 0) gap *= -1;
		for (int j = 0; j <= 2; j++) {
			if (gap < array[i][j+1] - array[i][j])
				gap = array[i][j+1] - array[i][j];
		}
		cout << "Max gap in row " << i << ": " << gap << endl;
	}

	cout << "# elements divisible by 3 or 5 in each rows: ";
	for (int i = 0; i <= 4; i++){
	c = 0;
		for (int j = 0; j <= 3; j++){
			if (array[i][j] % 3 == 0 || array[i][j] % 5 == 0)
				c++;
		}
		cout << c << " ";

	}
	cout << endl;

	return 0;
} 


