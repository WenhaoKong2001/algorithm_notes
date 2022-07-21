#include <iostream>
#include <cmath>
using namespace std;
const int N = 1e5 + 10;
char str[N];
int n;

void show(int target){
	int w = 0,l = 0;
	for(int i = 0;i < n;i++){
		if(str[i] == 'W')w++;
		else if(str[i] == 'L')l++;
		if((w >= target || l >= target) && abs(l - w) >= 2){
			cout << w << ":"<<l << endl;
			w = l = 0;
		}
	}
	cout << w << ":"<< l << endl;
}

int main(){
	char c;
	while(cin >> c && c != 'E'){
		if(c == 'W' || c == 'L')
			str[n++] = c;
	}
	show(11);
	cout << endl;
	show(21);
	return 0;
}