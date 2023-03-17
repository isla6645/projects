// Author: Nadia Islam

#include <iostream>
using namespace std;

int main(){
     string name;
     string favColor;
     int age; 

     cout << "Hello, what is your name? ";
     cin >> name;
  
     cout << "Hello " << name << ", what is your favorite color? ";
     cin >> favColor;
     cout << name << ", Your favorite color is " << favColor;
     cout << ", and what is your age? ";
     cin >> age; 
     cout << name << ", your age is " << age << endl;

     return 0;
}
