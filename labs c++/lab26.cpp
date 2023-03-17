// Author: Nadia Islam

#include <iostream>
using namespace std;
int main(){
	string firstname;
	string lastname;
	cout << "Enter your first and last name: ";
	cin >> firstname >> lastname; 
	string fullname = firstname + " " + lastname;
	for (int i = fullname.length()-1; i >= 0; i--)
		cout << fullname[i];
	cout << endl;
	char c = firstname[0];
	char b = lastname[0];
	firstname[0] += 32;
	lastname[0] += 32;
        cout << firstname << " " << lastname << endl;
	if (firstname[0] == 97 || firstname[0] == 101 || firstname[0] == 105 || firstname[0] == 111 || firstname[0] == 117) {
		firstname[0] -= 32;
		string fulltwo = firstname + " " + lastname + "way";
		cout << fulltwo << endl;
	}
        else {
		char e = firstname[0];
		firstname.erase(0,1);
	        firstname[0] -= 32;
		cout << firstname << " " << lastname << e << endl;
	}
	        	
	        	
	return 0;
}
