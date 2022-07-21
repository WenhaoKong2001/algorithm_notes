#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef pair<int,string> PIS;
const int N = 1e5 + 10;
int n,m;
PIS a[N];
int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		char str[11];
		int t;
		scanf("%d %s",&t,str);
		a[i] = {t,str};
	}

	int curr = 0;
	while(m--){
		int p,s;
		scanf("%d %d",&p,&s);
		if((!a[curr].first && p) || (a[curr].first && !p)){
			curr = (n + curr + s) % n;
		}else{
			curr = (n + curr - s) % n;
		}
	}
	cout << a[curr].second;
	return 0;
}