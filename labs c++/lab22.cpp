// Author: Nadia Islam

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	srand(time(0));
	int a[10]={};
	cout << "Elements in the array: ";
	for (int i = 0; i < 10; i++){
		a[i]= 10 + rand() % (99 - 10 + 1);
		cout << a[i] << " ";
	}
	cout << endl;
	int total = 0;
	for (int i = 0; i < 10; i++) 
		total += a[i]; 
	double average = (double)total / 10;
	cout << "Average of all elements: " << average << endl;
	cout << "Elements that are divisible by 3 or 5: ";
	for(int i = 0; i < 10; i++){
		if (a[i] % 3 == 0 || a[i] % 5 == 0)
			cout << a[i] << " ";
	}
	cout << endl;
	cout << "The smallest gap between adjacent elements: ";
	int minGap = a[1] - a[0];
	if (minGap < 0) minGap *= -1;
	for (int i = 1; i < 10; i++){
	      int gap = a[i] - a[i+1];
              if (gap < 0) gap *= -1;
	      if (minGap > gap) minGap = gap;
	}
	cout << minGap;
        cout << endl;

        	
	return 0;
}
