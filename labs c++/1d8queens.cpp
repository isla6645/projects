// Author: Nadia Islam
#include <iostream>
using namespace std;

bool ok(int queens[], int col) {
    for(int c = 7; c > 0; c--)
        for(int i = 0; i < c; i++)
            if(queens[c] == queens[i] || (c-i) == abs(queens[c] - queens[i]))
                return false;
    return true;
}

void print(int queens[]) {
    static int numbSol = 1;
    cout << "Solution #" << numbSol++ << endl;
    for (int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; ++j){
        if (queens[j] == i) cout << "1";
        else cout << "0";
        }
    cout << endl;

    }
}
int main() {
    int b[8]={0};

    for (int i0 = 0; i0 < 8; i0++)
        for (int i1 = 0; i1 < 8; i1++)
            for (int i2 = 0; i2 < 8; i2++)
                for (int i3 = 0; i3 < 8; i3++)
                    for (int i4 = 0; i4 < 8; i4++)
                        for (int i5 = 0; i5 < 8; i5++)
                            for (int i6 = 0; i6 < 8; i6++)
                                for (int i7 = 0; i7 < 8; i7++) {

                                    b[0] = i0;
                                    b[1] = i1;
                                    b[2] = i2;
                                    b[3] = i3;
                                    b[4] = i4;
                                    b[5] = i5;
                                    b[6] = i6;
                                    b[7] = i7;

                                    if(ok(b,8)) print(b);

                                    b[0] = 0;
                                    b[1] = 0;
                                    b[2] = 0;
                                    b[3] = 0;
                                    b[4] = 0;
                                    b[5] = 0;
                                    b[6] = 0;
                                    b[7] = 0;
                                }
}
