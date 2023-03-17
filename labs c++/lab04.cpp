// Author: Nadia Islam

#include <iostream>
using namespace std;
int main(){
	double tip = 0.;
	double mealPrice;
	double total = 0.;

	cout << "Please enter cost of meal: $ ";
        cin >> mealPrice;
	tip = mealPrice * 0.2;
        total = tip +  mealPrice;
        cout << "Tip amount: $ " << tip << endl;
        cout << "Total cost: $ " << total << endl;
        
        return 0;
}
