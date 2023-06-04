#include <iostream>
using namespace std;
bool ok(int q[], int col){
	static int mp[3][3] = {{0, 2, 1},
		               {0, 2, 1},
			       {1, 2, 0}};
	static int wp[3][3] = {{2, 1, 0},
		               {0, 1, 2},
			       {2, 0, 1}};
	for (int i = 0; i < col; i++) {
		if (q[i] == q[col]){
			return false;
		}
		if (mp[col][q[i]] < mp[col][q[col]] && wp[q[i]][col] < wp[q[i]][i]) {
			return false;
		}
		if (wp[q[col]][i] < wp[q[col]][col] && mp[i][q[col]] < mp[i][q[i]]) {
			return false;
		}
	}
	return true;

}
void print(int q[]) {
	static int numbSol = 0;
	cout << "Solution #: " << numbSol++ << endl;
	cout << "Man:" << "\tWomen:" << endl;
	for (int i = 0; i < 3; i++){
		cout << i << "\t" << q[i] << endl;
	}
	cout << endl;
}
int main() {
	int q[3];
	int c = 0;
	q[c] = 0;
	while(c >= 0){
		c++;
		if(c > 2) {
			print(q);
			c--;
		}
		else {
			q[c] = -1;
		}
		while(c >= 0){
			q[c]++;
			if(q[c] == 3){
				c--;
			}
			else if(ok(q, c)){
				break;
			}
		}
        }
    return 0;
}

