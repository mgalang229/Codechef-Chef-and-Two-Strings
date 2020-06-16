#include <bits/stdc++.h>

using namespace std;

#define SQ(a) (a)*(a)
#define ll long long
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define vi vector<int>

void decode() {
	string s1, s2;
	cin >> s1 >> s2;
	int x = 0, y = 0;
	for(int i = 0; i < (int)s1.size(); ++i) {
		if(s1[i] == '?' || s2[i] == '?') x++;
		else if(s1[i] != s2[i]) y++;
	}
	cout << y << " " << x + y << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
