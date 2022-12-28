// Author: Nadia Islam
// CUNYID#: 24226645
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


void printHello(string user){
        cout << "Hello " << user  << endl;
}
bool isNegative(int age){
        return (age < 0);
}
int twoDigitNum(){
        return (10 + rand() % 90);
}
int add3(int x, int y, int z){
	return (x + y + z);
}	
int lastDigit(int n){
	return (n % 10);
}

int main(){
        string user;
        int age, x, y, z;
        cout << "Enter your name: ";
        cin >> user;

        cout << "Enter your age: ";
        cin >> age;

        printHello(user);//printHello prints Hello to the input

        // isNegative returns true if the input is negative; otherwise, returns false
        if (isNegative(age)) {
                cout << "Age can't be negative" << endl;
                exit(0);
        }

        srand(time(0));

        x = twoDigitNum();// twoDigitNum returns a random 2-digit positive integer
        y = twoDigitNum();
        z = twoDigitNum();

        int sum = add3(x, y, z); // add3 returns the total of 3 input numbers
        cout << x << " + " << y << " + " << z << " = " << sum << endl;

        // lastDigit takes a number as the input and returns the last digit of the input
        cout << "Last digit of " << sum << " is " << lastDigit(sum) << endl;
        cout << "Last digit of " << age << " is " << lastDigit(age) << endl;

        return 0;
}

