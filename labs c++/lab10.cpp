 // Author: Nadia Islam

#include <iostream>
using namespace std;
int main(){
        string favpoke = "pikachu";
        string guess;
        int c = 1;

        cout << "Guess what my favorite pokemon is: ";
        cin >> guess;

        while (c <= 2 && guess != favpoke){
		cout << "Wrong! Guess again: ";
                cin >> guess;
                c++;
	}

        if (guess == favpoke)
		cout << "Congratulations!" << endl; 
	
	return 0;
}
	



