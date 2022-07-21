#include <iostream>

using namespace std;
const int N = 110;
int dx[8] = {-1,1,0,0,-1,-1,1,1};
int dy[8] = {0,0,-1,1,-1,1,-1,1};
char g[N][N];
int n,m;
int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
			cin >> g[i][j];

	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(g[i][j] == '*'){
				cout <<'*';
			}else if(g[i][j] == '?'){
				int curr = 0;
				for(int k = 0;k < 8;k++){
					int x = i + dx[k];
					int y = j + dy[k];
					if(x >= 0 && x < n && j >= 0 && j < m){
						if(g[x][y] == '*')curr++;
					}else continue;
				}
				cout << curr;
			}
		}
		cout << endl;
	}
	return 0;
}