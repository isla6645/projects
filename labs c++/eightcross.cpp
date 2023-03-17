// Author : Nadia Islam
#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int c) {  
    int helper[8][5] = {{-1},
                   {0, -1},
                   {0, -1},
                   {0, 1, 2, -1},
                   {0, 1, 3, -1},
                   {1, 4, -1},
                   {2, 3, 4, -1},
                   {3, 4, 5, 6, -1}};
    for(int i = 0; i < c; i++){
            if(*(q + c) == *(q + i)){
                return false;
            }
        }
    int temp = 0;
    while(helper[c][temp] != -1){
        if(abs(q[c] - q[helper[c][temp]]) == 1){
            return false;
        }
        temp++;
    }
    return true;
}
void printcross(int q[]){
    static int solutionNum = 1;
    cout << "Solution Number #" << solutionNum++ << ": " << endl;
    cout << "  " << q[0] << " " << q[1] << " " << endl;
    cout << q[2] << " " << q[3] << " " << q[4] << " " << q[5] << endl;
    cout << "  " << q[6] << " " << q[7] << " " << endl;
    cout << endl;
}
int main(){
    int cross[8];
    int c = 0; 
    cross[c] = 1;
    while(c >= 0){
        c++;
        if(c == 8){
            printcross(cross);
            c--;
        }
        else{
        cross[c] = 0;
        }
        while(c >= 0){
            cross[c]++;
            if(cross[c] == 9){
                c--;
            }
            else if(ok(cross, c)){
                break;
            }
        }
    }
    return 0;
}
