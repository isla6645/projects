// Author: Nadia Islam
// CUNYID#: 24226645 
#include <iostream>
using namespace std;
int main(){
	string favpoke = "pikachu";
	string guess;

	cout << "Guess what my favorite pokemon is: ";
	cin >> guess;

	while (guess != favpoke){
		cout << "Guess my favorite pokemon: ";
		cin >> guess;
        }
		cout << "Correct! <3" << endl;

	return 0;
}


