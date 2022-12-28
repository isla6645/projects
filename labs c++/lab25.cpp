// Author: Nadia Islam
// CUNT ID  # : 24226645
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void f(int a[], int x){
	int sum = 0;
	int smallest = a[0];
	int largest = a[0];
	cout << "The smallest number, largest number, average of elements in the array: "; 
	for (int i = 0; i < x; i++){
		if (smallest > a[i]) 
		smallest = a[i];
	}
	cout << smallest << " ";  
	for (int i = 0; i < x; i++){
		if (largest < a[i]) 
		largest = a[i];
	}
	cout << largest << " ";
	for (int i = 0; i < x; i++){
		sum += a[i];
	}
	double av = sum/(double)x;
	cout << av;
}
void g(int a[][5], int rows, int columns){
	int sum = 0;	
        int smalltwo = a[0][0];
        int largtwo = a[0][0];
	cout << "The smallest number, largest number, average of elements in the array: ";
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++) {
			if (smalltwo > a[i][j])
			smalltwo = a[i][j];
		}
	}
	cout << smalltwo << " ";
	for (int i = 0; i < rows; i++){
                for (int j = 0; j < columns; j++) {
                        if (largtwo < a[i][j])
                        largtwo = a[i][j];
                }
        }
	cout << largtwo << " ";
	for (int i = 0; i < rows; i++){
                for (int j = 0; j < columns; j++) {
                        sum += a[i][j];
		}
	}
	cout << sum/(rows*columns*1.0) << endl;
} 
int main(){
	int x;
	cout << "Enter a positive integer that is less than 10: ";
	cin >> x;


	srand(time(0));
	if (x < 1 || x > 9) x = 1 + rand() % (9-1+1);

	int a[x], b[x][5];

	for (int i = 0; i < x; ++i){
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << endl;
        f(a, x); // print the smallest number, largest number, and average of elements of a
	cout << endl;

	for (int i = 0; i < x; ++i){
		for (int j = 0; j < 5; ++j){
			b[i][j] = rand() % 10;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	g(b, x, 5);// print the smallest number, largest number, and average of elements of b

	return 0;
}

