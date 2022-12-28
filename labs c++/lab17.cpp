// Name: Nadia Islam
// CUNY ID#: 24226645

#include <iostream>
using namespace std;

int add(int n1, int n2){
        return n1 + n2;
}

int subtract(int n1, int n2){
        return n1 - n2;
}

int multiply(int n1, int n2){
        return n1 * n2;
}

double divide(int n1, int n2){
        return (double)n1 / n2;
}

int main(){
        int n1, n2;
        string op;

        cout << "Enter the arithmetic expression: ";
        cin >> n1 >> op >> n2;
        cout << n1 << " " << op << " " << n2 << " = ";

        if (op == "+")
                cout << add(n1, n2) << endl;
        else if (op == "-")
                cout << subtract(n1, n2) << endl;
        else if (op == "x" || op == "X" || op == "*")
                cout << multiply(n1, n2) << endl;
        else if (op == "/")
                cout << divide(n1, n2) << endl;
        else
                cout << " is not a valid arithmetic expression." << endl;

        return 0;
}

